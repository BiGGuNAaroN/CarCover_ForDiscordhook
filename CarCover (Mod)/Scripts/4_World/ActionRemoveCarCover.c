class ActionRemoveCarCoverCB : ActionContinuousBaseCB
{
    override void CreateActionComponent()
    {
        m_ActionData.m_ActionComponent = new CAContinuousTime(5);
    }
}

class ActionRemoveCarCover : ActionCoverUncoverCar
{
    void ActionRemoveCarCover()
    {
        m_CallbackClass = ActionRemoveCarCoverCB;
        m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_CRAFTING;
        m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
    }

    override void CreateConditionComponents()
    {
       	m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTCursor(UAMaxDistances.DEFAULT);
		
    }

    override string GetText()
    {
        return "#CC_uncover_vehicle";
    }
	
	override typename GetInputType()
	{
		return ContinuousInteractActionInput;
	}

    override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
    {
		if(!target)
			return false;
		
		if (!target.GetObject())
			return false;
		
		if (player.GetItemInHands())
			return false;
		/*
		Print("object " + target.GetObject() );
		
		CarCoverBase cover = CarCoverBase.Cast(target.GetObject());
		if(!cover)
		{
				
			return false;
		}
		*/	
		#ifdef BASICTERRITORIES
		if (!TerritoryFlag.HasTerritoryPermAtPos(player.GetIdentity().GetId(), TerritoryPerm.REMOVECARCOVER, target.GetObject().GetPosition()))
		{
    		GetBasicTerritoriesConfig().SendNotification(GetBasicTerritoriesConfig().DismantleWarningMessage, TerritoryIcons.DismantleWarning);
    		return false;
		}
		#endif
		
		#ifdef CCEXPANSTER
		if (player.IsInTerritory() && !player.IsInsideOwnTerritory())
		{
			return false;
		}
		#endif
		
        return true;
    }

