class ActionAddCarCoverCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
    {
        m_ActionData.m_ActionComponent = new CAContinuousTime(5);
    }	
}

class ActionAddCarCover : ActionCoverUncoverCar
{
    void ActionAddCarCover()
    {
        m_CallbackClass = ActionAddCarCoverCB;
        m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_CRAFTING;
		m_FullBody = true;
        m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;

    }

    override void CreateConditionComponents()
    {
       	m_ConditionItem = new CCINonRuined;
    	//m_ConditionTarget = new CCTNone;
		m_ConditionTarget = new CCTCursor(UAMaxDistances.DEFAULT);

    }

    override string GetText()
    {
        return "#CC_cover_vehicle";
    }

    override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
    {	
		/*
		array<ref ModInfo> mods = new array<ref ModInfo>();
		GetGame().GetModInfos(mods);
		bool installedMod = false;
		for (int j = 0; j < mods.Count(); j++) {
		  ModInfo mod = mods.Get(j);
		  string modname = mod.GetName();
		  //CCLogger.Log("mod " + modname);
			if (modname == "Basic Territories") {
		    installedMod = true;
		  }
		}
		*/
		if(!target)
			return false;
		
		if (!target.GetObject())
			return false;

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
	
		CarScript car = CarScript.Cast(target.GetObject());

		if(!car)
		{
			car = CarScript.Cast(target.GetParent());   
			if(!car)
				return false;
			if (car.IsRuined())
				return false;
		}
		for( int i =0; i < car.CrewSize(); i++ )
		{
			Human crew = car.CrewMember( i );
			if ( !crew )
				continue; 
			else
				return false;
		}
		if (car.IsRuined())
			return false;
		
		if (GetGame().IsServer())
		{
			CarScript carobj = CarScript.Cast(target.GetObject());
			if (!carobj)
			{
				carobj = CarScript.Cast(target.GetParent());
			}
			EntityAI carr;
			Class.CastTo(carr,carobj);
			
			string covercls = GetDayZGame().GetCoverName(carr.GetType());
			if (item.ClassName().Contains("Winter"))
			{
				covercls = covercls + "_Winter";
			} else if (item.ClassName().Contains("Civil")) 
			{
				covercls = covercls + "_Civil";
			} else if (item.ClassName().Contains("Desert")) 
			{
				covercls = covercls + "_Desert";
			}
			if (covercls.Contains("NotSupported"))
			{
				return false; //no idea
			}
		
		}
		
				
        return true;
    }
	/*
	override void OnExecuteClient( ActionData action_data )
	{
		ClearInventoryReservationEx(action_data);
	}
	*/
	// prerusit pokud neexistuje cover
	// a na klientu v zaveru vymazat konecne bez chyby
	override void OnFinishProgressClient(ActionData action_data)
	{
		if (action_data.m_MainItem )
		{
			action_data.m_MainItem.DeleteOnClient();
		}

	}
	
    override void OnFinishProgressServer(ActionData action_data)
    {
        PlayerBase player = PlayerBase.Cast(action_data.m_Player);
		CarScript carobj = CarScript.Cast(action_data.m_Target.GetObject());
		if (!carobj)
		{
			carobj = CarScript.Cast(action_data.m_Target.GetParent());
		}
		EntityAI car;
		Class.CastTo(car,carobj);
		///CCLogger.Log("class " + car.GetType());
		vector carpos = car.GetPosition();
		vector caror = car.GetOrientation();
		//Print("car pos " + carpos + " ori " + caror);
		
		//porovani konfigu a nalezeni spravneho coveru
		
		string covercls = GetDayZGame().GetCoverName(car.GetType());
		if (action_data.m_MainItem.ClassName().Contains("Winter"))
		{
			covercls = covercls + "_Winter";
		} else if (action_data.m_MainItem.ClassName().Contains("Civil")) 
		{
			covercls = covercls + "_Civil";
		} else if (action_data.m_MainItem.ClassName().Contains("Desert")) 
		{
			covercls = covercls + "_Desert";
		}
		if (covercls.Contains("NotSupported"))
		{
			return;
		}
		CarCoverBase carcover = CarCoverBase.Cast( GetGame().CreateObject( covercls, "0 0 0" ));
		if (!carcover)
		{
			CCLogger.Log("Player " + action_data.m_Player.GetIdentity().GetName() + " tried cover " + car.GetType() + " but object " + covercls + " not exists!");
			return;
		}
		carcover.StoreFluids(CarScript.Cast(car));
		carcover.StoreCarDamage(CarScript.Cast(car));
		carcover.StoreCarLock(CarScript.Cast(car));
		carcover.StoreCarClass(car.GetType());
		carcover.StoreCarOrientation(CarScript.Cast(car));
		EntityAI sourceItem = car;
		EntityAI targetItem = carcover; //bylo CAST
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
					//CCLogger.Log("child " + child + " is locked");
					islocked = true;
				}
					
