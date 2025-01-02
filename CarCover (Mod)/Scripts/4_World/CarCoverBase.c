class CarCoverBase extends Container_Base
{
	//classname
	protected string m_CarClassName;
	
	//orientation
	protected vector m_CarOrientation;
	
	//fluids
	protected float m_FuelAmmount;
	protected float m_CoolantAmmount;
	protected float m_OilAmmount;
	protected float m_BrakeAmmount;
	
	//damagezones
	protected ref array<ref Param2<string,float>> m_CarDamageData = new array<ref Param2<string,float>>; 
	
	//car locks - much car keys
	protected bool m_CCIsCKLocked;
	protected bool m_CCHasCKAssigned;
	protected int m_CCCarKeyId;
	protected int m_CCCarScriptId;
	
	// MCK New added
	protected int m_CCCarLastInteractedWithUnixTime;
	protected bool m_CCCarHadPlayerInteraction;
	protected string m_CCCarOriginalOwnerName;
	protected string m_CCCarOriginalOwnerId;
	
	//car locks - trader
	protected bool m_CCTrader_Locked;
    protected bool m_CCTrader_HasKey;
    protected int m_CCTrader_VehicleKeyHash;
	
	//car locks - traderplus
	protected bool m_CCCarLock_IsLocked;
    protected int  m_CCCarLockOwner;
    protected int  m_CCCarLockPassword;
    protected int  m_CCSoundToPlay;
	
	//health of cover
	protected int m_CCitemHealth;
	#ifdef GAMELABS
	protected ref _Event _registeredInstance;
	#endif
	void CarCoverBase()
	{	
		#ifdef GAMELABS
		GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(GamelabsRegistration, 100, false);
		#endif
		GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(LockInv, 100, false);	
	}
	#ifdef GAMELABS
	void GamelabsRegistration()
	{
		//CCLogger.Log("CFTools found in world");
		_registeredInstance = new _Event(this.GetCarClass(), "car-garage", this);
		if(GetGameLabs()) 
		{
            if(GetGameLabs().IsServer()) 
			{
                GetGameLabs().RegisterEvent(this._registeredInstance);
            }
        }
	}
	#endif
	void ~CarCoverBase() 
	{
        #ifdef GAMELABS
		if(GetGameLabs()) 
		{
            if(GetGameLabs().IsServer()) 
			{
                if(this._registeredInstance) 
				{ 
                   GetGameLabs().RemoveEvent(this._registeredInstance);
                }
            }
        }
		#endif
    }    
	
	override bool IsInventoryVisible()
	{
		return false;
	}
	/*
	override void EEHealthLevelChanged(int oldLevel, int newLevel, string zone)
	{
		CCLogger.Log("Covered " + m_CarClassName + " getting damage at " + this.GetPosition());
		super.EEHealthLevelChanged(oldLevel, newLevel, zone);
	}
	*/
	override bool OnStoreLoad(ParamsReadContext ctx, int version)
	{   
		if ( !super.OnStoreLoad(ctx, version) )
			return false;
		
		if (!ctx.Read(m_CarClassName))
			return false;
		
		if (!ctx.Read(m_CarOrientation))
			return false;
			
		if (!ctx.Read(m_FuelAmmount))
			return false;
		
		if (!ctx.Read(m_CoolantAmmount))
			return false;
		
		if (!ctx.Read(m_OilAmmount))
			return false;
		
		if (!ctx.Read(m_BrakeAmmount))
			return false;
		
		if (!ctx.Read(m_CarDamageData))
			return false;
		
		if (!ctx.Read(m_CCitemHealth))
			return false;
		
		#ifdef MuchCarKey
		if (!ctx.Read(m_CCIsCKLocked))
			return false;
		
		if (!ctx.Read(m_CCHasCKAssigned))
			return false;
		
		if (!ctx.Read(m_CCCarKeyId))
			return false;
		
		if (!ctx.Read(m_CCCarScriptId))
			return false;
		
		// MCK New added
		if (!ctx.Read(m_CCCarLastInteractedWithUnixTime))
			return false;
		
		if (!ctx.Read(m_CCCarHadPlayerInteraction))
			return false;
		
		if (!ctx.Read(m_CCCarOriginalOwnerName))
			return false;
		
		if (!ctx.Read(m_CCCarOriginalOwnerId))
			return false;
		#endif
		
		#ifdef TRADER
		if (!ctx.Read(m_CCTrader_Locked))
			return false;
		if (!ctx.Read(m_CCTrader_HasKey))
			return false;
		if (!ctx.Read(m_CCTrader_VehicleKeyHash))
			return false;
		#endif
		
		#ifdef CarLock
		#ifndef CARLOCKDISABLE
		if (!ctx.Read(m_CCCarLock_IsLocked))
			return false;
		if (!ctx.Read(m_CCCarLockOwner))
			return false;
		if (!ctx.Read(m_CCCarLockPassword))
			return false;
		if (!ctx.Read(m_CCSoundToPlay))
			return false;
		#endif
		#endif
				
		return true;
	}
	
	override void OnStoreSave(ParamsWriteContext ctx)
	{
		super.OnStoreSave(ctx);
		
		ctx.Write(m_CarClassName);
		ctx.Write(m_CarOrientation);
		ctx.Write(m_FuelAmmount);
		ctx.Write(m_CoolantAmmount);	
		ctx.Write(m_OilAmmount);	
		ctx.Write(m_BrakeAmmount);
		ctx.Write(m_CarDamageData);
		ctx.Write(m_CCitemHealth);
		#ifdef MuchCarKey
		ctx.Write(m_CCIsCKLocked);
		ctx.Write(m_CCHasCKAssigned);
		ctx.Write(m_CCCarKeyId);
		ctx.Write(m_CCCarScriptId);
		
		// MCK New added
		ctx.Write(m_CCCarLastInteractedWithUnixTime);
		ctx.Write(m_CCCarHadPlayerInteraction);
		ctx.Write(m_CCCarOriginalOwnerName);
		ctx.Write(m_CCCarOriginalOwnerId);
		#endif
		
		#ifdef TRADER
		ctx.Write(m_CCTrader_Locked);
    	ctx.Write(m_CCTrader_HasKey);
    	ctx.Write(m_CCTrader_VehicleKeyHash);  
		#endif
		
		#ifdef CarLock
		#ifndef CARLOCKDISABLE
		ctx.Write(m_CCCarLock_IsLocked);
		ctx.Write(m_CCCarLockOwner);
		ctx.Write(m_CCCarLockPassword);
		ctx.Write(m_CCSoundToPlay);
		#endif
		#endif

	}
	
	void StoreCarOrientation(CarScript car)
    {
        m_CarOrientation = car.GetOrientation();
    }

    void RestoreCarOrientation(CarScript car)
    {
        car.SetOrientation( m_CarOrientation );
    }
	
	
	void StoreFluids(CarScript car)
	{
		m_FuelAmmount = car.GetFluidFraction( CarFluid.FUEL );
		m_CoolantAmmount = car.GetFluidFraction( CarFluid.COOLANT );
		m_OilAmmount = car.GetFluidFraction( CarFluid.OIL );
		m_BrakeAmmount = car.GetFluidFraction( CarFluid.BRAKE );
	}
	
	void FillFluids(CarScript car)
	{
		car.Fill(CarFluid.FUEL, m_FuelAmmount * car.GetFluidCapacity( CarFluid.FUEL ));
		car.Fill(CarFluid.COOLANT, m_CoolantAmmount * car.GetFluidCapacity( CarFluid.COOLANT ));
		car.Fill(CarFluid.OIL, m_OilAmmount * car.GetFluidCapacity( CarFluid.OIL ));
		car.Fill(CarFluid.BRAKE, m_BrakeAmmount * car.GetFluidCapacity( CarFluid.BRAKE ));
	}
	
	 void StoreCarDamage(Car car)
    {
        array<array<string>> components;
        
        DamageZoneMap zonemap = car.GetEntityDamageZoneMap();
        components = zonemap.GetValueArray();
        
        for ( int i=0; i < components.Count(); i++)
        {
            array<string> DmgZoneElement = components.Get(i);
            for ( int j=0; j < DmgZoneElement.Count(); j++)
            {
                string DamageZone = zonemap.GetKey(i);
                float value = car.GetHealth( DamageZone, "");

                m_CarDamageData.Insert( new Param2<string,float>( DamageZone, value ));
            }
        }
		float dmg = car.GetHealth( "", "");
		m_CarDamageData.Insert( new Param2<string,float>( "vehikl_kastle", dmg ));
		dmg = car.GetHealth01("Engine", "");
		m_CarDamageData.Insert( new Param2<string,float>( "vehikl_motor", dmg ));
		dmg = car.GetHealth01("FuelTank", "");
		m_CarDamageData.Insert( new Param2<string,float>( "vehikl_nadrz", dmg ));
    }
    
    void RestoreCarDamage(Car car)
    {
        for ( int i=0; i < m_CarDamageData.Count(); i++)
        {
            Param2<string,float> BodyDamageZone = m_CarDamageData.Get(i);
            if ( BodyDamageZone.param1 == "vehikl_kastle")
			{
				car.SetHealth( "", "", BodyDamageZone.param2);
			}
			else if (BodyDamageZone.param1 == "vehikl_motor")
			{
				car.SetHealth01( "Engine", "", BodyDamageZone.param2);
			}
			else if (BodyDamageZone.param1 == "vehikl_nadrz")
			{
				car.SetHealth01( "FuelTank", "", BodyDamageZone.param2);
			}
			else
			{
				car.SetHealth( BodyDamageZone.param1, "", BodyDamageZone.param2);
			}
        }
    }
	
	void StoreCarLock(CarScript car)
	{
		//CCLogger.Log("BEFORE MCK");
		#ifdef MuchCarKey
		//CCLogger.Log("MCK FOUND");
		m_CCIsCKLocked = car.m_IsCKLocked;
		m_CCHasCKAssigned = car.m_HasCKAssigned;
		m_CCCarKeyId = car.m_CarKeyId;
		m_CCCarScriptId = car.m_CarScriptId;
		
		// MCK New added
		m_CCCarLastInteractedWithUnixTime = car.m_LastInteractedWithUnixTime;
		m_CCCarHadPlayerInteraction = car.m_HadPlayerInteraction;
		m_CCCarOriginalOwnerName = car.m_OriginalOwnerName;
		m_CCCarOriginalOwnerId = car.m_OriginalOwnerId;
		#endif
		
		#ifdef TRADER
		//CCLogger.Log("TRADER FOUND");
		m_CCTrader_Locked = car.m_Trader_Locked;
    	m_CCTrader_HasKey = car.m_Trader_HasKey;
    	m_CCTrader_VehicleKeyHash = car.m_Trader_VehicleKeyHash;    
		#endif
		
		#ifdef CarLock
		//CCLogger.Log("DISABLED OUTSIDE");
		#ifndef CARLOCKDISABLE
		//CCLogger.Log("DISABLED INSIDE");
		m_CCCarLock_IsLocked = car.m_CarLock_IsLocked;
    	m_CCCarLockOwner = car.m_CarLockOwner;
    	m_CCCarLockPassword = car.m_CarLockPassword;
    	m_CCSoundToPlay = car.m_SoundToPlay;
		#endif
		#endif		
	}
	
	void RestoreCarLock(CarScript car)
	{
		#ifdef MuchCarKey
		car.m_IsCKLocked = m_CCIsCKLocked;
		car.m_HasCKAssigned = m_CCHasCKAssigned;
		car.m_CarKeyId = m_CCCarKeyId;
		car.m_CarScriptId = m_CCCarScriptId;
		
		// MCK New added
		car.m_LastInteractedWithUnixTime = m_CCCarLastInteractedWithUnixTime;
		car.m_HadPlayerInteraction = m_CCCarHadPlayerInteraction;
		car.m_OriginalOwnerName = m_CCCarOriginalOwnerName;
		car.m_OriginalOwnerId = m_CCCarOriginalOwnerId;
		#endif
		
		#ifdef TRADER
		car.m_Trader_Locked = m_CCTrader_Locked;
    	car.m_Trader_HasKey = m_CCTrader_HasKey;
    	car.m_Trader_VehicleKeyHash = m_CCTrader_VehicleKeyHash;
		if (car.m_Trader_Locked)
		{
			car.GetInventory().LockInventory(HIDE_INV_FROM_SCRIPT);
		}   
		#endif
		
		#ifdef CarLock
		#ifndef CARLOCKDISABLE
		car.m_CarLock_IsLocked = m_CCCarLock_IsLocked;
    	car.m_CarLockOwner = m_CCCarLockOwner;
    	car.m_CarLockPassword = m_CCCarLockPassword;
    	car.m_SoundToPlay = m_CCSoundToPlay;
		if (car.m_CarLock_IsLocked)
		{
			//car.GetInventory().LockInventory(HIDE_INV_FROM_SCRIPT);
		}  
		#endif
		#endif
		car.SetSynchDirty();
	}
	
	void StoreCarClass(string name)
	{
		m_CarClassName = name;
		//CCLogger.Log("car classname " + name);
	}
	
	string GetCarClass()
	{
		return m_CarClassName;
	}
	
	void StoreCoverItemHealth(float health)
	{
		CCConfig config = GetDayZGame().GetCarCoverConfig();
		int damage = config.ItemDamage;
		m_CCitemHealth = health - damage;
		if (health<0)
			health = 0;
	}
	
	float GetCoverItemHealth()
	{
		return m_CCitemHealth;
	}
	
	override bool CanPutInCargo( EntityAI parent )
    {
        return false;
    }
	
	void LockInv()
	{
		//CCLogger.Log("Covered vehicle found");
		GetInventory().LockInventory(HIDE_INV_FROM_SCRIPT);
	}
    
    override bool CanPutIntoHands(EntityAI parent)
	{
		return false;
    } 

	
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionRemoveCarCover);
	}
	
}