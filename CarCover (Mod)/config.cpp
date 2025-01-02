////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.87
//https://mikero.bytex.digital/Downloads
//'now' is Mon Dec 23 22:13:01 2024 : 'file' last modified on Fri Jul 19 19:35:07 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class CarCover
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Vehicles_Wheeled","DZ_Data","DZ_Scripts"};
	};
};
class CfgMods
{
	class CarCover
	{
		dir = "CarCover";
		picture = "";
		action = "";
		hideName = 0;
		hidePicture = 0;
		name = "CarCover";
		credits = "Hunterz, Lusk-Lynge, Spurgle, Funkdoc, Rag Tyson";
		author = "Hunterz, Lusk-Lynge, Spurgle, Funkdoc, Rag Tyson";
		overview = "$STR_carcover_overview";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"BasicTerritoriesDefines/scripts/Common","MuchCarKey/Scripts/Common","MuchCarKeyDefines/scripts/Common","CLDefine/scripts/Common","TPDefine/scripts/Common","TM/Trader/scripts/defines","CarCover/scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"BasicTerritoriesDefines/scripts/Common","MuchCarKey/Scripts/Common","MuchCarKeyDefines/scripts/Common","CLDefine/scripts/Common","TPDefine/scripts/Common","TM/Trader/scripts/defines","CarCover/Scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"BasicTerritoriesDefines/scripts/Common","MuchCarKey/Scripts/Common","MuchCarKeyDefines/scripts/Common","CLDefine/scripts/Common","TPDefine/scripts/Common","TM/Trader/scripts/defines","CarCover/Scripts/5_Mission"};
			};
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class CamoNet: Inventory_Base
	{
		physLayer = "item_small";
	};
	class CamoNetWinter: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_CamoNet0";
		descriptionShort = "$STR_CfgVehicles_CamoNet1";
		model = "CarCover\data\RetexturableCamoNet_p.p3d";
		itemSize[] = {7,3};
		weight = 400;
		inventorySlot[] = {"CamoNet","Wall_Camonet","Level_1_Wall_1_Camonet","Level_1_Wall_2_Camonet","Level_1_Wall_3_Camonet","Level_2_Wall_1_Camonet","Level_2_Wall_2_Camonet","Level_2_Wall_3_Camonet","Level_3_Wall_1_Camonet","Level_3_Wall_2_Camonet","Level_3_Wall_3_Camonet"};
		physLayer = "item_small";
		rotationFlags = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 120;
					healthLevels[] = {{1,{"DZ\structures\military\Improvised\data\camonet_east.rvmat"}},{0.7,{"DZ\structures\military\Improvised\data\camonet_east.rvmat"}},{0.5,{"DZ\structures\military\Improvised\data\camonet_east.rvmat"}},{0.3,{"DZ\structures\military\Improvised\data\camonet_east.rvmat"}},{0,{"DZ\structures\military\Improvised\data\camonet_east.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet = "pickUpCourierBag_Light_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpCourierBag_SoundSet";
					id = 797;
				};
			};
		};
	};
	class CamoNetCivil: Inventory_Base
	{
		scope = 2;
		displayName = "#CC_Tarp";
		descriptionShort = "#CC_Tarp_desc";
		model = "CarCover\data\RetexturableCamoNet_p.p3d";
		itemSize[] = {7,3};
		weight = 400;
		inventorySlot[] = {"CamoNet","Wall_Camonet","Level_1_Wall_1_Camonet","Level_1_Wall_2_Camonet","Level_1_Wall_3_Camonet","Level_2_Wall_1_Camonet","Level_2_Wall_2_Camonet","Level_2_Wall_3_Camonet","Level_3_Wall_1_Camonet","Level_3_Wall_2_Camonet","Level_3_Wall_3_Camonet"};
		physLayer = "item_small";
		rotationFlags = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 120;
					healthLevels[] = {{1,{"DZ\structures\military\Improvised\data\camonet_east.rvmat"}},{0.7,{"DZ\structures\military\Improvised\data\camonet_east.rvmat"}},{0.5,{"DZ\structures\military\Improvised\data\camonet_east.rvmat"}},{0.3,{"DZ\structures\military\Improvised\data\camonet_east.rvmat"}},{0,{"DZ\structures\military\Improvised\data\camonet_east.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet = "pickUpCourierBag_Light_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpCourierBag_SoundSet";
					id = 797;
				};
			};
		};
	};
	class CamoNetDesert: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_CamoNet0";
		descriptionShort = "$STR_CfgVehicles_CamoNet1";
		model = "CarCover\data\RetexturableCamoNet_p.p3d";
		itemSize[] = {7,3};
		weight = 400;
		inventorySlot[] = {"CamoNet","Wall_Camonet","Level_1_Wall_1_Camonet","Level_1_Wall_2_Camonet","Level_1_Wall_3_Camonet","Level_2_Wall_1_Camonet","Level_2_Wall_2_Camonet","Level_2_Wall_3_Camonet","Level_3_Wall_1_Camonet","Level_3_Wall_2_Camonet","Level_3_Wall_3_Camonet"};
		physLayer = "item_small";
		rotationFlags = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 120;
					healthLevels[] = {{1,{"DZ\structures\military\Improvised\data\camonet_east.rvmat"}},{0.7,{"DZ\structures\military\Improvised\data\camonet_east.rvmat"}},{0.5,{"DZ\structures\military\Improvised\data\camonet_east.rvmat"}},{0.3,{"DZ\structures\military\Improvised\data\camonet_east.rvmat"}},{0,{"DZ\structures\military\Improvised\data\camonet_east.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet = "pickUpCourierBag_Light_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpCourierBag_SoundSet";
					id = 797;
				};
			};
		};
	};
	class CarScript;
	class OffroadHatchback: CarScript
	{
		attachments[] += {"CamoNet"};
		class GUIInventoryAttachmentsProps
		{
			class Body
			{
				attachmentSlots[] += {"CamoNet"};
			};
		};
	};
	class CivilianSedan: CarScript
	{
		attachments[] += {"CamoNet"};
		class GUIInventoryAttachmentsProps
		{
			class Body
			{
				attachmentSlots[] += {"CamoNet"};
			};
		};
	};
	class Hatchback_02: CarScript
	{
		attachments[] += {"CamoNet"};
		class GUIInventoryAttachmentsProps
		{
			class Body
			{
				attachmentSlots[] += {"CamoNet"};
			};
		};
	};
	class Sedan_02: CarScript
	{
		attachments[] += {"CamoNet"};
		class GUIInventoryAttachmentsProps
		{
			class Body
			{
				attachmentSlots[] += {"CamoNet"};
			};
		};
	};
	class Truck_01_Base;
	class Truck_01_Covered: Truck_01_Base
	{
		attachments[] += {"CamoNet"};
		class GUIInventoryAttachmentsProps
		{
			class Body
			{
				attachmentSlots[] += {"CamoNet"};
			};
		};
	};
	class Offroad_02: CarScript
	{
		attachments[] += {"CamoNet"};
		class GUIInventoryAttachmentsProps
		{
			class Body
			{
				attachmentSlots[] += {"CamoNet"};
			};
		};
	};
	class HouseNoDestruct;
	class Container_Base;
	class WorldContainer_Base;
	class CarCoverBase: Container_Base
	{
		scope = 0;
		displayName = "#str_cfgvehicles_camonet0";
		rotationFlags = 2;
		itemBehaviour = 0;
		carveNavmesh = 1;
		heavyItem = 1;
		weight = 10000;
		physLayer = "item_large";
		forceFarBubble = "true";
		class Cargo
		{
			itemsCargoSize[] = {10,100};
			openable = 0;
			allowOwnedCargoManipulation = 1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 25000;
					healthLabels[] = {1,0.7,0.5,0.3,0};
					healthLevels[] = {{1,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0,{}}};
				};
			};
		};
		hiddenSelections[] = {"CarCover"};
		hiddenSelectionsTextures[] = {""};
		hiddenSelectionsMaterials[] = {"dz\structures\military\improvised\data\camonet_east.rvmat"};
	};
	class Lada4x4_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\Lada4x4_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","NivaDriverDoors","NivaCoDriverDoors","NivaHood","NivaTrunk","NivaWheel_1_1","NivaWheel_1_2","NivaWheel_2_1","NivaWheel_2_2","NivaWheel_Spare_1","CamoNet"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class Lada4x4_Cover_Desert: Lada4x4_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class Volga_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\Volga_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","CivSedanDriverDoors","CivSedanCoDriverDoors","CivSedanCargo1Doors","CivSedanCargo2Doors","CivSedanHood","CivSedanTrunk","CivSedanWheel_1_1","CivSedanWheel_1_2","CivSedanWheel_2_1","CivSedanWheel_2_2","CivSedanWheel_Spare_1","CamoNet"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class Volga_Cover_Desert: Volga_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class Skoda120_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\Skoda120_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","EngineBelt","SparkPlug","Sedan_02_Hood","Sedan_02_Trunk","Sedan_02_Door_1_1","Sedan_02_Door_2_1","Sedan_02_Door_1_2","Sedan_02_Door_2_2","Sedan_02_Wheel_1_1","Sedan_02_Wheel_1_2","Sedan_02_Wheel_2_1","Sedan_02_Wheel_2_2","Sedan_02_Wheel_Spare_1","CamoNet"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class Skoda120_Cover_Desert: Skoda120_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class Golf_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\Golf_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","Hatchback_02_Door_1_1","Hatchback_02_Door_1_2","Hatchback_02_Door_2_1","Hatchback_02_Door_2_2","Hatchback_02_Trunk","Hatchback_02_Hood","Hatchback_02_Wheel_1_1","Hatchback_02_Wheel_1_2","Hatchback_02_Wheel_2_1","Hatchback_02_Wheel_2_2","Hatchback_02_Wheel_Spare_1","CamoNet"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class Golf_Cover_Desert: Golf_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class V3S_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\V3S_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"TruckBattery","Reflector_1_1","Reflector_2_1","Truck_01_Door_1_1","Truck_01_Door_2_1","Truck_01_Hood","Truck_01_Wheel_1_1","Truck_01_Wheel_1_2","Truck_01_Wheel_1_3","Truck_01_Wheel_2_1","Truck_01_Wheel_2_2","Truck_01_Wheel_2_3","Truck_01_Wheel_Spare_1","Truck_01_Wheel_Spare_2","Truck_01_WoodenLogs","Truck_01_WoodenPlanks","Truck_01_MetalSheets","Truck_01_Barrel1","Truck_01_Barrel2","Truck_01_Barrel3","Truck_01_Barrel4","Truck_01_WoodenCrate1","Truck_01_WoodenCrate2","Truck_01_WoodenCrate3","Truck_01_WoodenCrate4","CamoNet"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class V3S_Cover_Desert: V3S_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class Hummer_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\HMVVEEErag_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","GlowPlug","Offroad_02_Hood","Offroad_02_Trunk","Offroad_02_Door_1_1","Offroad_02_Door_2_1","Offroad_02_Door_1_2","Offroad_02_Door_2_2","Offroad_02_Wheel_1_1","Offroad_02_Wheel_1_2","Offroad_02_Wheel_2_1","Offroad_02_Wheel_2_2","Offroad_02_Wheel_Spare_1","CamoNet"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class Hummer_Cover_Winter: Hummer_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class Hummer_Cover_Civil: Hummer_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class Hummer_Cover_Desert: Hummer_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class TrolleyKart_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\TrolleyKart_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","SparkPlug","Spur_Kart_Wheel_1_1","Spur_Kart_Wheel_1_2","Spur_Kart_Wheel_2_1","Spur_Kart_Wheel_2_2","Bear1","VestPouch","waterproofbag","waterproofbag1","Melee","Shoulder","Spur_Kart_Signs","Spur_Kart_Signs2","CamoNet_Packed","CamoNet","Fabric"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class TrolleyKart_Cover_Desert: TrolleyKart_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class IRPLandRoverDefender_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\IRPLandRoverDefender_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","Defender110_koleso_1_1","Defender110_koleso_1_2","Defender110_koleso_2_1","Defender110_koleso_2_2","Defender110_koleso_spare_1","Defender110_dver_1_1","Defender110_dver_2_1","Defender110_dver_1_2","Defender110_dver_2_2","Defender110_bagazhnik","Defender110_kapot","CanisterGasoline","sea_chest","55galDrum_1","55galDrum_2","WoodenCrate","Shoulder"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class IRPLandRoverDefender_Cover_Desert: IRPLandRoverDefender_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class ZIL130_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\ZIL130_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"TruckBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","Zil130Doors_Driver","Zil130Doors_CoDriver","Zil130_Hood","Zil130_Tailgate","Zil130Wheel_1_1","Zil130Wheel_1_2","Zil130Wheel_2_1","Zil130Wheel_2_2","Zil130Wheel_Spare_1","Truck_01_Barrel1","Truck_01_Barrel2","Truck_01_Barrel3","Truck_01_Barrel4","Truck_01_WoodenCrate1","Truck_01_WoodenCrate2","Truck_01_WoodenCrate3","Truck_01_WoodenCrate4","Truck_01_WoodenCrate5","Truck_01_WoodenCrate6"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class ZIL130_Cover_Desert: ZIL130_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class LadaPickup_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\LadaPickup_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","Nehr_PickupLadadoors_driver","Nehr_PickupLadadoors_codriver","Nehr_PickupLadahood","Nehr_PickupLadatrunk","NivaWheel_1_1","NivaWheel_1_2","NivaWheel_2_1","NivaWheel_2_2","NivaWheel_Spare_1","CanisterGasoline","CanisterGasoline_1","Truck_01_WoodenCrate1","Truck_01_Barrel1","Truck_01_Barrel2","sea_chest"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class LadaPickup_Cover_Desert: LadaPickup_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class LadaPickupFire_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\LadaPickupFire_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","Nehr_PickupLadadoors_driver","Nehr_PickupLadadoors_codriver","Nehr_PickupLadahood","Nehr_PickupLadatrunk","NivaWheel_1_1","NivaWheel_1_2","NivaWheel_2_1","NivaWheel_2_2","NivaWheel_Spare_1","CanisterGasoline","CanisterGasoline_1","Truck_01_WoodenCrate1","Truck_01_Barrel1","Truck_01_Barrel2","sea_chest"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class LadaPickupFire_Cover_Desert: LadaPickupFire_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class BlackoutsCorvette_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\BlackoutsCorvette_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","Reflector_Baja","vg7_Roof_Rack","vg7_Roof_Rack_2","CarRadiator","SparkPlug","vg7_L_Door","vg7_R_Door","vg7_L_Cargo_Door","vg7_R_Cargo_Door","vg7_H_Door","vg7_wheel_1_1","vg7_wheel_1_2","vg7_wheel_2_1","vg7_wheel_2_2","BaseRadio","CanisterGasoline","DryBag","PowerGenerator"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class BlackoutsCorvette_Cover_Desert: BlackoutsCorvette_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class Kamaz_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\Kamaz_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","KamazWheel_1_1","KamazWheel_2_1","KamazWheel_1_2","KamazWheel_2_2","KamazWheel_1_3","KamazWheel_2_3","KamazWheel_Spare_1","KamazDriverDoors","KamazCoDriverDoors","KamazTrunk","KamazHood","Kamaz_FuelTank","Truck_01_WoodenLogs","Truck_01_WoodenPlanks","Truck_01_Barrel1","Truck_01_Barrel2","Truck_01_Barrel3","Truck_01_Barrel4","Truck_01_WoodenCrate1","Truck_01_WoodenCrate2","Truck_01_WoodenCrate3","Kamaz_Tent"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class Kamaz_Cover_Desert: Kamaz_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class SavageBTRHT_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\SavageBTRHT_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","SparkPlug","Reflector_1_1","Reflector_2_1","SavageBTR_wheels_1_1","SavageBTR_wheels_1_2","SavageBTR_wheels_2_1","SavageBTR_wheels_2_2","SavageBTR_backwheels_1_1","SavageBTR_backwheels_1_2","SavageBTR_backwheels_2_1","SavageBTR_backwheels_2_2","SavageBTR_doors_driver","weapon_1","weapon_2","weapon_3","weapon_4","weapon_5","weapon_6","weapon_7","weapon_8"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class SavageBTRHT_Cover_Desert: SavageBTRHT_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class SavageLiftedTahoe_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\SavageLiftedTahoe_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","SparkPlug","Reflector_1_1","Reflector_2_1","Tahoe_doors_driver","Tahoe_doors_codriver","Tahoe_doors_cargo1","Tahoe_doors_cargo2","Tahoe_doors_trunk","Tahoe_doors_hood","Tahoe_wheels_1_1","Tahoe_wheels_2_1","Tahoe_wheels_1_3","Tahoe_wheels_2_3","Gun1","Gun2","Tahoe_ThePlow"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class SavageLiftedTahoe_Cover_Desert: SavageLiftedTahoe_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class Skoda1203_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\Skoda1203_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","s1203_door_1_1","s1203_door_1_2","s1203_door_2_1","s1203_door_3_1","s1203_wheel_1_1","s1203_wheel_1_2","s1203_wheel_2_1","s1203_wheel_2_2","55galDrum_1","55galDrum_2","CanisterGasoline","sea_chest"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class Skoda1203_Cover_Desert: Skoda1203_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class HMVVEEErag_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\HMVVEEErag_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","rag_hummer_hood","rag_hummer_trunk","rag_hummer_door_2","rag_hummer_door_1","rag_hummer_door_4","rag_hummer_door_3","rag_hummer_wheel_1_1","rag_hummer_wheel_1_2","rag_hummer_wheel_2_1","rag_hummer_wheel_2_2","rag_hummer_wheel_spare","CanisterGasoline","Shovel1","FirstAidKit","KeyChain","CamoNet"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class HMVVEEErag_Cover_Desert: HMVVEEErag_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class UAZ469kirman_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\ExpansionUAZ_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","UAZ_Wheel_1_1","UAZ_Wheel_1_2","UAZ_Wheel_2_1","UAZ_Wheel_2_2","UAZ_doors_Driver","UAZ_Doors_coDriver","UAZ_doors_cargo1","UAZ_doors_cargo2","UAZ_doors_trunk","UAZ_doors_trunkup","UAZ_doors_hood","CanisterGasoline","sea_chest"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class UAZ469kirman_Cover_Desert: UAZ469kirman_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class MercedesG65_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\MercedesG65_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","gglaw_G65Wheel_offroad_1_1","gglaw_G65Wheel_offroad_1_2","gglaw_G65_krishka","gglaw_G65Wheel_offroad_2_1","gglaw_G65Wheel_offroad_2_2","gglaw_G65Wheel_offroad_spare_1","gglaw_G65_driver","gglaw_G65_codriver","gglaw_G65_cargo1","gglaw_G65_cargo2","gglaw_G65_trunk","gglaw_G65_hood","55galdrum_1","55galdrum_2"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class MercedesG65_Cover_Desert: MercedesG65_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class ExpansionMh6_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\ExpansionMh6_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"ExpansionHelicopterBattery","Reflector_1_1","CarRadiator","ExpansionIgniterPlug","ExpansionHydraulicHoses","mh6door_1_1","mh6door_1_2","mh6door_2_1","mh6door_2_2"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class ExpansionMh6_Cover_Desert: ExpansionMh6_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class ExpansionUh1h_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\ExpansionUh1h_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"Reflector_1_1","ExpansionHelicopterBattery","ExpansionIgniterPlug","ExpansionHydraulicHoses","uh1hdoor_1_1","uh1hdoor_1_2"};
	};
	class ExpansionUh1h_Cover_Desert: ExpansionUh1h_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class ExpansionMerlin_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\ExpansionMerlin_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"ExpansionHelicopterBattery","Reflector_1_1","ExpansionIgniterPlug","ExpansionHydraulicHoses","merlinwheel_1_1","merlinwheel_1_2","merlinwheel_2_1","merlinwheel_2_2"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class ExpansionMerlin_Cover_Desert: ExpansionMerlin_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class ExpansionGyro_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\ExpansionGyro_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"ExpansionHelicopterBattery","Reflector_1_1","SparkPlug"};
	};
	class ExpansionGyro_Cover_Desert: ExpansionGyro_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class ExpansionUAZ_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\ExpansionUAZ_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","uazwheel_1_1","uazwheel_1_2","uazwheel_2_1","uazwheel_2_2","uazdriverdoor","uazcodriverdoor","uazcargo1door","uazcargo2door","uazhooddoor","Material_Shelter_Fabric"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class ExpansionUAZ_Cover_Desert: ExpansionUAZ_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class ExpansionVodnik_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\ExpansionVodnik_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"TruckBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","vodnikwheel_1_1","vodnikwheel_1_2","vodnikwheel_2_1","vodnikwheel_2_2","vodnikdriverdoor","vodnikcodriverdoor"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class ExpansionVodnik_Cover_Desert: ExpansionVodnik_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class ExpansionBus_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\ExpansionBus_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"TruckBattery","Reflector_1_1","Reflector_2_1","CarRadiator","GlowPlug","BusWheel_1_1","BusWheel_1_2","BusWheel_2_1","BusWheel_2_2"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class ExpansionBus_Cover_Desert: ExpansionBus_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class ExpansionTractor_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\ExpansionTractor_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"ExpansionTractorFrontWheel_1_1","ExpansionTractorFrontWheel_2_1","ExpansionTractorBackWheel_1_2","ExpansionTractorBackWheel_2_2","ExpansionTractorDoorsDriver","ExpansionTractorDoorsCodriver","CarBattery","SparkPlug","Reflector_1_1","Reflector_2_1"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class ExpansionTractor_Cover_Desert: ExpansionTractor_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class BMW525_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\BMW525_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","BMWE34_koleso_1_1","BMWE34_koleso_1_2","BMWE34_koleso_2_1","BMWE34_koleso_2_2","BMWE34_koleso_spare_1","BMWE34_dver_1_1","BMWE34_dver_2_1","BMWE34_dver_1_2","BMWE34_dver_2_2","BMWE34_bagazhnik","BMWE34_kapot","WoodenCrate","CanisterGasoline"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class BMW525_Cover_Desert: BMW525_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class RagLandrover_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\RagLandrover_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","ragDoors_Hood","ragDoors_CoDriver","ragDoors_Driver","ragCargo1Doors","rag_lr_wheel_1_1","rag_lr_wheel_1_2","rag_lr_wheel_2_1","rag_lr_wheel_2_2"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class RagLandrover_Cover_Desert: RagLandrover_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class VeeDub_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\VeeDub_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","VeeDub_door_driver","VeeDub_door_codriver","VeeDub_door_cargo1","VeeDub_door_cargo2","VeeDub_door_cargo3","VeeDub_door_cargo4","VeeDub_hood","VeeDub_wheel_1_1","VeeDub_wheel_1_2","VeeDub_wheel_2_1","VeeDub_wheel_2_2","VeeDub_wheel_spare","CanisterGasoline","sea_chest","55galDrum_1","Melee","Shoulder"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class VeeDub_Cover_Desert: VeeDub_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class ZeroyJeepWillys_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\ZeroyJeepWillys_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","NivaWheel_1_1","NivaWheel_1_2","NivaWheel_2_1","NivaWheel_2_2","NivaWheel_Spare_1","CanisterGasoline","Jeep_Willis_Windshield","Shovel"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class ZeroyJeepWillys_Cover_Desert: ZeroyJeepWillys_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class CrSkZil131_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\CrSkZil131_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","ZIL131_koleso_1_1","ZIL131_koleso_1_2","ZIL131_koleso_1_3","ZIL131_koleso_2_1","ZIL131_koleso_2_2","ZIL131_koleso_2_3","ZIL131_koleso_spare_1","ZIL131_dver_1_1","ZIL131_dver_2_1","ZIL131_kapot","ZIL131_bagazhnik","CanisterGasoline"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class CrSkZil131_Cover_Desert: CrSkZil131_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class SkyJeep_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\SkyJeep_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","JeepWheel_1_1","JeepWheel_1_2","JeepWheel_2_1","JeepWheel_2_2","JeepWheel_spare_1","Jeep_Door_2_1","Jeep_Door_1_1"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class SkyJeep_Cover_Desert: SkyJeep_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class Kopter_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\Kopter_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","SparkPlug","Melee","Shoulder","Spur_Kart_Signs","Spur_Kart_Signs2"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCover.paa"};
	};
	class Kopter_Cover_Desert: Kopter_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class Bruiser_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\Bruiser_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","TrailTesterdoors_driver","TrailTesterdoors_codriver","TrailTesterdoors_cargo1","TrailTesterdoors_cargo2","TrailTesterHood","TrailTesterTrunk","TrailTesterWheel_1_1","TrailTesterWheel_1_2","TrailTesterWheel_2_1","TrailTesterWheel_2_2","TrailTesterSpareWheel","CanisterGasoline","55galDrum_1","55galDrum_2","sea_chest","Back","Bruiser_Armour","Bruiser_ArmourRR","Bruiser_ArmourRL","BruiserTrunkArmour","Bruiser_ArmourDD","Bruiser_ArmourCDD","Bruiser_ArmourC1","Bruiser_ArmourC2","BruiserHoodArmour","Bruiser_BullBars","Bruiser_Skull"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCover.paa"};
	};
	class Bruiser_Cover_Desert: Bruiser_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class SavageSherpa_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\Sherpa_Snowmobile_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","SparkPlug","Reflector_1_1","Reflector_2_1","Sherpa_dummy_wheel_1_1","Sherpa_dummy_wheel_1_2","Sherpa_dummy_wheel_2_1","Sherpa_dummy_wheel_2_2","Sherpa_dummy_wheel_1_3","Sherpa_dummy_wheel_2_3","SavageSNO_RearBag_1","SavageSNO_RearBag_2"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class SavageSherpa_Cover_Desert: SavageSherpa_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class TrolleyEKart_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\TrolleyKart_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"TruckBattery","Reflector_1_1","Reflector_2_1","Spur_Kart_Wheel_1_1","Spur_Kart_Wheel_1_2","Spur_Kart_Wheel_2_1","Spur_Kart_Wheel_2_2","Bear1","VestPouch","waterproofbag","waterproofbag1","Melee","Shoulder","Spur_Kart_Signs","Spur_Kart_Signs2","CamoNet","CamoNet_Packed","Tarp"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCover.paa"};
	};
	class TrolleyEKart_Cover_Desert: TrolleyEKart_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class RagMTVR_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\rag_mtvr_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"TruckBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","rag_mtvr_hood","rag_mtvr_cargo1door","rag_mtvr_door_1_2","rag_mtvr_door_1_1","rag_mtvr_wheel_1_1","rag_mtvr_wheel_1_2","rag_mtvr_wheel_2_1","rag_mtvr_wheel_2_2","rag_mtvr_wheel_1_3","rag_mtvr_wheel_2_3","rag_mtvr_sparewheel","KeyChain","CamoNet"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCover.paa"};
	};
	class RagMTVR_Cover_Desert: RagMTVR_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class MungATV_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\Atv_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"Shoulder","Back","Storagebox","Headgear","CanisterGasoline","CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","AtvWheel_1_1","AtvWheel_1_2","AtvWheel_2_1","AtvWheel_2_2"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCover.paa"};
	};
	class MungATV_Cover_Desert: MungATV_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class CZLandrover_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\RagLandrover_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","LANDoors_Hood","LANDoors_CoDriver","LANDoors_Driver","LANCargo1Doors","LANCargo2Doors","CanisterGasoline","lr_wheel_1_1","lr_wheel_1_2","lr_wheel_2_1","lr_wheel_2_2","lr_wheel_1_3","lr_wheel_2_3","lan_chest"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class CZLandrover_Cover_Desert: CZLandrover_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class CarsPlusGolf_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\Golf_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","Hatchback_02_Door_1_1","Hatchback_02_Door_1_2","Hatchback_02_Door_2_1","Hatchback_02_Door_2_2","Hatchback_02_Trunk","Hatchback_02_Hood","Hatchback_02_Wheel_1_1","Hatchback_02_Wheel_1_2","Hatchback_02_Wheel_2_1","Hatchback_02_Wheel_2_2","Melee","Pistol","Shoulder","Vest","Back"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class CarsPlusGolf_Cover_Desert: CarsPlusGolf_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class CarsPlusNiva_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\Lada4x4_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","NivaHood","NivaTrunk","NivaDriverDoors","NivaCoDriverDoors","NivaWheel_1_1","NivaWheel_1_2","NivaWheel_2_1","NivaWheel_2_2","NivaWheel_Spare_1","Melee","Pistol","Shoulder","Vest","Back"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class CarsPlusNiva_Cover_Desert: CarsPlusNiva_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class CarsPlusSkoda_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\Skoda120_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","EngineBelt","SparkPlug","Sedan_02_Hood","Sedan_02_Trunk","Sedan_02_Door_1_1","Sedan_02_Door_2_1","Sedan_02_Door_1_2","Sedan_02_Door_2_2","Sedan_02_Wheel_1_1","Sedan_02_Wheel_1_2","Sedan_02_Wheel_2_1","Sedan_02_Wheel_2_2","Melee","Pistol","Shoulder","Vest","Back"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class CarsPlusSkoda_Cover_Desert: CarsPlusSkoda_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class CarsPlusVolga_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\Volga_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","CivSedanDriverDoors","CivSedanCoDriverDoors","CivSedanCargo1Doors","CivSedanCargo2Doors","CivSedanHood","CivSedanTrunk","CivSedanWheel_1_1","CivSedanWheel_1_2","CivSedanWheel_2_1","CivSedanWheel_2_2","Melee","Pistol","Shoulder","Vest","Back"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class CarsPlusVolga_Cover_Desert: CarsPlusVolga_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class BlackoutsBaja_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\vg7Baja_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","Reflector_Baja","Reflector_Glitter","CarRadiator","SparkPlug","vg7_baja_wheel_1_1","vg7_baja_wheel_1_2","vg7_baja_wheel_2_1","vg7_baja_wheel_2_2","CanisterGasoline","CamoNet","Battery_2","BatteryCharger","vg7_Baja_Spare_Wheel","Melee","Shoulder","waterproofbag","CableReel","Spotlight","vg7_baja_L_Door","vg7_baja_R_Door","vg7_baja_Hood_Plate","vg7_baja_Engine_Cover","Pistol"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class BlackoutsBaja_Cover_Desert: BlackoutsBaja_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class LandroverPickup_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\Defender_Pickup_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","CanisterGasoline","lrdefenderdoors_driver","lrdefenderdoors_codriver","lrdefenderdoors_hood","lrdefenderdoors_trunk","lrdefender_wheel_1_1","lrdefender_wheel_1_2","lrdefender_wheel_2_1","lrdefender_wheel_2_2","lrdefender_wheel_Spare_1","Truck_01_Barrel1","Truck_01_Barrel2","sea_chest","Truck_01_WoodenCrate1"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class LandroverPickup_Cover_Desert: LandroverPickup_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class CougarMRAP_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\MRAP_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","CarRadiator","Reflector_1_1","Reflector_2_1","SparkPlug","mrap_doors_trunk","mrap_doors_trunk0","mrap_doors_hood","mrap_doors_driver","mrap_doors_codriver","mrap_wheel_1_1","mrap_wheel_1_2","mrap_wheel_2_1","mrap_wheel_2_2","mrap_wheel_spare_1","300RoundBox","CanisterGasoline","Belt_Left","WalkieTalkie","Back","FirstAidKit","Shoulder","Can1","Can2","Can3","Can4","Can5","Can6","Can7","Can8","Can9","Can10","Can11","Can12","Can13","sea_chest"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class CougarMRAP_Cover_Desert: CougarMRAP_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class Dingo_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\Dingo2a2_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","DingoWheel_1_1","DingoWheel_2_1","DingoWheel_1_2","DingoWheel_2_2","DingoWheel_Spare_1","DingoDriverDoors","DingoCoDriverDoors","DingoTrunk","DingoHood","DingoCargo1Doors","DingoCargo2Doors","Shoulder","CanisterGasoline","FirstAidKit","Truck_01_Barrel1","Back"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class Dingo_Cover_Desert: Dingo_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class RagGAZ69_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\Rag_gaz69_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","rag_gaz69_hood","rag_gaz69_trunk","rag_gaz69_codriverdoor","rag_gaz69_driverdoor","rag_gaz69_wheel_1_1","rag_gaz69_wheel_1_2","rag_gaz69_wheel_2_1","rag_gaz69_wheel_2_2","rag_gaz69_sparewheel","CanisterGasoline","Axe1","KeyChain","CamoNet"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class RagGAZ69_Cover_Desert: RagGAZ69_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class UAZ469H4_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\ExpansionUAZ_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","CarRadiator","Reflector_1_1","Reflector_2_1","SparkPlug","UAZ469_Wheel_1_1","UAZ469_Wheel_1_2","UAZ469_Wheel_2_1","UAZ469_Wheel_2_2","UAZ469_Wheel_spare_1","UAZ469_Doors_Driver","UAZ469_doors_cargo1","UAZ469_doors_cargo2","UAZ469_Doors_CoDriver","UAZ469_doors_Hood","UAZ469_doors_Trunk","CanisterGasoline","UAZ469_Tent"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class UAZ469H4_Cover_Desert: UAZ469H4_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class CrSkTyphoon_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\Dingo2a2_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","TyphoonK53949_koleso_1_1","TyphoonK53949_koleso_1_2","TyphoonK53949_koleso_2_1","TyphoonK53949_koleso_2_2","TyphoonK53949_dver_1_1","TyphoonK53949_dver_2_1","TyphoonK53949_dver_1_2","TyphoonK53949_dver_2_2","TyphoonK53949_bagazhnik","CanisterGasoline"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class CrSkTyphoon_Cover_Desert: CrSkTyphoon_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class RagHummerRefresh_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\HMVVEEErag_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","HMMWV_PMC_koleso_1_1","HMMWV_PMC_koleso_1_2","HMMWV_PMC_koleso_2_1","HMMWV_PMC_koleso_2_2","HMMWV_PMC_koleso_spare_1","HMMWV_PMC_dver_1_1","HMMWV_PMC_dver_2_1","HMMWV_PMC_dver_1_2","HMMWV_PMC_dver_2_2","FirstAidKit","Shoulder","Melee","CanisterGasoline"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class RagHummerRefresh_Cover_Desert: RagHummerRefresh_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class CJ187GAZ66_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\ExpansionVodnik_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"TruckBattery","CarRadiator","Reflector_1_1","Reflector_2_1","SparkPlug","gazWheel_1_1","gazWheel_2_1","gazWheel_1_2","gazWheel_2_2","gazWheel_spare_1","gazDoors_Driver","gazDoors_CoDriver","Truck_01_WoodenLogs","Truck_01_WoodenPlanks","Truck_01_MetalSheets","Truck_01_Barrel1","Truck_01_Barrel2","Truck_01_Barrel3","Truck_01_Barrel4","Truck_01_WoodenCrate1","Truck_01_WoodenCrate2","Truck_01_WoodenCrate3","Truck_01_WoodenCrate4"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class CJ187GAZ66_Cover_Desert: CJ187GAZ66_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class CJ187Hummer_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\HMVVEEErag_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","HummerWheel_1_1","HummerWheel_1_2","HummerWheel_2_1","HummerWheel_2_2","HummerWheel_Spare_1","sobaDriverDoors","sobaCoDriverDoors","sobaCargo1Doors","sobaCargo2Doors","sobaCargohood","Truck_01_WoodenCrate1","Truck_01_WoodenCrate2"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class CJ187Hummer_Cover_Desert: CJ187Hummer_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class CJ187UAZ_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\ExpansionUAZ_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","CarRadiator","Reflector_1_1","Reflector_2_1","SparkPlug","uazWheel_1_1","uazWheel_1_2","uazWheel_2_1","uazWheel_2_2","uazWheel_spare_1","UazDriver","UazCoDriver","UazCargo1Doors","UazCargo2Doors","UazCargohood","UazDriverArm","UazCoDriverArm","UazTrunkArm","UazGlassFrontArm","UazCargo1Arm","UazCargo2Arm","UazDoorsArm1","UazDoorsArm2","UazDoorsArm3","Truck_01_WoodenCrate1"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class CJ187UAZ_Cover_Desert: CJ187UAZ_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class CrSkVAZ2107_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\Zigulik_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","VAZ2107_koleso_1_1","VAZ2107_koleso_1_2","VAZ2107_koleso_2_1","VAZ2107_koleso_2_2","VAZ2107_koleso_spare_1","VAZ2107_dver_1_1","VAZ2107_dver_2_1","VAZ2107_dver_1_2","VAZ2107_dver_2_2","VAZ2107_bagazhnik","VAZ2107_kapot","vaz2107_bagazh_krysha","55galDrum_1","WoodenCrate","sea_chest","CanisterGasoline"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class CrSkVAZ2107_Cover_Desert: CrSkVAZ2107_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class Lada4x4_Cover_Winter: Lada4x4_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class Volga_Cover_Winter: Volga_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class Skoda120_Cover_Winter: Skoda120_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class Golf_Cover_Winter: Golf_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class V3S_Cover_Winter: V3S_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class TrolleyKart_Cover_Winter: TrolleyKart_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class IRPLandRoverDefender_Cover_Winter: IRPLandRoverDefender_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class ZIL130_Cover_Winter: ZIL130_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class LadaPickup_Cover_Winter: LadaPickup_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class LadaPickupFire_Cover_Winter: LadaPickupFire_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class BlackoutsCorvette_Cover_Winter: BlackoutsCorvette_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class Kamaz_Cover_Winter: Kamaz_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class SavageBTRHT_Cover_Winter: SavageBTRHT_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class SavageLiftedTahoe_Cover_Winter: SavageLiftedTahoe_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class Skoda1203_Cover_Winter: Skoda1203_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class HMVVEEErag_Cover_Winter: HMVVEEErag_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class UAZ469kirman_Cover_Winter: UAZ469kirman_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class MercedesG65_Cover_Winter: MercedesG65_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class ExpansionMh6_Cover_Winter: ExpansionMh6_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class ExpansionUh1h_Cover_Winter: ExpansionUh1h_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class ExpansionMerlin_Cover_Winter: ExpansionMerlin_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class ExpansionGyro_Cover_Winter: ExpansionGyro_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class ExpansionUAZ_Cover_Winter: ExpansionUAZ_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class ExpansionVodnik_Cover_Winter: ExpansionVodnik_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class ExpansionBus_Cover_Winter: ExpansionBus_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class ExpansionTractor_Cover_Winter: ExpansionTractor_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class BMW525_Cover_Winter: BMW525_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class RagLandrover_Cover_Winter: RagLandrover_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class VeeDub_Cover_Winter: VeeDub_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class ZeroyJeepWillys_Cover_Winter: ZeroyJeepWillys_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class CrSkZil131_Cover_Winter: CrSkZil131_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class SkyJeep_Cover_Winter: SkyJeep_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class Kopter_Cover_Winter: Kopter_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class Bruiser_Cover_Winter: Bruiser_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class SavageSherpa_Cover_Winter: SavageSherpa_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class TrolleyEKart_Cover_Winter: TrolleyEKart_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class RagMTVR_Cover_Winter: RagMTVR_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class MungATV_Cover_Winter: MungATV_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class CZLandrover_Cover_Winter: CZLandrover_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class CarsPlusGolf_Cover_Winter: CarsPlusGolf_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class CarsPlusNiva_Cover_Winter: CarsPlusNiva_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class CarsPlusSkoda_Cover_Winter: CarsPlusSkoda_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class CarsPlusVolga_Cover_Winter: CarsPlusVolga_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class BlackoutsBaja_Cover_Winter: BlackoutsBaja_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class LandroverPickup_Cover_Winter: LandroverPickup_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class CougarMRAP_Cover_Winter: CougarMRAP_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class Dingo_Cover_Winter: Dingo_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class RagGAZ69_Cover_Winter: RagGAZ69_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class UAZ469H4_Cover_Winter: UAZ469H4_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class CrSkTyphoon_Cover_Winter: CrSkTyphoon_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class RagHummerRefresh_Cover_Winter: RagHummerRefresh_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class CJ187GAZ66_Cover_Winter: CJ187GAZ66_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class CJ187Hummer_Cover_Winter: CJ187Hummer_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class CJ187UAZ_Cover_Winter: CJ187UAZ_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class CrSkVAZ2107_Cover_Winter: CrSkVAZ2107_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class Lada4x4_Cover_Civil: Lada4x4_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class Volga_Cover_Civil: Volga_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class Skoda120_Cover_Civil: Skoda120_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class Golf_Cover_Civil: Golf_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class V3S_Cover_Civil: V3S_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class TrolleyKart_Cover_Civil: TrolleyKart_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class IRPLandRoverDefender_Cover_Civil: IRPLandRoverDefender_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class ZIL130_Cover_Civil: ZIL130_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class LadaPickup_Cover_Civil: LadaPickup_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class LadaPickupFire_Cover_Civil: LadaPickupFire_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class BlackoutsCorvette_Cover_Civil: BlackoutsCorvette_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class Kamaz_Cover_Civil: Kamaz_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class SavageBTRHT_Cover_Civil: SavageBTRHT_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class SavageLiftedTahoe_Cover_Civil: SavageLiftedTahoe_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class Skoda1203_Cover_Civil: Skoda1203_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class HMVVEEErag_Cover_Civil: HMVVEEErag_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class UAZ469kirman_Cover_Civil: UAZ469kirman_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class MercedesG65_Cover_Civil: MercedesG65_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class ExpansionMh6_Cover_Civil: ExpansionMh6_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class ExpansionUh1h_Cover_Civil: ExpansionUh1h_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class ExpansionMerlin_Cover_Civil: ExpansionMerlin_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class ExpansionGyro_Cover_Civil: ExpansionGyro_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class ExpansionUAZ_Cover_Civil: ExpansionUAZ_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class ExpansionVodnik_Cover_Civil: ExpansionVodnik_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class ExpansionBus_Cover_Civil: ExpansionBus_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class ExpansionTractor_Cover_Civil: ExpansionTractor_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class BMW525_Cover_Civil: BMW525_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class RagLandrover_Cover_Civil: RagLandrover_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class VeeDub_Cover_Civil: VeeDub_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class ZeroyJeepWillys_Cover_Civil: ZeroyJeepWillys_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class CrSkZil131_Cover_Civil: CrSkZil131_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class SkyJeep_Cover_Civil: SkyJeep_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class Kopter_Cover_Civil: Kopter_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class Bruiser_Cover_Civil: Bruiser_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class SavageSherpa_Cover_Civil: SavageSherpa_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class TrolleyEKart_Cover_Civil: TrolleyEKart_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class RagMTVR_Cover_Civil: RagMTVR_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class MungATV_Cover_Civil: MungATV_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class CZLandrover_Cover_Civil: CZLandrover_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class CarsPlusGolf_Cover_Civil: CarsPlusGolf_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class CarsPlusNiva_Cover_Civil: CarsPlusNiva_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class CarsPlusSkoda_Cover_Civil: CarsPlusSkoda_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class CarsPlusVolga_Cover_Civil: CarsPlusVolga_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class BlackoutsBaja_Cover_Civil: BlackoutsBaja_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class LandroverPickup_Cover_Civil: LandroverPickup_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class CougarMRAP_Cover_Civil: CougarMRAP_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class Dingo_Cover_Civil: Dingo_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class RagGAZ69_Cover_Civil: RagGAZ69_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class UAZ469H4_Cover_Civil: UAZ469H4_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class CrSkTyphoon_Cover_Civil: CrSkTyphoon_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class RagHummerRefresh_Cover_Civil: RagHummerRefresh_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class CJ187GAZ66_Cover_Civil: CJ187GAZ66_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class CJ187Hummer_Cover_Civil: CJ187Hummer_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class CJ187UAZ_Cover_Civil: CJ187UAZ_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class CrSkVAZ2107_Cover_Civil: CrSkVAZ2107_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class Chevy_C10_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\Chevy_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","Spur_Chevy_Wheel_1_1","Spur_Chevy_Wheel_1_2","Spur_Chevy_Wheel_2_1","Spur_Chevy_Wheel_2_2","Spur_Chevy_Wheel_Spare","Spur_Chevy_Driver_door","Spur_Chevy_CoDriver_door","Spur_Chevy_Hood","Spur_Chevy_TailGate","Spur_Chevy_Grill","Spur_Chevy_Plate_front","Spur_Chevy_Plate_back","CanisterGasoline","55galDrum_1","55galDrum_2","sea_chest","CamoNet","Melee","Shoulder","Material_L1_WoodenLogs","Material_L2_WoodenLogs","Material_L3_WoodenLogs","Material_MetalSheets","WalkieTalkie","Knife","Belt_Left"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCover.paa"};
	};
	class Chevy_C10_Cover_Winter: Chevy_C10_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class Chevy_C10_Cover_Civil: Chevy_C10_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class Chevy_C10_Cover_Desert: Chevy_C10_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class dbo_tractor_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\ExpansionTractor_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","CanisterGasoline","55galDrum_1","55galDrum_2","sea_chest","Tractor_armour","Tractor_door_driver","Tractor_wheel_Front_1_1","Tractor_wheel_Rear_1_2","Tractor_wheel_Front_2_1","Tractor_wheel_Rear_2_2"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCover.paa"};
	};
	class dbo_tractor_Cover_Winter: dbo_tractor_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class dbo_tractor_Cover_Civil: dbo_tractor_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class dbo_tractor_Cover_Desert: dbo_tractor_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class Glowler_ITV_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\Growler_ITV_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","CarRadiator","Reflector_1_1","Reflector_2_1","SparkPlug","wheel_Glowler_ITV_1_1","wheel_Glowler_ITV_1_2","wheel_Glowler_ITV_2_1","wheel_Glowler_ITV_2_2","300RoundBox","CanisterGasoline","Belt_Left","WalkieTalkie","Back","Bag1","FirstAidKit","Shoulder","Can1","Can2","Can3","Can4","Can5","Can6","Can7","Can8","Can9","Can10","Can11","Can12","Can13","sea_chest"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCover.paa"};
	};
	class Glowler_ITV_Cover_Winter: Glowler_ITV_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class Glowler_ITV_Cover_Civil: Glowler_ITV_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class Glowler_ITV_Cover_Desert: Glowler_ITV_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class Jeep_Wnagler_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\Jeep_Wnagler_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","CarRadiator","Reflector_1_1","Reflector_2_1","SparkPlug","Jeep_Wnagler_doors_driver","Jeep_Wnagler_doors_codriver","wheel_Jeep_Wnagler_1_1","wheel_Jeep_Wnagler_1_2","wheel_Jeep_Wnagler_2_1","wheel_Jeep_Wnagler_2_2","wheel_Jeep_Wnagler_spare_1","300RoundBox","CanisterGasoline","Belt_Left","WalkieTalkie","Back","FirstAidKit","Shoulder","Cassette"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCover.paa"};
	};
	class Jeep_Wnagler_Cover_Winter: Jeep_Wnagler_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class Jeep_Wnagler_Cover_Civil: Jeep_Wnagler_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class Jeep_Wnagler_Cover_Desert: Jeep_Wnagler_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class LAPV_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\LAPV_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","CarRadiator","Reflector_1_1","Reflector_2_1","SparkPlug","lapv_doors_trunk","lapv_doors_cargo1","lapv_doors_cargo2","lapv_doors_driver","lapv_doors_codriver","LAPV_camo_doors_trunk","LAPV_camo_doors_cargo1","LAPV_camo_doors_cargo2","LAPV_camo_doors_driver","LAPV_camo_doors_codriver","LAPV_green_doors_trunk","LAPV_green_doors_cargo1","LAPV_green_doors_cargo2","LAPV_green_doors_driver","LAPV_green_doors_codriver","LAPV_tan_doors_trunk","LAPV_tan_doors_cargo1","LAPV_tan_doors_cargo2","LAPV_tan_doors_driver","LAPV_tan_doors_codriver","wheel_lapv_1_1","wheel_lapv_1_2","wheel_lapv_2_1","wheel_lapv_2_2","300RoundBox","CanisterGasoline","Belt_Left","WalkieTalkie","Back","FirstAidKit","Shoulder","Cassette"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCover.paa"};
	};
	class LAPV_Cover_Winter: LAPV_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class LAPV_Cover_Civil: LAPV_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class LAPV_Cover_Desert: LAPV_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class RagLandrover110_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\IRPLandRoverDefender_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","rag_landrover_110_hood","rag_landrover_110_cargo1","rag_landrover_110_cargo2","rag_landrover_110_cargo3","rag_landrover_110_codriverdoor","rag_landrover_110_driverdoor","rag_landrover_110_wheel_1_1","rag_landrover_110_wheel_1_2","rag_landrover_110_wheel_2_1","rag_landrover_110_wheel_2_2","rag_landrover_110_sparewheel","CanisterGasoline","Truck_01_WoodenCrate1","Truck_01_WoodenCrate2","Truck_01_WoodenCrate3","sea_chest","WalkieTalkie","KeyChain","CamoNet"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCover.paa"};
	};
	class RagLandrover110_Cover_Winter: RagLandrover110_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class RagLandrover110_Cover_Civil: RagLandrover110_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class RagLandrover110_Cover_Desert: RagLandrover110_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class BPGaz_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\BPGaz_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","BPGazWheel_1_1","BPGazWheel_1_2","BPGazWheel_2_1","BPGazWheel_2_2","BPGaz_driver","BPGaz_codriver","BPGaz_trunk","BPGaz_hood"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCover.paa"};
	};
	class BPGaz_Cover_Winter: BPGaz_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class BPGaz_Cover_Civil: BPGaz_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class BPGaz_Cover_Desert: BPGaz_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class Cherokee1984_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\Jeep_Cheroke_1984_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","CarRadiator","Reflector_1_1","Reflector_2_1","SparkPlug","Jeep_Cheroke_1984_doors_hood","Jeep_Cheroke_1984_doors_driver","Jeep_Cheroke_1984_doors_codriver","Jeep_Cheroke_1984_doors_cargo1","Jeep_Cheroke_1984_doors_cargo2","Jeep_Cheroke_1984_doors_trunk","wheel_Jeep_Cheroke_1_1","wheel_Jeep_Cheroke_1_2","wheel_Jeep_Cheroke_2_1","wheel_Jeep_Cheroke_2_2","wheel_Jeep_Cheroke_Spare_1","300RoundBox","CanisterGasoline","Belt_Left","WalkieTalkie","Back","FirstAidKit"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCover.paa"};
	};
	class Cherokee1984_Cover_Winter: Cherokee1984_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class Cherokee1984_Cover_Civil: Cherokee1984_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class Cherokee1984_Cover_Desert: Cherokee1984_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class DmnsURAL_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\URAL_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","URALDriverDoor","URALCoDriverDoor","URALCargo1Door","URALCargo2Door","URALCargo3Door","URAL_wheel_1_1","URAL_wheel_1_2","URAL_wheel_2_1","URAL_wheel_2_2","URAL_wheel_1_3","URAL_wheel_2_3","Truck_01_WoodenLogs","Truck_01_WoodenPlanks","Truck_01_MetalSheets","55galDrum_1","55galDrum_2","55galDrum_3","55galDrum_4","Truck_01_WoodenCrate1","Truck_01_WoodenCrate2","Truck_01_WoodenCrate3","Truck_01_WoodenCrate4"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCover.paa"};
	};
	class DmnsURAL_Cover_Winter: DmnsURAL_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class DmnsURAL_Cover_Civil: DmnsURAL_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class DmnsURAL_Cover_Desert: DmnsURAL_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class DmnsDatsun_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\Datsun_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","DATSUNDriverDoor","DATSUNCoDriverDoor","DATSUN_wheel_1_1","DATSUN_wheel_1_2","DATSUN_wheel_2_1","DATSUN_wheel_2_2","Truck_01_WoodenCrate1","Truck_01_WoodenCrate2"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCover.paa"};
	};
	class DmnsDatsun_Cover_Winter: DmnsDatsun_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class DmnsDatsun_Cover_Civil: DmnsDatsun_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class DmnsDatsun_Cover_Desert: DmnsDatsun_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class DmnsHUMVEE_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\HMVVEEErag_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","HUMVEEDriverDoor","HUMVEECoDriverDoor","HUMVEECargo1Door","HUMVEECargo2Door","HUMVEECargo3Door","HUMVEECargo4Door","HUMVEE_wheel_1_1","HUMVEE_wheel_1_2","HUMVEE_wheel_2_1","HUMVEE_wheel_2_2","Truck_01_WoodenCrate1","Truck_01_WoodenCrate2","Truck_01_WoodenCrate3","Truck_01_WoodenCrate4"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCover.paa"};
	};
	class DmnsHUMVEE_Cover_Winter: DmnsHUMVEE_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class DmnsHUMVEE_Cover_Civil: DmnsHUMVEE_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class DmnsHUMVEE_Cover_Desert: DmnsHUMVEE_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class DmnsKAMAZ_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\Kamaz_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","KAMAZDriverDoor","KAMAZCoDriverDoor","KAMAZCargo1Door","KAMAZCargo2Door","KAMAZ_wheel_1_1","KAMAZ_wheel_1_2","KAMAZ_wheel_2_1","KAMAZ_wheel_2_2","KAMAZ_wheel_1_3","KAMAZ_wheel_2_3","Truck_01_WoodenLogs","Truck_01_WoodenPlanks","Truck_01_MetalSheets","55galDrum_1","55galDrum_2","55galDrum_3","55galDrum_4","Truck_01_WoodenCrate1","Truck_01_WoodenCrate2","Truck_01_WoodenCrate3","Truck_01_WoodenCrate4"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCover.paa"};
	};
	class DmnsKAMAZ_Cover_Winter: DmnsKAMAZ_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class DmnsKAMAZ_Cover_Civil: DmnsKAMAZ_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class DmnsKAMAZ_Cover_Desert: DmnsKAMAZ_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class DmnsMRAP_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\MRAP_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","MRAPDriverDoor","MRAPCoDriverDoor","MRAPCargo1Door","MRAPCargo2Door","MRAP_wheel_1_1","MRAP_wheel_1_2","MRAP_wheel_2_1","MRAP_wheel_2_2","55galDrum_1","55galDrum_2","Material_FPole_Flag"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCover.paa"};
	};
	class DmnsMRAP_Cover_Winter: DmnsMRAP_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class DmnsMRAP_Cover_Civil: DmnsMRAP_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class DmnsMRAP_Cover_Desert: DmnsMRAP_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class DmnsMTVR_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\rag_mtvr_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","MTVRDriverDoor","MTVRCoDriverDoor","MTVRCargo1Door","MTVRCargo2Door","MTVR_wheel_1_1","MTVR_wheel_1_2","MTVR_wheel_2_1","MTVR_wheel_2_2","MTVR_wheel_1_3","MTVR_wheel_2_3","Truck_01_WoodenLogs","Truck_01_WoodenPlanks","Truck_01_MetalSheets","55galDrum_1","55galDrum_2","55galDrum_3","55galDrum_4","Truck_01_WoodenCrate1","Truck_01_WoodenCrate2","Truck_01_WoodenCrate3","Truck_01_WoodenCrate4"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCover.paa"};
	};
	class DmnsMTVR_Cover_Winter: DmnsMTVR_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class DmnsMTVR_Cover_Civil: DmnsMTVR_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class DmnsMTVR_Cover_Desert: DmnsMTVR_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class LAMV_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\LAMV_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","CarRadiator","Reflector_1_1","Reflector_2_1","SparkPlug","LAMV_Wheel_1_1","LAMV_Wheel_1_2","LAMV_Wheel_2_1","LAMV_Wheel_2_2","LAMV_Doors_Driver","LAMV_Doors_CoDriver","LAMV_doors_Trunk","LAMV_doors_Hood","CanisterGasoline"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCover.paa"};
	};
	class LAMV_Cover_Winter: LAMV_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class LAMV_Cover_Civil: LAMV_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class LAMV_Cover_Desert: LAMV_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class UAZ3303_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\Golovastik_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"TruckBattery","CarRadiator","Reflector_1_1","Reflector_2_1","SparkPlug","NivaWheel_1_1","NivaWheel_1_2","NivaWheel_2_1","NivaWheel_2_2","UAZ3303_Doors_Driver","UAZ3303_Doors_CoDriver","UAZ3303_doors_Trunk","CanisterGasoline","Truck_01_Barrel1","Truck_01_Barrel2","Truck_01_Barrel3","Truck_01_Barrel4","Truck_01_WoodenCrate1","Truck_01_WoodenCrate2","Truck_01_WoodenCrate3","Truck_01_WoodenCrate4"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCover.paa"};
	};
	class UAZ3303_Cover_Winter: UAZ3303_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class UAZ3303_Cover_Civil: UAZ3303_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class UAZ3303_Cover_Desert: UAZ3303_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class NehrTrailBrozer_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\Bruiser_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","trailbrozerdoors_driver","trailbrozerdoors_codriver","trailbrozerdoors_cargo1","trailbrozerdoors_cargo2","TrailBrozerHood","TrailBrozerTrunk","TrailBrozerWheel_1_1","TrailBrozerWheel_1_2","TrailBrozerWheel_2_1","TrailBrozerWheel_2_2","TrailBrozerSpareWheel","CanisterGasoline","55galDrum_1","55galDrum_2","sea_chest"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCover.paa"};
	};
	class NehrTrailBrozer_Cover_Winter: NehrTrailBrozer_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class NehrTrailBrozer_Cover_Civil: NehrTrailBrozer_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class NehrTrailBrozer_Cover_Desert: NehrTrailBrozer_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class PitbullVX_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\Dingo2a2_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","CarRadiator","Reflector_1_1","Reflector_2_1","SparkPlug","Pitbull_Wheel_1_1","Pitbull_Wheel_1_2","Pitbull_Wheel_2_1","Pitbull_Wheel_2_2","Pitbull_Wheel_spare_1","Pitbull_doors_driver","Pitbull_doors_cargo1","Pitbull_doors_cargo2","Pitbull_doors_codriver","Pitbull_doors_trunk","CanisterGasoline","Shoulder1","Shoulder2","Shoulder3","Back","sea_chest"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCover.paa"};
	};
	class PitbullVX_Cover_Winter: PitbullVX_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class PitbullVX_Cover_Civil: PitbullVX_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class PitbullVX_Cover_Desert: PitbullVX_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class WickedRV_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\WickedRV_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"TruckBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","Rvpost_wheel_1_1","Rvpost_wheel_1_2","Rvpost_wheel_1_3","Rvpost_wheel_2_1","Rvpost_wheel_2_2","Rvpost_wheel_2_3","wheel_spare_1","wheel_spare_2","wheel_spare_3","wheel_spare_4","RvpostDoors_1_1","RvpostDoors_maletero1","RvpostDoors_maletero2","RvpostDoors_maletero3","RvpostDoors_hatch","backpack","backpack1","backpack2","backpack3","barrel","barrel1","jerrycan","seachest","seachest1","truckbattery","truckbattery1","woodencase","woodencase1","woodencase2","woodencase3"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCover.paa"};
	};
	class WickedRV_Cover_Winter: WickedRV_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class WickedRV_Cover_Civil: WickedRV_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class WickedRV_Cover_Desert: WickedRV_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class NMKAMAZ_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\Kamaz_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","Kamaz_Wheel_1_1","Kamaz_Wheel_2_1","Kamaz_Wheel_1_2","Kamaz_Wheel_2_2","Kamaz_Wheel_1_3","Kamaz_Wheel_2_3","Kamaz_Wheel_Spare_1","Kamaz_doors_Driver","Kamaz_Doors_coDriver","Kamaz_doors_trunk"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCover.paa"};
	};
	class NMKAMAZ_Cover_Winter: NMKAMAZ_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class NMKAMAZ_Cover_Civil: NMKAMAZ_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class NMKAMAZ_Cover_Desert: NMKAMAZ_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class RPMUAZ469_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\ExpansionUAZ_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","UazWheel_1_1","UazWheel_1_2","Uaz_soba_krishka","UazWheel_2_1","UazWheel_2_2","UazWheel_spare_1","uaz_driver","uaz_codriver","uaz_cargo1","uaz_cargo2","uaz_hood","uaz_trunk","no_car"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCover.paa"};
	};
	class RPMUAZ469_Cover_Winter: RPMUAZ469_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class RPMUAZ469_Cover_Civil: RPMUAZ469_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class RPMUAZ469_Cover_Desert: RPMUAZ469_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class BS_BMWe32_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\Bmw_e32_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","CarRadiator","Reflector_1_1","Reflector_2_1","SparkPlug","5x120_1_1","5x120_2_1","5x120_1_2","5x120_2_2","5x120_spare_1","Bastard_BMWe32_driverdoor","Bastard_BMWe32_codriverdoor","Bastard_BMWe32_cargo1door","Bastard_BMWe32_cargo2door","Bastard_BMWe32_trunkdoor","Truck_01_WoodenLogs","Truck_01_WoodenPlanks","Truck_01_MetalSheets","Truck_01_Barrel1","Truck_01_Barrel2","Truck_01_Barrel3","Truck_01_Barrel4","Truck_01_WoodenCrate1","Truck_01_WoodenCrate2","Truck_01_WoodenCrate3","Truck_01_WoodenCrate4","CanisterGasoline","CanisterGasoline_1","Cassette"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCover.paa"};
	};
	class BS_BMWe32_Cover_Winter: BS_BMWe32_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class BS_BMWe32_Cover_Civil: BS_BMWe32_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class BS_BMWe32_Cover_Desert: BS_BMWe32_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class BS_Rover_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\Rover_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","CarRadiator","Reflector_1_1","Reflector_2_1","SparkPlug","5x165_1_1","5x165_2_1","5x165_1_2","5x165_2_2","5x165_spare_1","Bastard_Rover_driverdoor","Bastard_Rover_codriverdoor","Bastard_Rover_trunkdoor","Bastard_Rover_hooddoor","CanisterGasoline","Truck_01_WoodenCrate2","Truck_01_WoodenCrate1","Truck_01_Barrel1","Truck_01_Barrel2","Bastard_Rover_tent"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCover.paa"};
	};
	class BS_Rover_Cover_Winter: BS_Rover_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class BS_Rover_Cover_Civil: BS_Rover_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class BS_Rover_Cover_Desert: BS_Rover_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class BS_w123_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\Mercedes_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","CarRadiator","Reflector_1_1","Reflector_2_1","SparkPlug","5x120_1_1","5x120_2_1","5x120_1_2","5x120_2_2","5x120_spare_1","Bastard_w123_driverdoor","Bastard_w123_codriverdoor","Bastard_w123_cargo1door","Bastard_w123_cargo2door","Bastard_w123_trunkdoor","Bastard_w123_hooddoor","Bastard_w124_driverdoor","Bastard_w124_codriverdoor","Bastard_w124_cargo1door","Bastard_w124_cargo2door","Bastard_w124_trunkdoor","Bastard_w124_hooddoor","Truck_01_WoodenLogs","Truck_01_WoodenPlanks","Truck_01_MetalSheets","Truck_01_Barrel1","Truck_01_Barrel2","Truck_01_Barrel3","Truck_01_Barrel4","Truck_01_WoodenCrate1","Truck_01_WoodenCrate2","Truck_01_WoodenCrate3","Truck_01_WoodenCrate4","CanisterGasoline","CanisterGasoline_1","bastard_siren"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCover.paa"};
	};
	class BS_w123_Cover_Winter: BS_w123_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class BS_w123_Cover_Civil: BS_w123_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class BS_w123_Cover_Desert: BS_w123_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class BS_CJ7_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\Jeep_CJ_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","CarRadiator","Reflector_1_1","Reflector_2_1","SparkPlug","5x165_1_1","5x165_2_1","5x165_1_2","5x165_2_2","5x165_spare_1","Bastard_cj7_driverdoor","Bastard_cj7_codriverdoor","Bastard_cj7_trunkdoor","Bastard_cj7_hooddoor","Truck_01_Barrel1"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCover.paa"};
	};
	class BS_CJ7_Cover_Winter: BS_CJ7_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class BS_CJ7_Cover_Civil: BS_CJ7_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class BS_CJ7_Cover_Desert: BS_CJ7_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class TFVaz_2126_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\VAZ_2126_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","Vaz_2126_Doors_Driver","Vaz_2126_Doors_CoDriver","Sedan_02_Wheel_1_1","Sedan_02_Wheel_1_2","Sedan_02_Wheel_2_1","Sedan_02_Wheel_2_2","Vaz_2126_Doors_BackRight","Vaz_2126_Doors_BackLeft","Vaz_2126_Doors_Trunk","Vaz_2126_doors_Hood","Truck_01_Barrel1","CanisterGasoline","Sedan_02_Wheel_Spare_1","Vaz_2126_doors_RoofCargo","Truck_01_WoodenCrate1","Truck_01_WoodenCrate2","Truck_01_WoodenCrate3","Material_WoodenPlanks","GasolineGenerator","Material_MetalWire"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCover.paa"};
	};
	class TFVaz_2126_Cover_Winter: TFVaz_2126_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class TFVaz_2126_Cover_Civil: TFVaz_2126_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class TFVaz_2126_Cover_Desert: TFVaz_2126_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class RaG_ATV_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\Atv_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","rag_atv_wheel_1_1","rag_atv_wheel_1_2","rag_atv_wheel_2_1","rag_atv_wheel_2_2","KeyChain","CamoNet"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCover.paa"};
	};
	class RaG_ATV_Cover_Winter: RaG_ATV_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class RaG_ATV_Cover_Civil: RaG_ATV_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class RaG_ATV_Cover_Desert: RaG_ATV_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class RaG_Schoolbus_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\RaG_Schoolbus_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"TruckBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","rag_schoolbus_hood","rag_schoolbus_wheel_1_1","rag_schoolbus_wheel_1_2","rag_schoolbus_wheel_2_1","rag_schoolbus_wheel_2_2","KeyChain","CamoNet"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCover.paa"};
	};
	class RaG_Schoolbus_Cover_Winter: RaG_Schoolbus_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class RaG_Schoolbus_Cover_Civil: RaG_Schoolbus_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class RaG_Schoolbus_Cover_Desert: RaG_Schoolbus_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class FK_Kraz6322_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\Kraz6322_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"TruckBattery","CarRadiator","Reflector_1_1","Reflector_2_1","SparkPlug","Kraz6322_Wheel_1_1","Kraz6322_Wheel_1_2","Kraz6322_Wheel_2_1","Kraz6322_Wheel_1_3","Kraz6322_Wheel_2_3","Kraz6322_Wheel_2_2","Kraz6322_Wheel_spare_1","Kraz6322_Doors_Driver","Kraz6322_Doors_CoDriver","Kraz6322_doors_Trunk","Kraz6322_Tent","CanisterGasoline","Truck_01_Barrel1","Truck_01_Barrel2","Truck_01_Barrel3","Truck_01_Barrel4"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCover.paa"};
	};
	class FK_Kraz6322_Cover_Winter: FK_Kraz6322_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class FK_Kraz6322_Cover_Civil: FK_Kraz6322_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class FK_Kraz6322_Cover_Desert: FK_Kraz6322_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class Chaos_Kart_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\Kartz_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","ChaosKart_wheel_1_1","ChaosKart_wheel_1_2","ChaosKart_wheel_1_3","ChaosKart_wheel_2_1","ChaosKart_wheel_2_2","ChaosKart_wheel_2_3","Shoulder1","CHK_Barrel_01","CHK_Barrel_02","CanisterGasoline","Wooden_Log_1","Wooden_Log_2","Wooden_Log_3"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCover.paa"};
	};
	class Chaos_Kart_Cover_Winter: Chaos_Kart_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class Chaos_Kart_Cover_Civil: Chaos_Kart_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class Chaos_Kart_Cover_Desert: Chaos_Kart_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class Croco_QuadBike_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\CrocoQuad_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","SparkPlug","croco_quad_wheel_1_1","croco_quad_wheel_1_2","croco_quad_wheel_2_1","croco_quad_wheel_2_2"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCover.paa"};
	};
	class Croco_QuadBike_Cover_Winter: Croco_QuadBike_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class Croco_QuadBike_Cover_Civil: Croco_QuadBike_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class Croco_QuadBike_Cover_Desert: Croco_QuadBike_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class GunnerTruck_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\GunnerTruck_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","JLTVWheel_1_1","JLTVWheel_1_2","JLTVWheel_2_1","JLTVWheel_2_2","JLTVDoor_1_1","JLTVDoor_2_1","JLTVDoor_1_2","JLTVDoor_2_2","JLTVHood","JLTVSpare","JLTVSpareWheel","CanisterGasoline","Material_FPole_Flag"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCover.paa"};
	};
	class GunnerTruck_Cover_Winter: GunnerTruck_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class GunnerTruck_Cover_Civil: GunnerTruck_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class GunnerTruck_Cover_Desert: GunnerTruck_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class GazTigr_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\savage_gaztigr_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","savage_gaztigr_koleso_1_1","savage_gaztigr_koleso_1_2","savage_gaztigr_koleso_2_1","savage_gaztigr_koleso_2_2","savage_gaztigr_Driver","savage_gaztigr_coDriver","savage_gaztigr_cargo1","savage_gaztigr_cargo2","savage_gaztigr_hood","CanisterGasoline","HandSaw","Shoulder","WoodAxe","savage_gaztigr_koleso_spare_1"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCover.paa"};
	};
	class GazTigr_Cover_Winter: GazTigr_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class GazTigr_Cover_Civil: GazTigr_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class GazTigr_Cover_Desert: GazTigr_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class dboATV_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\Atv_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","atv_wheel_1_1","atv_wheel_1_2","atv_wheel_2_1","atv_wheel_2_2","Shoulder","Melee","Belt_Left","Knife","CanisterGasoline","Back","FirstAid","Cassette"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCover.paa"};
	};
	class dboATV_Cover_Winter: dboATV_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class dboATV_Cover_Civil: dboATV_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class dboATV_Cover_Desert: dboATV_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class ExpansionLandrover_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\IRPLandRoverDefender_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","expansion_landrover_left","expansion_landrover_right","expansion_landrover_trunk","expansion_landrover_hood","expansion_landrover_codriverdoor","expansion_landrover_driverdoor","expansion_landrover_wheel_1_1","expansion_landrover_wheel_1_2","expansion_landrover_wheel_2_1","expansion_landrover_wheel_2_2","expansion_landrover_sparewheel","CanisterGasoline","Sea_Chest","Truck_01_WoodenCrate1","Truck_01_WoodenCrate2","Truck_01_WoodenCrate3"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCover.paa"};
	};
	class ExpansionLandrover_Cover_Winter: ExpansionLandrover_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class ExpansionLandrover_Cover_Civil: ExpansionLandrover_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class ExpansionLandrover_Cover_Desert: ExpansionLandrover_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class RagJeepWillis_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\ZeroyJeepWillys_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","rag_willy_hood","rag_willy_wheel_1_1","rag_willy_wheel_1_2","rag_willy_wheel_2_1","rag_willy_wheel_2_2","rag_willy_sparewheel","CanisterGasoline","KeyChain","CamoNet"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCover.paa"};
	};
	class RagJeepWillis_Cover_Winter: RagJeepWillis_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class RagJeepWillis_Cover_Civil: RagJeepWillis_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class RagJeepWillis_Cover_Desert: RagJeepWillis_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class RagZil130_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\ZIL130_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"TruckBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","rag_zil_130_driverdoor","rag_zil_130_codriverdoor","rag_zil_130_trunk","rag_zil_130_hood","rag_zil_130_wheel_1_1","rag_zil_130_wheel_1_2","rag_zil_130_wheel_2_1","rag_zil_130_wheel_2_2","KeyChain","CamoNet"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCover.paa"};
	};
	class RagZil130_Cover_Winter: RagZil130_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class RagZil130_Cover_Civil: RagZil130_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class RagZil130_Cover_Desert: RagZil130_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class RagVWBeetle_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\Lada4x4_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","rag_baja_driverdoor","rag_baja_codriverdoor","rag_baja_wheel_1_1","rag_baja_wheel_1_2","rag_baja_wheel_2_1","rag_baja_wheel_2_2","rag_baja_sparewheel","Truck_01_Barrel1","Truck_01_Barrel2","CamoNet","CanisterGasoline","KeyChain"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCover.paa"};
	};
	class RagVWBeetle_Cover_Winter: RagVWBeetle_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class RagVWBeetle_Cover_Civil: RagVWBeetle_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class RagVWBeetle_Cover_Desert: RagVWBeetle_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class RagDerbyCar_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\Volga_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","rag_derby_car_driverdoor","rag_derby_car_codriverdoor","rag_derby_car_wheel_1_1","rag_derby_car_wheel_1_2","rag_derby_car_wheel_2_1","rag_derby_car_wheel_2_2","KeyChain","CamoNet"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCover.paa"};
	};
	class RagDerbyCar_Cover_Winter: RagDerbyCar_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class RagDerbyCar_Cover_Civil: RagDerbyCar_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class RagDerbyCar_Cover_Desert: RagDerbyCar_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class H4ZiL131_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\CrSkZil131_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"TruckBattery","CarRadiator","SparkPlug","Reflector_1_1","Reflector_2_1","H4_Zil131_Wheel_1_1","H4_Zil131_Wheel_1_2","H4_Zil131_Wheel_2_1","H4_Zil131_Wheel_2_2","H4_Zil131_Wheel_1_3","H4_Zil131_Wheel_2_3","H4_Zil131_Wheel_spare_1","H4_Zil131_Doors_Driver","H4_Zil131_Doors_CoDriver","H4_Zil131_Doors_Trunk","H4_Zil131_Doors_Hood"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCover.paa"};
	};
	class H4ZiL131_Cover_Winter: H4ZiL131_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class H4ZiL131_Cover_Civil: H4ZiL131_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class H4ZiL131_Cover_Desert: H4ZiL131_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class TFUAZ3151_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\ExpansionUAZ_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","CarRadiator","Reflector_1_1","Reflector_2_1","SparkPlug","TF_UAZ3151_Wheel_1_1","TF_UAZ3151_Wheel_1_2","TF_UAZ3151_Wheel_2_1","TF_UAZ3151_Wheel_2_2","TF_UAZ3151_Wheel_spare_1","TF_UAZ3151_Doors_Driver","TF_UAZ3151_doors_cargo1","TF_UAZ3151_doors_cargo2","TF_UAZ3151_Doors_CoDriver","TF_UAZ3151_doors_Hood","TF_UAZ3151_doors_Trunk"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class TFUAZ3151_Cover_Winter: TFUAZ3151_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class TFUAZ3151_Cover_Civil: TFUAZ3151_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class TFUAZ3151_Cover_Desert: TFUAZ3151_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class vg7scorpion_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\vg7_scorpion_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","CarRadiator","SparkPlug","vg7_scorpion_wheel_1_1","vg7_scorpion_wheel_1_2","vg7_scorpion_wheel_2_1","vg7_scorpion_wheel_2_2","Back","Headgear","AmmoBox","AmmoBox2","Pistol","vg7_scorpion_weapon","Wrench","vg7_scorpion_licenseplate","vg7_scorpion_L_Door","vg7_scorpion_windjammer","Cassette"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class vg7scorpion_Cover_Winter: vg7scorpion_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class vg7scorpion_Cover_Civil: vg7scorpion_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class vg7scorpion_Cover_Desert: vg7scorpion_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class izh_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\izh_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"Reflector_1_1","SparkPlug","CarBattery","bastard_izh_Wheel_1_1","bastard_izh_Wheel_2_1","bastard_izh_Wheel_1_2","bastard_izh_Wheel_2_2","bastard_izh_Doors_Driver"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class izh_Cover_Winter: izh_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class izh_Cover_Civil: izh_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class izh_Cover_Desert: izh_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
	class TrailBrozer_Cover: CarCoverBase
	{
		scope = 2;
		model = "CarCover\data\Bruiser_Cover.p3d";
		displayName = "#str_cfgvehicles_camonet0";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","Trailbrozer_doors_driver","Trailbrozer_doors_codriver","Trailbrozer_doors_cargo1","Trailbrozer_doors_cargo2","Trailbrozer_doors_hood","Trailbrozer_doors_trunk","Trailbrozer_wheel_1_1","Trailbrozer_wheel_1_2","Trailbrozer_wheel_2_1","Trailbrozer_wheel_2_2","Trailbrozer_wheel_Spare_1","CanisterGasoline","55galDrum_1","55galDrum_2","sea_chest"};
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\carcover.paa"};
	};
	class TrailBrozer_Cover_Winter: TrailBrozer_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class TrailBrozer_Cover_Civil: TrailBrozer_Cover
	{
		displayName = "#CC_Tarp";
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
	};
	class TrailBrozer_Cover_Desert: TrailBrozer_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverDesert.paa"};
	};
};
