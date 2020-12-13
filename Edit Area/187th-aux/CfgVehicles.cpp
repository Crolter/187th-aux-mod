class CfgVehicles
{
    class UniformItem;
	
/***********************************************************************************************************
--------------------------------------------------------------Uniforms------------------------------------------
************************************************************************************************************/
	class O_Soldier_F;

	class 187_Base_Uniform: O_Soldier_F
	{// Base Uniform stats for more options with other uniforms...
		class HitPoints
		{
            class HitFace
            {
                armor = 5; //Default Value
                material = -1;
                name = "face_hub";
                passThrough = 0.8;
                radius = 0.08;
                explosionShielding = 0.5;
                minimalHit = 0.01;
            };
            class HitNeck: HitFace
            {
                armor = 5; //Default=1
                material = -1;
                name = "neck";
                passThrough = 0.8;
                radius = 0.1;
                explosionShielding = 0.5;
                minimalHit = 0.01;
            };
            class HitHead: HitNeck
            {
                armor = 5; //Default Value
                material = -1;
                name = "head";
                passThrough = 0.8;
                radius = 0.2;
                explosionShielding = 0.5;
                minimalHit = 0.01;
                depends = "HitFace max HitNeck";
            };
            class HitPelvis
            {
                armor = 15; //Default=6
                material = -1;
                name = "pelvis";
                passThrough = 0.6;
                radius = 0.24;
                explosionShielding = 0.5;
                visual = "injury_body";
                minimalHit = 0.01;
                depends = "0";
            };
            class HitAbdomen: HitPelvis
            {
                armor = 15; //Default=1
                material = -1;
                name = "spine1";
                passThrough = 0.6;
                radius = 0.16;
                explosionShielding = 0.5;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitDiaphragm: HitAbdomen
            {
                armor = 15; //Default=1
                material = -1;
                name = "spine2";
                passThrough = 0.6;
                radius = 0.18;
                explosionShielding = 0.5;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitChest: HitDiaphragm
            {
                armor = 15; //Default=1
                material = -1;
                name = "spine3";
                passThrough = 0.6;
                radius = 0.18;
                explosionShielding = 0.5;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitBody: HitChest
            {
                armor = 1000; //do not change
                material = -1;
                name = "body";
                passThrough = 1;
                radius = 0;
                explosionShielding = 0.5;
                visual = "injury_body";
                minimalHit = 0.01;
                depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
            };
            class HitArms: HitBody
            {
                armor = 15; //Default=3
                material = -1;
                name = "arms";
                passThrough = 0.6;
                radius = 0.1;
                explosionShielding = 0.5;
                visual = "injury_hands";
                minimalHit = 0.01;
                depends = "0";
            };
            class HitHands: HitArms
            {
                armor = 15; //Default=3
                material = -1;
                name = "hands";
                passThrough = 0.6;
                radius = 0.1;
                explosionShielding = 0.5;
                visual = "injury_hands";
                minimalHit = 0.01;
                depends = "HitArms";
            };
            class HitLegs: HitHands
            {
                armor = 15; //Default=3
                material = -1;
                name = "legs";
                passThrough = 0.6;
                radius = 0.14;
                explosionShielding = 0.5;
                visual = "injury_legs";
                minimalHit = 0.01;
                depends = "0";
            };
            class Incapacitated: HitLegs
            {
                armor = 1000; //Do not change
                material = -1;
                name = "body";
                passThrough = 1;
                radius = 0;
                explosionShielding = 0.5;
                visual = "";
                minimalHit = 0;
                depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
            };
            //----------------------------Ace Hitpoints---------------------------
            class HitLeftArm
            {
                armor = 15; //Default=1
                material = -1;
                name = "hand_l";
                passThrough = 0.6;
                radius = 0.08;
                explosionShielding = 0.5;
                visual = "injury_hands";
                minimalHit = 0.01;
            };
            class HitRightArm: HitLeftArm
            {
                name = "hand_r";
            };
            class HitLeftLeg
            {
                armor = 15; //Default=1
                material = -1;
                name = "leg_l";
                passThrough = 0.6;
                radius = 0.1;
                explosionShielding = 0.5;
                visual = "injury_legs";
                minimalHit = 0.01;
            };
            class HitRightLeg: HitLeftLeg
            {
                name = "leg_r";
            };
            class ACE_HDBracket
            {
                armor = 1; // Do not Change
                material = -1;
                name = "head";
                passThrough = 0;
                radius = 1;
                explosionShielding = 0.5;
                visual = "";
                minimalHit = 0;
                depends = "HitHead";
            };
        };
	};
	class 187th_CloneArmor_Recruit: 187_Base_Uniform
	{
		author 			= "PraetorPanda";
		dlc				= "187th Aux Mod";
		scope 			= 1;
		scopeCurator	= 0;
		uniformClass 	= "187th_Clone_Recruit";
		model 			= "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		weapons[] 		= {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] 		= {};
		RespawnItems[] 	= {};
		magazines[] 	= {};
		respawnMagazines[] = {};
		hiddenSelections[] 		= {"camo1","camo2"};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\CloneArmor\data\Clone_armor1_co.paa",
			"\MRC\JLTS\characters\CloneArmor\data\Clone_armor2_co.paa"
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"MRC\JLTS\Characters\CloneArmor\data\Clone_armor1.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor1_injury.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor1_injury.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor2.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor2_injury.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor2_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","a3\characters_f\heads\data\hl_white.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"};
		};
		editorSubcategory = "187_clones_white";
	};
	class 187th_CloneArmor_Trooper: 187_Base_Uniform
	{
		author 			= "PraetorPanda";
		dlc				= "187th Aux Mod";
		scope 			= 1;
		scopeCurator	= 0;
		uniformClass 	= "187th_Clone_Trooper";
		model 			= "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		weapons[] 		= {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] 		= {};
		RespawnItems[] 	= {};
		magazines[] 	= {};
		respawnMagazines[] = {};
		hiddenSelections[] 		= {"camo1","camo2"};
		hiddenSelectionsTextures[] = 
		{
			"\MRC\JLTS\characters\CloneLegions\data\Clone_187thTrooper_armor1_co.paa",
			"\MRC\JLTS\characters\CloneLegions\data\Clone_187thTrooper_armor2_co.paa"
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"MRC\JLTS\Characters\CloneArmor\data\Clone_armor1.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor1_injury.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor1_injury.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor2.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor2_injury.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor2_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","a3\characters_f\heads\data\hl_white.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"};
		};
		editorSubcategory = "187_clones_white";
	};
	class 187th_CloneArmor_Medic: 187_Base_Uniform
	{
		author 			= "PraetorPanda";
		dlc				= "187th Aux Mod";
		scope 			= 1;
		scopeCurator	= 0;
		uniformClass 	= "187th_Clone_Medic";
		model 			= "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		weapons[] 		= {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] 		= {};
		RespawnItems[] 	= {};
		magazines[] 	= {};
		respawnMagazines[] = {};
		hiddenSelections[] 		= {"camo1","camo2"};
		hiddenSelectionsTextures[] = {
			"\MRC\JLTS\characters\CloneLegions\data\Clone_187thMedic_armor1_co.paa",
			"\MRC\JLTS\characters\CloneLegions\data\Clone_187thTrooper_armor2_co.paa"
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"MRC\JLTS\Characters\CloneArmor\data\Clone_armor1.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor1_injury.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor1_injury.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor2.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor2_injury.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor2_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","a3\characters_f\heads\data\hl_white.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"};
		};
		editorSubcategory = "187_clones_white";
	};
	class 187th_CloneArmor_Airborne: 187_Base_Uniform
	{
		author 			= "PraetorPanda";
		dlc				= "187th Aux Mod";
		scope 			= 1;
		scopeCurator	= 0;
		uniformClass 	= "187th_Clone_Airborne";
		model 			= "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		weapons[] 		= {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] 		= {};
		RespawnItems[] 	= {};
		magazines[] 	= {};
		respawnMagazines[] = {};
		hiddenSelections[] 		= {"camo1","camo2"};
		hiddenSelectionsTextures[]= {
			"\MRC\JLTS\characters\CloneLegions\data\Clone_187thAirborne_armor1_co.paa",
			"\MRC\JLTS\characters\CloneLegions\data\Clone_187thAirborne_armor2_co.paa"
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"MRC\JLTS\Characters\CloneArmor\data\Clone_armor1.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor1_injury.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor1_injury.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor2.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor2_injury.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor2_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","a3\characters_f\heads\data\hl_white.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"};
		};
		editorSubcategory = "187_clones_white";
	};
	
	//End Uniforms
	
