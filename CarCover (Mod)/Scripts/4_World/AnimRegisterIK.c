modded class ModItemRegisterCallbacks
{
	override void RegisterTwoHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
    {
		super.RegisterTwoHanded(pType,  pBehavior);
        pType.AddItemInHandsProfileIK("CamoNetWinter", "dz/anims/workspaces/player/player_main/player_main_2h.asi",  pBehavior,								"dz/anims/anm/player/ik/two_handed/camo_net.anm");
		pType.AddItemInHandsProfileIK("CamoNetCivil", "dz/anims/workspaces/player/player_main/player_main_2h.asi",  pBehavior,								"dz/anims/anm/player/ik/two_handed/camo_net.anm");
		pType.AddItemInHandsProfileIK("CamoNetDesert", "dz/anims/workspaces/player/player_main/player_main_2h.asi",  pBehavior,								"dz/anims/anm/player/ik/two_handed/camo_net.anm");
    };
	
};


