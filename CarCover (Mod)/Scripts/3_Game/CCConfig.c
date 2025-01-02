class CarCoversList
{
    string CoverName;
	float Offset;
    ref TStringArray CarClasses;

    void CarCoversList( string nam, float offs, TStringArray carc )
    {
        CoverName = nam;
		Offset = offs;
        CarClasses = carc;
    }
}

class CCConfig
{
	int ItemDamage;
	ref array< ref CarCoversList > CarCovers;
	
	void CCConfig()
	{
		CarCovers = new array< ref CarCoversList >;
	}

}

class CarCoverConfig
{

    protected const static string m_ConfigRoot = "$profile:\\CarCover\\";

    static void LoadConfig(string configName, out CCConfig configData)
    {
        string configPath = m_ConfigRoot + configName;

        if (!FileExist(configPath))
        {
            CCLogger.Log("'" + configName + "' does not exist, creating default config");
            CreateDefaultConfig(configData);
            SaveConfig(configName, configData);
            return;
        }

        JsonFileLoader<CCConfig>.JsonLoadFile(configPath, configData);
        CCLogger.Log("'" + configName + "' found, loading existing config");

    }

    protected static void SaveConfig(string configName, CCConfig configData)
    {
        string configPath = m_ConfigRoot + configName;

        if (!FileExist(m_ConfigRoot))
        {
            CCLogger.Log("'" + m_ConfigRoot + "' does not exist, creating directory");
            MakeDirectory(m_ConfigRoot);
        }

        JsonFileLoader<CCConfig>.JsonSaveFile(configPath, configData);
    }
	
	static void UpgradeConfig(string configName, out CCConfig configData)
    {
        string configPath = m_ConfigRoot + configName;

        if (!FileExist(configPath))
        {
            CCLogger.Log("'"  + configName + "' does not exist, creating default config");
            CreateDefaultConfig(configData);
            SaveConfig(configName, configData);
            return;
        }
		JsonFileLoader<CCConfig>.JsonLoadFile(configPath, configData);
		
		//upgrades...
			
        JsonFileLoader<CCConfig>.JsonSaveFile(configPath, configData);
    }