/***********************************************************************************************************
--------------------------------------------------------------Backpacks------------------------------------------
************************************************************************************************************/
	class OPTRE_ANPRC_521_Black;
	class JLTS_Clone_backpack_RTO;
	class JLTS_Clone_RTO_pack;
	class JLTS_Clone_backpack;
	class JLTS_Clone_backpack_eod;
	class JLTS_Clone_backpack_medic;
	class JLTS_Clone_belt_bag;
	
	class 187_Zeus_LR : JLTS_Clone_backpack_RTO
    {
		author = "PraetorPanda";
        displayName = "[187th] Zeus LR";
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_range = 100000;
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
        maximumLoad = 500;
    };
	
    class 187_Radio_Pack: JLTS_Clone_backpack_RTO
    {
		author = "PraetorPanda";
        displayName = "[187th] Radio Pack";
        tf_isolatedAmount = 0.65;
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_range = 30000;
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
        maximumLoad = 280;
    };
	
	class 187_MiniRadio_Pack: JLTS_Clone_RTO_pack
    {
		author = "PraetorPanda";
        displayName = "[187th] Radio Pack Mini";
        tf_isolatedAmount = 0.65;
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_range = 30000;
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
        maximumLoad = 180;
    };
	
	class 187_Clone_Backpack : JLTS_Clone_backpack
    {
        author = "PraetorPanda";
        displayName = "[187th] Clone Trooper Backpack";
        maximumLoad = 280;
		mass = 50;
		hiddenSelections[] = {"camo1"};
    };
	
	class 187_Clone_Backpack_eod : JLTS_Clone_backpack_eod
    {
        author = "PraetorPanda";
        displayName = "[187th] Clone Trooper Backpack (EOD)";
        maximumLoad = 280;
		mass = 50;
		hiddenSelections[] = {"camo1"};
    };
	
	class 187_Clone_Backpack_medic : JLTS_Clone_backpack_medic
    {
        author = "PraetorPanda";
        displayName = "[187th] Clone Trooper Backpack (Medic)";
        maximumLoad = 280;
		mass = 50;
		hiddenSelections[] = {"camo1"};
    };
	
	class 187_Clone_Beltbag : JLTS_Clone_belt_bag
    {
        author = "PraetorPanda";
        displayName = "[187th] Clone Trooper Belt Bag";
        maximumLoad = 180;
		mass = 50;
		hiddenSelections[] = {"camo1"};
    };
    
    /***************************************************************************************
    ----------------------------------CIS Stuff---------------------------------------------
    ****************************************************************************************/
    class JLTS_B1_backpack;
	class JLTS_B1_backpack_prototype;
	class JLTS_B1_antenna;
    class 187th_B1_Backpack: JLTS_B1_backpack
	{
		author = "187th Mod Team";
		scope = 1;
	};
	class 187th_B1_Prototype_Backpack: JLTS_B1_backpack_prototype
	{
		author = "187th Mod Team";
		scope = 1;
	};
	class 187th_B1_antenna_backpack: JLTS_B1_antenna
	{
		author = "187th Mod Team";
		scope = 1;
	};
	class 187th_B1_Heavy_AT_Backpack: JLTS_B1_backpack
	{
		author = "187th Mod Team";
		scope = 1;
		class TransportMagazines
		{
			class _xx_at_heavy_mag
			{
				count = 3;
				magazine = "JLTS_E60R_AT_mag";
			};
		};
	};
	class 187th_B1_Light_AT_Backpack: JLTS_B1_backpack
	{
		author = "187th Mod Team";
		scope = 1;
		class TransportMagazines
		{
			class _xx_at_light_mag
			{
				count = 2;
				magazine = "JLTS_RPS6_mag";
			};
			class _xx_at_light_he_mag
			{
				count = 2;
				magazine = "JLTS_RPS6_HE_mag";
			};
		};
	};
	class 187th_B1_AA_Backpack: JLTS_B1_backpack
	{
		author = "187th Mod Team";
		scope = 1;
		class TransportMagazines
		{
			class _xx_aa_mag
			{
				count = 3;
				magazine = "Titan_AA";
			};
		};
	};
    /***************************************************************************************
    ----------------------------------CIS Units---------------------------------------------
    ****************************************************************************************/
    
    class JLTS_Droid_B1_E5;
	class JLTS_Droid_B1_Marine;
	class JLTS_Droid_B1_Security;
	class JLTS_Droid_B1_Commander;
	class JLTS_Droid_B1_Pilot;
	class JLTS_Droid_B1_Crew;
	class JLTS_Droid_B1_Prototype;
    
    class 187th_B1_Unit: JLTS_Droid_B1_E5
	{
		displayName = "Droid B1 (Testing)";
		author = "187th Mod Team";
		scope = 2;
		scopeCurator = 2;
		faction = "187th_CIS";
        editorCategory = "187th_CIS_Assets";
		editorSubcategory = "187th_Infantry";
		linkeditems[] = {"ItemGPS","ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink","JLTS_NVG_droid_chip_1"};
		respawnlinkeditems[] = {"ItemGPS","ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink","JLTS_NVG_droid_chip_1"};
		class HitPoints
		{
			class HitAbdomen
			{
				armor = 8;
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "spine1";
				passThrough = 0.5;
				radius = 0.15;
				visual = "injury_body";
			};
			class HitArms
			{
				armor = 8;
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitBody
			{
				armor = 1000;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				explosionShielding = 2;
				material = -1;
				minimalHit = 0.01;
				name = "body";
				passThrough = 0.5;
				radius = 0.16;
				visual = "injury_body";
			};
			class HitChest
			{
				armor = 8;
				explosionShielding = 2;
				material = -1;
				minimalHit = 0.01;
				name = "spine3";
				passThrough = 0.5;
				radius = 0.15;
				visual = "injury_body";
			};
			class HitDiaphragm
			{
				armor = 8;
				explosionShielding = 2;
				material = -1;
				minimalHit = 0.01;
				name = "spine2";
				passThrough = 0.5;
				radius = 0.15;
				visual = "injury_body";
			};
			class HitFace
			{
				armor = 2;
				explosionShielding = 0.1;
				material = -1;
				minimalHit = 0.01;
				name = "face_hub";
				passThrough = 0.5;
				radius = 0.08;
			};
			class HitHands
			{
				armor = 8;
				depends = "HitArms";
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitHead
			{
				armor = 2;
				depends = "HitFace max HitNeck";
				explosionShielding = 0.1;
				material = -1;
				minimalHit = 0.01;
				name = "head";
				passThrough = 0.5;
				radius = 0.2;
			};
			class HitLeftArm
			{
				armor = 1;
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "hand_l";
				passThrough = 0.1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitLeftLeg
			{
				armor = 1;
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "leg_l";
				passThrough = 0.1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitLegs
			{
				armor = 8;
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "legs";
				passThrough = 1;
				radius = 0.12;
				visual = "injury_legs";
			};
			class HitNeck
			{
				armor = 5;
				explosionShielding = 0.1;
				material = -1;
				minimalHit = 0.01;
				name = "neck";
				passThrough = 0.5;
				radius = 0.1;
			};
			class HitPelvis
			{
				armor = 8;
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "pelvis";
				passThrough = 0.25;
				radius = 0.2;
				visual = "injury_body";
			};
			class HitRightArm
			{
				armor = 1;
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "hand_r";
				passThrough = 0.1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitRightLeg
			{
				armor = 1;
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "leg_r";
				passThrough = 0.1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class Incapacitated
			{
				armor = 1000;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "";
			};
		};
		weapons[] = {"JLTS_E5","Throw","Put"};
		respawnWeapons[] = {"JLTS_E5","Throw","Put"};
		magazines[] = {"JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","swop_termDetDT_G","swop_SmokeShell"};
		respawnMagazines[] = {"JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","swop_termDetDT_G","swop_SmokeShell"};
		backpack = "187th_B1_Backpack";
		cost = 1;
	};
	
/***********************************************************************************************************
--------------------------------------------------------------Vehicles--------------------------------------
************************************************************************************************************/
	class 615th_LAAT_MK2;
	
	class cfgFunctions
	{
		class 187_functions
		{
			class afterburner_functions
			{
				file = "187th-aux\Functions\afterburners"
				class afterburners_turn_on;
					{"187th-aux\Functions\afterburners\fn_afterburners_turn_on.sqf"};
				class afterburners_turn_off
					{"187th-aux\Functions\afterburners\fn_afterburners_turn_off.sqf"};
			};
		};
	};
	
	class 187th_LAAT : 615th_LAAT_MK2
	{
		displayname="Test LAAT for 187th";
		faction="187th_Republic";
		editorCategory = "187th_Rep_Assets";
		editorSubcategory = "187th_Helicopter";
		armor=600;
		fuelCapacity=3000;
		scope=2;
		scopeCurator = 2;
		side=1;
		weapons[]=
		{
			"3as_ARC_Missile_AGM",
			"3as_LAAT_Missile_AA",
			"ParticleBeamCannon_F",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"3as_PylonMissile_ARC_8Rnd_Missile_AA",
			"3as_PylonMissile_ARC_8Rnd_Missile_AA",
			"3as_PylonRack_ARC_6Rnd_Missile_AGM",
			"3as_PylonRack_ARC_6Rnd_Missile_AGM",
			"3as_PylonRack_ARC_6Rnd_Missile_AGM",
			"3as_PylonRack_ARC_6Rnd_Missile_AGM",
			"3as_PylonRack_ARC_6Rnd_Missile_AGM",
			"3as_PylonRack_ARC_6Rnd_Missile_AGM",
			"3as_PylonRack_ARC_6Rnd_Missile_AGM",
			"3as_PylonRack_ARC_6Rnd_Missile_AGM",
			"3as_PylonRack_ARC_6Rnd_Missile_AGM",
			"3as_PylonRack_ARC_6Rnd_Missile_AGM",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"Laser_Battery_F",
			"Laser_Battery_F",
			"Laser_Battery_F"
		};
		class UserActions
		{
			class rampOpen
			{
				available=0;
				showWindow=1;
				displayName="Ramp Open";
				position="pilotview";
				radius=9;
				condition="this animationphase 'ramp' ==0";
				statement="this animateSource ['ramp',1,1];";
				onlyforplayer=0;
			};
			class rampClose
			{
				available=0;
				showWindow=1;
				displayName="Ramp Close";
				position="pilotview";
				radius=9;
				condition="this animationphase 'ramp' ==1";
				statement="this animateSource ['ramp',0,1];";
				onlyforplayer=0;
			};
			class afterburners_turn_on
			{ //this no worky...
				showWindow=1;
				hideOnUse=0;
				priority=9;
				role=0;
				displayName="Activate Impulse";
				position="pilotview";
				radius=6;
				onlyforplayer=0;
				condition="(alive this) AND (player == driver this) AND (isEngineOn this)";
				statement="0 = this spawn fnc_afterburners_turn_on;";
			};
			class afterburners_turn_off
			{ //this no worky...
				showWindow=1;
				hideOnUse=0;
				priority=9;
				role=1;
				displayName="Deactivate Impulse";
				position="pilotview";
				radius=6;
				onlyforplayer=0;
				condition="(alive this) AND ((speed this) > 50) AND (player == driver this)";
				statement="0 = this spawn fnc_afterburners_turn_off;";
			};
		};
	};
	
	
	
	
/***********************************************************************************************************
--------------------------------------------------------------Supply Crates--------------------------------------
************************************************************************************************************/
    class ls_carrybox_base;

    class 187th_Base_Crate : ls_carrybox_base
    {
    scope=2;
    displayName= "187th Crate";
    faction= "187th_Republic";
    editorCategory = "187th_Rep_Assets";
    editorSubcategory = "187th_Crates";
    };



};// END