				InventoryLocation child_src = new InventoryLocation;
				child.GetInventory().GetCurrentInventoryLocation( child_src );
				
				InventoryLocation child_dst = new InventoryLocation;
				child_dst.Copy( child_src );
				child_dst.SetParent( carcover );

				if (GameInventory.LocationCanAddEntity(child_dst))
				{
					// try to move it to the same exact place in dst
					//targetItem.GetInventory().TakeToDst(InventoryMode.LOCAL, child_src, child_dst);
					carcover.GetInventory().TakeToDst(InventoryMode.SERVER, child_src, child_dst);
					if (isruined)
					{
						child_dst.GetItem().SetHealth("", "", itemhealth);
					}
					if (islocked)
					{
						ItemBase.Cast(child_dst.GetItem()).LockToParent();
					}
					//targetItem.Update();
				}

			}
		}
		//lada ma 15 damage zon
		//ulozit i fluidy
		//a nazev classy carbody
		//dBodyActive(car, ActiveState.INACTIVE);
		//dBodyDynamic(car, false);

		//GetGame().RemoteObjectDelete(Object.Cast(car));
		///CCLogger.Log("XXXX added child " + carcover.GetChildren() + " " + carcover);
		//carcover.Update();
		///car.Update();
		
		
		
		
		//car.HideAllSelections();
		
		//carcover.GetInventory().TakeEntityAsAttachment(InventoryMode.SERVER, car);
		//carcover.GetInventory().CreateEntityInCargo("Apple");
		//carpos[1] = carpos[1] + 2;
		CCLogger.Log("Player " + action_data.m_Player.GetIdentity().GetName() + " (" + action_data.m_Player.GetIdentity().GetPlainId() + ") covered " + car.GetType() + " at " + car.GetPosition());
		car.Delete(); ////////////
		carpos[1] = carpos[1] + GetOffset(covercls);
		//sem dat check jestli uz tam cover neni
		//CCLogger.Log("Dupe check " + CheckDupe(carpos));
		carcover.SetPosition(carpos);
		carcover.SetOrientation(caror);
		
		GetGame().RemoteObjectTreeDelete(carcover);
		GetGame().RemoteObjectTreeCreate(carcover);
		
		EntityAI entcarcover;
		Class.CastTo(entcarcover,carcover);
		
		/*
		dBodyActive(car, ActiveState.INACTIVE);
		dBodyDynamic(car, false);
		car.SetPosition("0 0 0");
		CCLogger.Log("XXXX added child2 " + carcover.GetChildren() + " pos " + car.GetPosition());
		entcarcover.AddChild( car, -1, false );
		CCLogger.Log("XXXX added child3 " + carcover.GetChildren() + " pos " + car.GetPosition());
		//GetGame().GetMission().OnEvent(ChatMessageEventTypeID, new ChatMessageEventParams(CCDirect, "", "kokot message", ""));
		*/
		
		carcover.GetInventory().LockInventory(HIDE_INV_FROM_SCRIPT);
		//GetGame().RemoteObjectTreeDelete(carcover);
        //GetGame().RemoteObjectTreeCreate(carcover);
		carcover.Update();
		carcover.SetLifetime( 3888000 );
		ItemBase hands_item = action_data.m_Player.GetItemInHands();
    	if (hands_item) 
    	{
        	carcover.StoreCoverItemHealth(hands_item.GetHealth());
			action_data.m_MainItem.Delete();
			//player.GetInventory().DropEntity(InventoryMode.SERVER, player, hands_item);
			//hands_item.DeleteSave();		

    	}
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
		for ( j = 0; j < objects_in_vicinity.Count(); j++ )
		{
			object_in_radius = objects_in_vicinity.Get(j);
			//CCLogger.Log("Object " + object_in_radius.ClassName());
			if (object_in_radius.IsKindOf("CarCoverBase"))
			{
				//CCLogger.Log("Found cover " + posi.ToString());
				//GetGame().ObjectDelete(object_in_radius);
				return true;
		
			}
		}
		return false;
	}

	
};