    override void OnFinishProgressServer(ActionData action_data)
    {
        PlayerBase player = PlayerBase.Cast(action_data.m_Player); 
		
		EntityAI carcover = EntityAI.Cast(action_data.m_Target.GetObject());
		vector carpos = carcover.GetPosition();
		//CCLogger.Log("Dupe check " + CheckDupe(carpos));
		if (CheckDupe(carpos))
		{
			CCLogger.Log("Warning DUPE detected !!! Player " + action_data.m_Player.GetIdentity().GetName() + " (" + action_data.m_Player.GetIdentity().GetPlainId() + ") at position " + carpos);	
		}
		vector caror = carcover.GetOrientation();
		carcover.SetPosition("0 0 0".ToVector());
		//CCLogger.Log("XXXXX child " + carcover.GetChildren() + " " + carcover + " pos " + EntityAI.Cast(carcover.GetChildren()).GetPosition() );
		string coverclass = carcover.GetType();
		CarCoverBase carcoverb;
		Class.CastTo(carcoverb,carcover);
		carpos[1] = carpos[1] - GetOffset(carcover.GetType());
		//CarScript car = CarScript.Cast(GetGame().CreateObjectEx("OffroadHatchback", carpos, ECE_PLACE_ON_SURFACE, RF_DEFAULT ));
		Object carobj = Object.Cast( GetGame().CreateObject( carcoverb.GetCarClass() , carpos , true, false, true ));
		//carobj.SetOrientation(caror);
		//carobj.SetDirection(carcover.GetDirection());
		//synchronizace rotace pomoci rpc
		
		CarScript car;
		Class.CastTo(car,carobj);
		//if !car drop inventory of cover if car not exists anymore - thx Wardog for hint
		//MiscGameplayFunctions.DropAllItemsInInventoryInBounds
		/*
		if (car == null)
		{
			
		}
		*/
		carcoverb.RestoreCarOrientation(car);
		EntityAI carent;
		Class.CastTo(carent,carobj);
		dBodyActive(car, ActiveState.INACTIVE);
		dBodyDynamic(car, false);
		carent.SetPosition(carpos);
		dBodyActive(car, ActiveState.ACTIVE);
		dBodyDynamic(car, true);
		
		GetGame().RemoteObjectCreate( car );
		//car.Synchronize();
		carcover.GetInventory().UnlockInventory(HIDE_INV_FROM_SCRIPT);
		//carent.SetAnimationPhase("wheelsideplate1", 1.0);
		//carent.SetAnimationPhase("wheelsideplate2", 1.0);
		EntityAI sourceItem = carcover;
		//EntityAI targetItem = EntityAI.Cast(car);
		array<EntityAI> children = new array<EntityAI>;
		sourceItem.GetInventory().EnumerateInventory(InventoryTraversalType.LEVELORDER, children);
		int count = children.Count();
		float itemhealth;
		bool isruined, islocked;
		for (int i = 0; i < count; i++)
		{			
			EntityAI child = children.Get(i);
			if (child)
			{
				isruined = false;
				islocked = false;
				if (child.IsRuined())
				{
					itemhealth = child.GetHealth("", "");
					child.SetHealthMax("","");
					isruined = true;
					
				}
				if (child.IsLockedInSlot())
				{
					islocked = true;
				}
				InventoryLocation child_src = new InventoryLocation;
				child.GetInventory().GetCurrentInventoryLocation( child_src );
				
				InventoryLocation child_dst = new InventoryLocation;
				child_dst.Copy( child_src );
				child_dst.SetParent( car );
				//CCLogger.Log("before copy item " + child + " x " + GameInventory.LocationCanAddEntity(child_dst));
				//if (GameInventory.LocationCanAddEntity(child_dst))
				//{
					// try to move it to the same exact place in dst
					//targetItem.GetInventory().TakeToDst(InventoryMode.LOCAL, child_src, child_dst);
					bool kokot = car.GetInventory().TakeToDst(InventoryMode.SERVER, child_src, child_dst);
					//CCLogger.Log("copy item " + child + " x " + kokot);
					if (isruined)
					{
						child_dst.GetItem().SetHealth("", "", itemhealth);
					}
					if (islocked)
					{
						ItemBase.Cast(child_dst.GetItem()).LockToParent();
					}
					//targetItem.Update();
				//}

			}
		}

		carcoverb.FillFluids(car);
		carcoverb.RestoreCarDamage(car);
		carcoverb.RestoreCarLock(car);
		//car.Fill( CarFluid.FUEL, carcoverb.GetFuel() * car.GetFluidCapacity( CarFluid.FUEL ) );
		//Print("carcover get fuel " + carcoverb.GetFuel() + " capacity " + car.GetFluidCapacity( CarFluid.FUEL ));
		
		float coverhealth = carcoverb.GetCoverItemHealth();
		CCLogger.Log("Player " + action_data.m_Player.GetIdentity().GetName() + " (" + action_data.m_Player.GetIdentity().GetPlainId() + ") uncovered " + carcoverb.GetCarClass() + " at " + car.GetPosition());
		carcover.Delete();
		//car.SetLifetime( 3888000 ); ////////
		//CCLogger.Log("car TTL " + car.GetEconomyProfile().GetLifetime());
		if (car.GetEconomyProfile() && car.GetEconomyProfile().GetLifetime() > 0)
		{
			car.SetLifetime( 3888000 );
		} else {
			car.IncreaseLifetime();
		}
		//car.IncreaseLifetime();
		
		//doplneni
		
		//////////// doplnit
		
		car.Fill( CarFluid.USER1, car.GetFluidCapacity( CarFluid.USER1 ));
		car.Fill( CarFluid.USER2, car.GetFluidCapacity( CarFluid.USER2 ));
		car.Fill( CarFluid.USER3, car.GetFluidCapacity( CarFluid.USER3 ));
		car.Fill( CarFluid.USER4, car.GetFluidCapacity( CarFluid.USER4 ));
		
		EntityAI camonet;		
		if (coverclass.Contains("Cover_Winter"))
		{
			//camonet = GetGame().CreateObject( "CamoNetWinter", player.GetPosition() );
			camonet = action_data.m_Player.GetHumanInventory().CreateInHands("CamoNetWinter");
		} else if (coverclass.Contains("Cover_Civil"))
		{
			//camonet = GetGame().CreateObject( "CamoNetCivil", player.GetPosition() );
			camonet = action_data.m_Player.GetHumanInventory().CreateInHands("CamoNetCivil");
		} else if (coverclass.Contains("Cover_Desert"))
		{
			//camonet = GetGame().CreateObject( "CamoNetCivil", player.GetPosition() );
			camonet = action_data.m_Player.GetHumanInventory().CreateInHands("CamoNetDesert");
		}
			else
		{
			//camonet = GetGame().CreateObject( "CamoNet", player.GetPosition() ); 
			camonet = action_data.m_Player.GetHumanInventory().CreateInHands("CamoNet");
		}
		
		//createinhands
		camonet.SetHealth( "", "Health", coverhealth);
		


    }
	
	float GetOffset(string covername)
	{
		CCConfig config = GetDayZGame().GetCarCoverConfig();
		int count = config.CarCovers.Count();
		for (int i = 0; i < count; i++)
		{
			if (covername.Contains(config.CarCovers.Get(i).CoverName))
			{
				return config.CarCovers.Get(i).Offset;
			}
		}
		return 0;
	}
	
	bool CheckDupe(vector posi)
	{
		array<Object> objects_in_vicinity;
		array<CargoBase> proxyCargos;
		int j;
		Object object_in_radius;		
		objects_in_vicinity = new array<Object>;
		proxyCargos = new array<CargoBase>;
		GetGame().GetObjectsAtPosition3D(posi, 0.2, objects_in_vicinity, proxyCargos);
		//CCLogger.Log("Objects " + objects_in_vicinity.Count() );
		int num = 0;
		for ( j = 0; j < objects_in_vicinity.Count(); j++ )
		{
			object_in_radius = objects_in_vicinity.Get(j);
			//CCLogger.Log("Object " + object_in_radius.ClassName());
			if (object_in_radius.IsKindOf("CarCoverBase"))
			{
				//CCLogger.Log("Found cover " + posi.ToString());
				//GetGame().ObjectDelete(object_in_radius);
				num++;
				if (num>1)
				{
					GetGame().ObjectDelete(object_in_radius);
					//CCLogger.Log("Dupe deleted at " + posi.ToString());	
				}					
			}
		}
		if (num > 1)
		{
			return true;
		}
		return false;
	}
	
};
	