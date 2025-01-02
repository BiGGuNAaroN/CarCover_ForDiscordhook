modded class DayZGame
{	
	protected ref CCConfig m_CarCoverConfig;

	
    void SetCarCoverConfig(CCConfig config)
    {
        m_CarCoverConfig = config;
    }

    CCConfig GetCarCoverConfig()
    {
		return m_CarCoverConfig;
    }
	
	string GetCoverName(string carcl)
	{
		string covername;
		string carco;
		CCConfig config = GetDayZGame().GetCarCoverConfig();
		for(int i = 0; i < config.CarCovers.Count(); i++)
		{
			for (int j = 0; j< config.CarCovers.Get(i).CarClasses.Count(); j++)
			{
				covername =  config.CarCovers.Get(i).CoverName;
				carco = config.CarCovers.Get(i).CarClasses.Get(j);
				//CCLogger.Log("COVER " + covername + " car " + carco);
				if (carco.Contains(carcl) )
				{
					return covername;
				}
			}
			
			
		}
		
		return "NotSupported";
	}

};