    protected static void CreateDefaultConfig(out CCConfig configData)
    {
        configData = new CCConfig();
		configData.ItemDamage = 0;
		configData.CarCovers.Insert( new CarCoversList("Lada4x4_Cover", 0, {"OffroadHatchback", "OffroadHatchback_Blue", "OffroadHatchback_White", "OffroadHatchback_Firefighter", "OffroadHatchback_Cab", "OffroadHatchback_PoliceRus", "OffroadHatchback_lvparamedic", "OffroadHatchback_wineblue", "OffroadHatchback_chernarusarmy", "OffroadHatchback_chernarusarmy_rust", "OffroadHatchback_wineblue_rust", "OffroadHatchback_5000ca", "OffroadHatchback_5000ca_rust", "OffroadHatchback_Green", "OffroadHatchback_Police", "OffroadHatchback_GreenRust", "OffroadHatchback_BlueRust", "OffroadHatchback_WhiteRust",} ));
		configData.CarCovers.Insert( new CarCoversList("Volga_Cover", 0, {"CivilianSedan", "CivilianSedan_Wine", "CivilianSedan_Black", "CivilianSedan_ChernarusPolice", "CivilianSedan_mail", "CivilianSedan_White", "CivilianSedan_Police", "CivilianSedan_Lime",	"CivilianSedan_WineRust", "CivilianSedan_BlackRust",} ));
		configData.CarCovers.Insert( new CarCoversList("Skoda120_Cover", 0,{"Sedan_02", "Sedan_02_Red", "Sedan_02_Grey", "Sedan_02_Medic01", "Sedan_02_sk_policja", "Sedan_02_peacebird", "Sedan_02_Yellow", "Sedan_02_YellowBright", "Sedan_02_Blue", "Sedan_02_YellowRust", "Sedan_02_BlueRust", "Sedan_02_YellowBrightRust", "Sedan_02_RedRust", "Sedan_02_GreyRust" } ));
		configData.CarCovers.Insert( new CarCoversList("Golf_Cover", 0, {"Hatchback_02", "Hatchback_02_Blue", "Hatchback_02_Black", "Hatchback_02_Cab", "Hatchback_02_Pizzapresto", "Hatchback_02_cat", "Hatchback_02_rustbeige", "Hatchback_02_cab_rust", "Hatchback_02_stripes1", "Hatchback_02_stripes1_rust", "Hatchback_02_mtconstruction", "Hatchback_02_mtconstruction_rust", "Hatchback_02_fat", "Hatchback_02_fat_rust", "Hatchback_02_purplesmoke", "Hatchback_02_purplebomb", "Hatchback_02_icegem", "Hatchback_02_Red", "Hatchback_02_RedRust", "Hatchback_02_BlueRust", "Hatchback_02_BlackRust", "Hatchback_02_BanditKitty"} ));
		configData.CarCovers.Insert( new CarCoversList("V3S_Cover", 0, {"Truck_01_Covered", "Truck_01_Covered_Blue", "Truck_01_Covered_Orange", "Truck_01_Covered_Green", "Truck_01_Covered_Red", "Truck_01_Covered_White", "Truck_01_Covered_Black", "Truck_01_Covered_Wine", "Truck_01_Covered_Lime", "Truck_01_Covered_Yellow", "Truck_01_Covered_YellowBright"} ));
		configData.CarCovers.Insert( new CarCoversList("Hummer_Cover", 0, {"Offroad_02"} ));
		configData.CarCovers.Insert( new CarCoversList("TrolleyKart_Cover", 0, {"Spur_TrolleyKart", "Spur_TrolleyKart_Black", "Spur_TrolleyKart_Admin"} ));
		configData.CarCovers.Insert( new CarCoversList("IRPLandRoverDefender_Cover", 0, {"CrSk_Land_Rover_Defender_110", "CrSk_Land_Rover_Defender_110_UN", "CrSk_Land_Rover_Defender_110_Red", "CrSk_Land_Rover_Defender_110_Green"} ));
		configData.CarCovers.Insert( new CarCoversList("ZIL130_Cover", 0, {"Gerph_Zil130", "Gerph_Zil130_Green", "Gerph_Zil130_legacy", "Gerph_Zil130_Green_legacy"} ));
		configData.CarCovers.Insert( new CarCoversList("LadaPickup_Cover", 0, {"Nehr_PickupLada","Nehr_PickupLada_Police","Nehr_PickupLada_Blue","Nehr_PickupLada_Green","Nehr_PickupLada_White","Nehr_PickupLada_Toxic","Nehr_PickupLada_Toxic_Blue","Nehr_PickupLada_Toxic_Green","Nehr_PickupLada_Simple","Nehr_PickupLada_Simple_Green","Nehr_PickupLada_Simple_Blue"} ));
		configData.CarCovers.Insert( new CarCoversList("LadaPickupFire_Cover", 0, {"Nehr_PickupLada_Fire"} ));
		configData.CarCovers.Insert( new CarCoversList("BlackoutsCorvette_Cover", 0, {"vg7_corvette", "vg7_Corvette_Red", "vg7_Corvette_Gold", "vg7_Corvette_Green", "vg7_Corvette_Blue", "vg7_Corvette_Maroon", "vg7_Corvette_Purple", "vg7_Corvette_Pink" } ));
		configData.CarCovers.Insert( new CarCoversList("Kamaz_Cover", 0, {"Kamaz", "KamazFuel", "KamazCovered", "Kamaz_DON_Covered_Nowoa", "Kamaz_DON_Covered_OrangeB", "Kamaz_DON_Covered_Blue", "Kamaz_DON_Covered_LightBlue", "Kamaz_DON_Covered_Yellow", "Kamaz_DON_Covered_Red", "Kamaz_DON_Fuel_Nowoa", "Kamaz_DON_Fuel_Schnell", "Kamaz_DON_Fuel_Red", "Kamaz_DON_Fuel_Orange", "Kamaz_DON_Fuel_Tan", "Kamaz_DON_Fuel_Green", "Kamaz_DON_Red", "Kamaz_DON_Yellow", "Kamaz_DON_Blue", "Kamaz_DON_LightBlue", "Kamaz_DON_Beige", "Kamaz_DON_Orange", "Kamaz_DON_Orange_B", "Kamaz_DON_White", "Kamaz_DON_Tan", "Kamaz_DON_Grey"} ));
		configData.CarCovers.Insert( new CarCoversList("SavageBTRHT_Cover", 0, {"SavageBTR_HalfTrack", "SavageBTR_Pink_HalfTrack", "SavageBTR_White_HalfTrack", "SavageBTR_8x8"} ));
		configData.CarCovers.Insert( new CarCoversList("SavageLiftedTahoe_Cover", 0, {"SavageTahoe"} ));
		configData.CarCovers.Insert( new CarCoversList("Skoda1203_Cover", -1.80, { "dbo_s1203", "dbo_s1203_ambulance"} ));
		configData.CarCovers.Insert( new CarCoversList("HMVVEEErag_Cover", 0, {"rag_hummer_Armored", "rag_hummer_olive_Armored", "rag_hummer_tan_Armored", "rag_hummer_camo_Armored", "rag_hummer_purple_Armored", "rag_hummer_red_Armored", "rag_hummer_winter_Armored", "rag_hummer_anarchy_Armored", "rag_hummer_gold_Armored"} ));
		configData.CarCovers.Insert( new CarCoversList("UAZ469kirman_Cover", -1.80, {"UAZ", "UAZ_2","UAZ_Blue", "UAZ_Blue2", "UAZ_NoTent", "UAZ_NoTent_2", "UAZ_NoTent_Blue", "UAZ_NoTent_Blue2", "UAZMR", "UAZMR_2", "UAZMR_Blue", "UAZMR_Blue2"} ));
		configData.CarCovers.Insert( new CarCoversList("MercedesG65_Cover", -1.80, {"gglaw_G65", "gglaw_G65_Black", "gglaw_G65_Pink", "gglaw_G65_Green", "gglaw_G65_White", "gglaw_G65_BlackClear", "gglaw_G65_Black_li", "gglaw_G65_Pink_li", "gglaw_G65_Green_li", "gglaw_G65_White_li", "gglaw_G65_BlackClear_li"} ));
		
		configData.CarCovers.Insert( new CarCoversList("ExpansionMh6_Cover", 0, {"ExpansionMh6", "ExpansionMh6_Blueline", "ExpansionMh6_Digital", "ExpansionMh6_Elliptical", "ExpansionMh6_Furious", "ExpansionMh6_GrayWatcher", "ExpansionMh6_Resistance", "ExpansionMh6_Shadow", "ExpansionMh6_Sheriff", "ExpansionMh6_Speedy", "ExpansionMh6_Sunset", "ExpansionMh6_Vrana", "ExpansionMh6_Wasp", "ExpansionMh6_Wave", "ExpansionMh6_Pink", "ExpansionMh6_Navy", "ExpansionMh6_BabyBlue", "ExpansionMh6_DigitalBlack", "ExpansionMh6_DigitalOlive", "ExpansionMh6_DigitalYellow", "ExpansionMh6_DigitalWhite", "ExpansionMh6_JeansOrange", "ExpansionMh6_ShadowOcean", "ExpansionMh6_Tiger"} ));
		configData.CarCovers.Insert( new CarCoversList("ExpansionUh1h_Cover", 0, {"ExpansionUh1h", "ExpansionUh1h_Civillian", "ExpansionUh1h_Medical", "ExpansionUh1h_Resistance", "ExpansionUh1h_Uber", "ExpansionUh1h_Civilian_Black", "ExpansionUh1h_Civilian_Blue", "ExpansionUh1h_Civilian_Pink"} ));
		configData.CarCovers.Insert( new CarCoversList("ExpansionMerlin_Cover", -3.20, {"ExpansionMerlin", "ExpansionMerlin_Dahoman", "ExpansionMerlin_Ion", "ExpansionMerlin_President", "ExpansionMerlin_Vrana", "ExpansionMerlin_Wave", "ExpansionMerlin_PresidentPink", "ExpansionMerlin_VranaBlack", "ExpansionMerlin_WaveBlue"} ));
		configData.CarCovers.Insert( new CarCoversList("ExpansionGyro_Cover", -0.50, {"ExpansionGyrocopter"} ));
		configData.CarCovers.Insert( new CarCoversList("ExpansionUAZ_Cover", 0, {"ExpansionUAZCargoRoofless", "ExpansionUAZCargo", "ExpansionUAZRoofless", "ExpansionUAZ", "ExpansionUAZRoofless_LightGreen", "ExpansionUAZ_LightGreen", "ExpansionUAZCargo_LightGreen", "ExpansionUAZCargoRoofless_LightGreen", "ExpansionUAZRoofless_Black", "ExpansionUAZ_Black", "ExpansionUAZCargo_Black", "ExpansionUAZCargoRoofless_Black", "ExpansionUAZCargoRoofless_Green", "ExpansionUAZCargo_Green", "ExpansionUAZRoofless_Green", "ExpansionUAZ_Green"} ));
		configData.CarCovers.Insert( new CarCoversList("ExpansionVodnik_Cover", 0, {"ExpansionVodnik", "ExpansionVodnik_Camo", "ExpansionVodnik_CamoMedical"} ));
		configData.CarCovers.Insert( new CarCoversList("ExpansionBus_Cover", -0.20, {"ExpansionBus" , "ExpansionBus_Red", "ExpansionBus_Weeb", "ExpansionBus_Blue"} ));
		configData.CarCovers.Insert( new CarCoversList("ExpansionTractor_Cover", -0.20, {"ExpansionTractor", "ExpansionTractor_Green", "ExpansionTractor_Blue", "ExpansionTractor_Red"} ));
		configData.CarCovers.Insert( new CarCoversList("ExpansionLandrover_Cover", 0, {"Expansion_Landrover", "Expansion_Landrover_Yellow", "Expansion_Landrover_Green", "Expansion_Landrover_Red", "Expansion_Landrover_Grey", "Expansion_Landrover_Blue", "Expansion_Landrover_Orange"} ));
		
		configData.CarCovers.Insert( new CarCoversList("BMW525_Cover", 0, {"CrSk_BMW_525i_E34", "CrSk_BMW_525i_E34_Black", "CrSk_BMW_525i_E34_Red", "CrSk_BMW_525i_E34_Purple", "CrSk_BMW_525i_E34_Beater", "CrSk_BMW_525i_E34_MalachiteGreen", "CrSk_BMW_525i_E34_MauritiusBlue", "CrSk_BMW_525i_E34_TechnoViolet", "CrSk_BMW_525i_E34_SterlingSilver", "CrSk_BMW_525i_E34_SebringGrey", "CrSk_BMW_525i_E34_MacaoBlue", "CrSk_BMW_525i_E34_LightBlue", "CrSk_BMW_525i_E34_BrightRed", "CrSk_BMW_525i_E34_LagoonGreen", "CrSk_BMW_525i_E34_GraniteSilver", "CrSk_BMW_525i_E34_FjordGrey", "CrSk_BMW_525i_E34_DaytonaViolet", "CrSk_BMW_525i_E34_ArcticSilver", "CrSk_BMW_525i_E34_SalmonSilver", "CrSk_BMW_525i_E34_Rusty", "CrSk_BMW_525i_E34_RustyM", "CrSk_BMW_525i_E34_RustyBlue", "CrSk_BMW_525i_E34_RustyGrey", "CrSk_BMW_525i_E34_RustyPurple", "CrSk_BMW_525i_E34_RustyRed", "CrSk_BMW_525i_E34_RustyYellow", "CrSk_BMW_525i_E34_CosmosBlack", "CrSk_BMW_525i_E34_AlpineWhite2", "CrSk_BMW_525i_E34_AvusBlue", "CrSk_BMW_525i_E34_DakarYellow", "CrSk_BMW_525i_E34_OxfordGreen" } ));
		configData.CarCovers.Insert( new CarCoversList("RagLandrover_Cover", 0, {"rag_landrover", "rag_landrover_woodland", "rag_landrover_anarchy"} ));		
		configData.CarCovers.Insert( new CarCoversList("VeeDub_Cover", 0, {"VeeDub", "VeeDub_Black_And_Blue", "VeeDub_Green_And_Black", "VeeDub_Orange", "VeeDub_Red_And_Black", "VeeDub_Red_And_White", "VeeDub_White"} ));
		configData.CarCovers.Insert( new CarCoversList("ZeroyJeepWillys_Cover", 0, {"zeroy_jeep_willis", "zeroy_jeep_willis_clean", "zeroy_jeep_willis_dirty", "zeroy_jeep_willis_camo", "zeroy_jeep_willis_camo2"} ));
		configData.CarCovers.Insert( new CarCoversList("SkyJeep_Cover", 0, {"Sky_Jeep", "Sky_Jeep_Black", "Sky_Jeep_Blue","Sky_Jeep_Red","Sky_Jeep_White","Sky_Jeep_Green","Sky_Jeep_Yellow","Sky_Jeep_Pink","Sky_Jeep_Purple"} ));
		configData.CarCovers.Insert( new CarCoversList("Kopter_Cover", 0, {"Spur_TrolleyKopter"} ));
		configData.CarCovers.Insert( new CarCoversList("Bruiser_Cover", 0, {"TrailTester", "TrailTester_black", "TrailTester_winter"} ));		
		configData.CarCovers.Insert( new CarCoversList("SavageSherpa_Cover", 0, {"SavageSherpa_yellow", "SavageSherpa_red",	"SavageSherpa_purple", "SavageSherpa_mint",	"SavageSherpa_green", "SavageSherpa_brown", "SavageSherpa_blue", "SavageSherpa_pink", "SavageSherpa_black", "SavageSherpa_savage", "SavageSherpa_sport_yellow", "SavageSherpa_sport_red", "SavageSherpa_sport_purple", "SavageSherpa_sport_mint", "SavageSherpa_sport_green", "SavageSherpa_sport_brown", "SavageSherpa_sport_blue", "SavageSherpa_sport_pink", "SavageSherpa_sport_black", "SavageSherpa_sport_savage"} ));
		configData.CarCovers.Insert( new CarCoversList("CrSkZil131_Cover", 0, {"CrSk_ZIL_131"} ));
		
		configData.CarCovers.Insert( new CarCoversList("TrolleyEKart_Cover", 0, {"Spur_Trolley_E_Kart", "Spur_Trolley_E_Kart_Black", "Spur_Trolley_E_Kart_Admin"} ));
		configData.CarCovers.Insert( new CarCoversList("RagMTVR_Cover", 0, {"rag_mtvr", "rag_mtvr_snow"} ));
		configData.CarCovers.Insert( new CarCoversList("MungATV_Cover", 0, {"Atv_colorbase", "Atv_black", "Atv_redflame", "Atv_python" } ));
		configData.CarCovers.Insert( new CarCoversList("CZLandrover_Cover", -1.8, {"CZ_landroverA", "CZ_landroverA_GlossyBlack", "CZ_landroverA_GlossyWhite", "CZ_landroverA_GlossyGreen"} ));
		configData.CarCovers.Insert( new CarCoversList("CarsPlusGolf_Cover", 0, {"GOLF_2_TSI", "GOLF_2_GTI", "GOLF_2_R30T"} ));
		configData.CarCovers.Insert( new CarCoversList("CarsPlusNiva_Cover", 0, {"NIVA_1600T", "NIVA_1900D", "NIVA_1900T", "NIVA_2000T"} ));
		configData.CarCovers.Insert( new CarCoversList("CarsPlusSkoda_Cover", 0, {"SKODAK_125T", "SKODAK_130S", "SKODAK_132R"} ));
		configData.CarCovers.Insert( new CarCoversList("CarsPlusVolga_Cover", 0, {"WOLGA_25_GL", "WOLGA_33_GT", "WOLGA_50_GTS"} ));
		
		configData.CarCovers.Insert( new CarCoversList("BlackoutsBaja_Cover", 0, {"vg7_baja", "vg7_baja_white", "vg7_baja_blue", "vg7_baja_red", "vg7_baja_pink", "vg7_baja_purple", "vg7_baja_yellow", "vg7_baja_black"} ));
		configData.CarCovers.Insert( new CarCoversList("LandRoverPickup_Cover", 0, {"land_rover_defender", "land_rover_defender_green", "land_rover_defender_sand", "land_rover_defender_red", "land_rover_defender_pink"} ));
		
		configData.CarCovers.Insert( new CarCoversList("CougarMRAP_Cover", -2.0, {"MRAP_Cougar"} ));
		configData.CarCovers.Insert( new CarCoversList("Dingo_Cover", 0, {"Dingo", "Dingo_DON_UN", "Dingo_DON_CZ_Woodland", "Dingo_DON_CZ_DESERT", "Dingo_DON_GER_DESERT", "Dingo_DON_CP", "Dingo_DON_CDF", "Dingo_DON_WTR", "Dingo_DON_DARKGREEN", "Dingo_DON_CHDKZ"} ));
		configData.CarCovers.Insert( new CarCoversList("RagGAZ69_Cover", 0, {"rag_gaz69"} ));
		configData.CarCovers.Insert( new CarCoversList("UAZ469H4_Cover", 0, {"UAZ469"} ));
		configData.CarCovers.Insert( new CarCoversList("CrSkTyphoon_Cover", 0, {"CrSk_Typhoon_K_53949", "CrSk_Typhoon_K_53949_khaki"} ));
		configData.CarCovers.Insert( new CarCoversList("RagHummerRefresh_Cover", 0, {"CrSk_HMMWV_PMC","CrSk_HMMWV_PMC_Woodland","CrSk_HMMWV_PMC_RAZR", "CrSk_HMMWV_PMC_Anarchy", "CrSk_HMMWV_PMC_Tan", "CrSk_HMMWV_PMC_Green", "CrSk_HMMWV_PMC_Black"} ));
		configData.CarCovers.Insert( new CarCoversList("CJ187GAZ66_Cover", -2.5, {"sobgaz", "sobgaz_Plat"} ));
		configData.CarCovers.Insert( new CarCoversList("CJ187Hummer_Cover", 0, {"Hmwvee", "Hmwvee_Olive", "Hmwvee_Desert", "Hmwvee_Automn", "Hmwvee_34"} ));
		configData.CarCovers.Insert( new CarCoversList("CJ187UAZ_Cover", 0, {"uazSoba"} ));
		configData.CarCovers.Insert( new CarCoversList("CrSkVAZ2107_Cover", 0, {"CrSk_VAZ_2107", "CrSk_VAZ_2107_White", "CrSk_VAZ_2107_Black", "CrSk_VAZ_2107_Beige", "CrSk_VAZ_2107_AWD", "CrSk_VAZ_2107_Beige_RWD"} ));
		
		configData.CarCovers.Insert( new CarCoversList("Chevy_C10_Cover", 0, {"Spur_Chevy_White", "Spur_Chevy_Black", "Spur_Chevy_Red", "Spur_Chevy_White_N_Chrome", "Spur_Chevy_Black_N_Chrome", "Spur_Chevy_Red_N_Chrome", "Spur_Chevy_White_N_Gold", "Spur_Chevy_Black_N_Gold", "Spur_Chevy_Red_N_Gold", "Spur_Chevy_White_Rust", "Spur_Chevy_Black_Rust", "Spur_Chevy_Red_Rust", "Spur_Chevy_Black_White_Roof", "Spur_Chevy_Blue_White_Roof","Spur_Chevy_Red_White_Roof","Spur_Chevy_Green_White_Roof","Spur_Chevy_Orange_White_Roof","Spur_Chevy_Orange_Classic","Spur_Chevy_Green_Classic","Spur_Chevy_Red_Classic","Spur_Chevy_Black_Classic","Spur_Chevy_Blue_Classic","Spur_Chevy_Orange_N_Gold_Classic","Spur_Chevy_Green_N_Gold_Classic","Spur_Chevy_Red_N_Gold_Classic","Spur_Chevy_Black_N_Gold_Classic","Spur_Chevy_Blue_N_Gold_Classic","Spur_Chevy_Blue_Flames","Spur_Chevy_Black_Flames","Spur_Chevy_Black_White_Roof","Spur_Chevy_Blue_White_Roof","Spur_Chevy_Red_White_Roof","Spur_Chevy_Green_White_Roof","Spur_Chevy_Orange_White_Roof","Spur_Chevy_Orange_Classic","Spur_Chevy_Green_Classic","Spur_Chevy_Red_Classic","Spur_Chevy_Black_Classic","Spur_Chevy_Blue_Classic","Spur_Chevy_Orange_N_Gold_Classic","Spur_Chevy_Green_N_Gold_Classic","Spur_Chevy_Red_N_Gold_Classic","Spur_Chevy_Black_N_Gold_Classic","Spur_Chevy_Blue_N_Gold_Classic","Spur_Chevy_Blue_Flames","Spur_Chevy_Black_Flames"} ));
		configData.CarCovers.Insert( new CarCoversList("dbo_tractor_Cover", 0, {"dbo_tractor", "dbo_tractorB", "dbo_tractorD", "dbo_tractorBD"} ));
		configData.CarCovers.Insert( new CarCoversList("Glowler_ITV_Cover", -1.4, {"Glowler_ITV"} ));
		configData.CarCovers.Insert( new CarCoversList("Jeep_Wnagler_Cover", -1.4, {"Jeep_Wnagler"} ));
		configData.CarCovers.Insert( new CarCoversList("LAPV_Cover", -1.2, {"LAPV", "LAPV_camo", "LAPV_green", "LAPV_tan"} ));
		configData.CarCovers.Insert( new CarCoversList("RagLandrover110_Cover", 0, {"rag_landrover_110", "rag_landrover_110_olive", "rag_landrover_110_grey", "rag_landrover_110_red", "rag_landrover_110_un", "rag_landrover_110_black", "rag_landrover_110_pink"} ));
		
		configData.CarCovers.Insert( new CarCoversList("BPGaz_Cover", 0, {"BPGazG", "BPGazCamo"} ));
		
		configData.CarCovers.Insert( new CarCoversList("Cherokee1984_Cover", -1.2, {"Jeep_Cheroke_1984_byBlizzM", "Jeep_Cheroke_1984_byBlizzM_camo", "Jeep_Cheroke_1984_byBlizzM_fire", "Jeep_Cheroke_1984_byBlizzM_indy"} ));
		configData.CarCovers.Insert( new CarCoversList("DmnsURAL_Cover", 0.1, {"Dmns_URAL"} ));
		configData.CarCovers.Insert( new CarCoversList("DmnsDatsun_Cover", -0.1, {"Dmns_DATSUN"} ));
		configData.CarCovers.Insert( new CarCoversList("DmnsHUMVEE_Cover", -0.3, {"Dmns_HUMVEE"} ));
		configData.CarCovers.Insert( new CarCoversList("DmnsKAMAZ_Cover", 0, {"Dmns_KAMAZ"} ));
		configData.CarCovers.Insert( new CarCoversList("DmnsMRAP_Cover", 0.4, {"Dmns_MRAP", "Dmns_MRAP_OD", "Dmns_MRAP_Urban", "Dmns_MRAP_SecOne"} ));
		configData.CarCovers.Insert( new CarCoversList("DmnsMTVR_Cover", -2.2, {"Dmns_MTVR"} ));
		
		configData.CarCovers.Insert( new CarCoversList("LAMV_Cover", 0, {"LAMV", "LAMV_Green", "LAMV_Blue", "LAMV_Camo", "LAMV_Rescue"} ));
		configData.CarCovers.Insert( new CarCoversList("UAZ3303_Cover", 0, {"UAZ3303", "UAZ3303_Blue", "UAZ3303_White"} ));
		
		configData.CarCovers.Insert( new CarCoversList("PitbullVX_Cover", 0, {"Pitbull"} ));
		configData.CarCovers.Insert( new CarCoversList("NehrTrailBrozer_Cover", -1.8, {"TrailBrozer", "TrailBrozer_Red", "TrailBrozer_Grey", "TrailBrozer_black", "TrailBrozer_white", "TrailBrozer_New"} ));
		
		configData.CarCovers.Insert( new CarCoversList("WickedRV_Cover", 0, {"Rvpost"} ));
		
		configData.CarCovers.Insert( new CarCoversList("NMKamaz_Cover", 0, {"Kamaz_Military", "Kamaz_Civilian", "Kamaz_Civilian_2", "Kamaz_Civilian_3", "Kamaz_Civilian_4", "Kamaz_Civilian_5", "Kamaz_Civilian_6", "Kamaz_Civilian_6B", "Kamaz_Civilian_7", "Kamaz_Tent_Military", "Kamaz_Tent_Civilian", "Kamaz_Tent_Civilian_2", "Kamaz_Tent_Civilian_3", "Kamaz_Tent_Civilian_4", "Kamaz_Tent_Civilian_5", "Kamaz_Tent_Civilian_6", "Kamaz_Tent_Civilian_6B", "Kamaz_Tent_Civilian_7", "Kamaz_Refuel_Military", "Kamaz_Refuel_Civilian", "Kamaz_Refuel_Civilian_2", "Kamaz_Refuel_Civilian_3", "Kamaz_Refuel_Civilian_4", "Kamaz_ZU23_Military", "Kamaz_Cargo_Military"} ));
		configData.CarCovers.Insert( new CarCoversList("RPMUAZ469_Cover", 0, {"Uaz_soba", "Uaz_soba_open"} ));
		configData.CarCovers.Insert( new CarCoversList("BS_BMWe32_Cover", 0, {"Bastard_BMWe32", "Bastard_BMWe32_stock", "Bastard_BMWe32_skin1", "Bastard_BMWe32_skin2"} ));
		configData.CarCovers.Insert( new CarCoversList("BS_Rover_Cover", 0, {"Bastard_Rover", "Bastard_Rover_stock", "Bastard_Rover_skin1", "Bastard_Rover_skin2"} ));
		configData.CarCovers.Insert( new CarCoversList("BS_w123_Cover", 0, {"Bastard_w123", "Bastard_w123_stock", "Bastard_w123_skin1", "Bastard_w123_skin2", "Bastard_w123_skin3", "Bastard_w123_black", "Bastard_w124", "Bastard_w124_stock", "Bastard_w124_skin1", "Bastard_w124_skin2", "Bastard_w124_rust", "Bastard_w124_rust_skin1", "Bastard_w124_rust_skin2", "Bastard_w124_black", "Bastard_w124_police" } ));
		
		configData.CarCovers.Insert( new CarCoversList("BS_CJ7_Cover", 0, {"Bastard_cj7", "Bastard_cj7_stock", "Bastard_cj7_white", "Bastard_cj7_green", "Bastard_cj7_black", "Bastard_cj7_red", "Bastard_cj7_tan" } ));
		configData.CarCovers.Insert( new CarCoversList("TFVaz_2126_Cover", 0, {"CivilianVaz_2126", "Civilian_Vaz_2126_Green", "Civilian_Vaz_2126_Red", "Civilian_Vaz_2126_Blue" } ));
		
		configData.CarCovers.Insert( new CarCoversList("Rag_ATV_Cover", 0, {"rag_atv_blue", "rag_atv_red", "rag_atv_green", "rag_atv_pink", "rag_atv_white", "rag_atv_black"} ));
		configData.CarCovers.Insert( new CarCoversList("Rag_Schoolbus_Cover", 0, {"rag_schoolbus", "rag_schoolbus_czech"} ));
		
		configData.CarCovers.Insert( new CarCoversList("FK_Kraz6322_Cover", 0, {"Kraz6322", "Kraz6322_Desert", "Kraz6322_Camo", "Kraz6322_Red", "Kraz6322_White", "Kraz6322_WinterCamo", "Kraz6322_Blue", "Kraz6322_Black"} ));
		
		configData.CarCovers.Insert( new CarCoversList("Chaos_Kart_Cover", 0, {"KartZ_ChaosKart", "KartZ_Blue", "KartZ_Police"} ));
		
		configData.CarCovers.Insert( new CarCoversList("Croco_QuadBike_Cover", 0, {"Croco_QuadBike_Grey", "Croco_QuadBike_Green", "Croco_QuadBike_Yellow", "Croco_QuadBike_Red", "Croco_QuadBike_Black"} ));
		
		configData.CarCovers.Insert( new CarCoversList("GunnerTruck_Cover", 0, {"GunnerTruck", "GunnerTruckWhite", "GunnerTruckTan", "GunnerTruckLivonia", "GunnerruckLivoniaWhite", "GunnerTruckLivoniaTan", "GunnerTruckRostow", "GunnerTruckRostowWhite", "GunnerTruckRostowTan", "GunnerTruckEsseker", "GunnerTruckEssekerWhite", "GunnerTruckEssekerTan", "GunnerTruckDeerisle", "GunnerTruckDeerisleWhite", "GunnerTruckDeerisleTan", "GunnerTruckNamalsk", "GunnerTruckNamalskWhite", "GunnerTruckNamalskTan", "GunnerTruckTakistan", "GunnerTruckTakistanWhite", "GunnerTruckTakistanTan", "GunnerTruckValning", "GunnerTruckValningWhite", "GunnerTruckValningTan"} ));
		configData.CarCovers.Insert( new CarCoversList("GazTigr_Cover", 0, {"savage_gaztigr"} ));
		
		configData.CarCovers.Insert( new CarCoversList("dboATV_Cover", 0, {"dbo_atv", "SUR_ATV_HAKI", "SUR_ATV_Berezka", "SUR_ATV_Blue", "SUR_ATV_Camo_Blue", "SUR_ATV_Camo", "SUR_ATV_Camo2", "SUR_ATV_Camo_Red", "SUR_ATV_Green", "SUR_ATV_Camo_Red2", "SUR_ATV_RED"} ));
		
		configData.CarCovers.Insert( new CarCoversList("RagJeepWillis_Cover", 0, {"rag_jeep_willys"} ));
		configData.CarCovers.Insert( new CarCoversList("RagZil130_Cover", 0, {"rag_zil_130", "rag_zil_130_olive"} ));
		configData.CarCovers.Insert( new CarCoversList("RagVWBeetle_Cover", 0, {"rag_baja", "rag_baja_green","rag_baja_ryg","rag_baja_camo"} ));
		configData.CarCovers.Insert( new CarCoversList("RagDerbyCar_Cover", 0, {"rag_derby_car", "rag_derby_car_green", "rag_derby_car_red", "rag_derby_car_yellow"} ));
		configData.CarCovers.Insert( new CarCoversList("H4ZiL131_Cover", 0, {"H4_Zil131_Green", "H4_Zil131_Blue", "H4_Zil131_Yellow", "H4_Zil131_FuelTank_Green", "H4_Zil131_FuelTank_Blue", "H4_Zil131_FuelTank_Yellow"} ));
		configData.CarCovers.Insert( new CarCoversList("TFUAZ3151_Cover", 0, {"TF_UAZ3151_Green", "TF_UAZ3151_ChDKZ", "TF_UAZ3151_CDF", "TF_UAZ3151_AFRF"} ));
		
		configData.CarCovers.Insert( new CarCoversList("vg7scorpion_Cover", 0, {"vg7_scorpion", "vg7_scorpion_easyrider", "vg7_scorpion_scorcher", "vg7_scorpion_powder"} ));
		
		configData.CarCovers.Insert( new CarCoversList("izh_Cover", 0, {"bastard_izh_stock", "bastard_izh_blue", "bastard_izh_white", "bastard_izh_black"} ));
		
		configData.CarCovers.Insert( new CarCoversList("TrailBrozer_Cover", 0, {"Trailbrozer", "Trailbrozer_Red", "Trailbrozer_Grey", "Trailbrozer_black", "Trailbrozer_white", "Trailbrozer_New", "Trailbrozer_Salmon", "Trailbrozer_Olive", "Trailbrozer_Khaki", "Trailbrozer_Brown", "Trailbrozer_Blue", "Trailbrozer_Gray", "Trailbrozer_Pink", "Trailbrozer_Pfrogcamo", "Trailbrozer_Hexcamo", "Trailbrozer_Realtreecamo", "Trailbrozer_Leafcamo", "Trailbrozer_Branchcamo", "Trailbrozer_Browncamo", "Trailbrozer_UScamo", "Trailbrozer_Abstractcamo", "Trailbrozer_Whiterust", "Trailbrozer_Redrust", "Trailbrozer_Brownfaux", "Trailbrozer_Greenpoly", "Trailbrozer_Abstractred", "Trailbrozer_Abstractblue", "Trailbrozer_Hellokitty", "Trailbrozer_Pusheen", "Trailbrozer_Daisy", "Trailbrozer_Nightmare"} ));
	}
}
