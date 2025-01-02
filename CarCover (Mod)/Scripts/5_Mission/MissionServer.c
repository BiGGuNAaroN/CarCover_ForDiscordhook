modded class MissionServer
{
    void MissionServer()
    {
	CCConfig config;
	CarCoverConfig.UpgradeConfig("CarCover.json", config);
	CarCoverConfig.LoadConfig("CarCover.json", config);
	GetDayZGame().SetCarCoverConfig(config);
	#ifdef GAMELABS
	CCLogger.Log("CFTools found");
	#endif
    }
};
