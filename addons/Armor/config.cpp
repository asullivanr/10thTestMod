class CfgPatches
{
	class Tenthed_Test_Armor {
		author = "Akira";
		name = "10th Armor Testing";
		requiredAddons[] = {
			"Silvers_Customs"
		};
		weapons[] = {};
		units[] = {};
	};
};

class cfgWeapons
{
	class HeadgearItem;

	class SCT_10th_Specialist2_Armor;
	class SCT_10th_Rifleman_Armor;
	class SCT_10th_Rifleman_Knife_Armor;
	class SCT_10th_Demolitions_Knife_Armor;
	class SCT_10th_Demolitions_Armor;
	class SCT_10th_Light_Knife_Armor;
	class SCT_10th_Light_Armor;
	class SCT_10th_Sniper_Knife_Armor;
	class SCT_10th_Sniper_Armor;
	class SCT_10th_Sniper_Ghillie_Armor;
	class SCT_10th_Alternate_Armor;

	class SCT_10th_CH252D_Base;

	// Armors
	class SpecialistArmor_test : SCT_10th_Specialist2_Armor
	{
		scope = 2;
		displayName = "[10th] Testing SCT_10th_Specialist2_Armor";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"10th_AC\data\armor\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"ODST_testing\data\Specialist2_Armor\armor_test.paa"
		};
	};
	class RiflemanArmor_test : SCT_10th_Rifleman_Armor
	{
		scope = 2;
		displayName = "[10th] Testing SCT_10th_Rifleman_Armor";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"10th_AC\data\armor\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"ODST_testing\data\Rifleman_Armor\armor_test.paa"
		};
	};
	class RiflemanArmorKnife_test : SCT_10th_Rifleman_Knife_Armor
	{
		scope = 2;
		displayName = "[10th] Testing SCT_10th_Rifleman_Knife_Armor";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"10th_AC\data\armor\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"ODST_testing\data\Rifleman_ArmorKnife\armor_test.paa"
		};
	};
	class DemolitionsKnifeArmor_test : SCT_10th_Demolitions_Knife_Armor
	{
		scope = 2;
		displayName = "[10th] Testing SCT_10th_Demolitions_Knife_Armor";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"10th_AC\data\armor\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"ODST_testing\data\DemolitionsKnife_Armor\armor_test.paa"
		};
	};
	class DemolitionsArmor_test : SCT_10th_Demolitions_Armor
	{
		scope = 2;
		displayName = "[10th] Testing SCT_10th_Demolitions_Armor";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"10th_AC\data\armor\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"ODST_testing\data\Demolitions_Armor\armor_test.paa"
		};
	};
	class Light_KnifeArmor_test : SCT_10th_Light_Knife_Armor
	{
		scope = 2;
		displayName = "[10th] Testing SCT_10th_Light_Knife_Armor";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"10th_AC\data\armor\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"ODST_testing\data\Light_Knife_Armor\armor_test.paa"
		};
	};
	class Light_Armor_test : SCT_10th_Light_Armor
	{
		scope = 2;
		displayName = "[10th] Testing SCT_10th_Light_Knife_Armor";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"10th_AC\data\armor\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"ODST_testing\data\Light_Armor\armor_test.paa"
		};
	};
	class Sniper_Knife_Armor_test : SCT_10th_Sniper_Knife_Armor
	{
		scope = 2;
		displayName = "[10th] Testing SCT_10th_Sniper_Knife_Armor";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"10th_AC\data\armor\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"ODST_testing\data\Sniper_Knife\armor_test.paa"
		};
	};
	class Sniper_Armor_test : SCT_10th_Sniper_Armor
	{
		scope = 2;
		displayName = "[10th] Testing SCT_10th_Sniper_Armor";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"10th_AC\data\armor\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"ODST_testing\data\sniper_armor\armor_test.paa"
		};
	};
	class Sniper_ArmorGhillie_test : SCT_10th_Sniper_Ghillie_Armor
	{
		scope = 2;
		displayName = "[10th] Testing SCT_10th_Sniper_Ghillie_Armor";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"10th_AC\data\armor\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"ODST_testing\data\Sniper_armor_ghillie\armor_test.paa"
		};
	};
	class Alternate_Armor_test : SCT_10th_Alternate_Armor
	{
		scope = 2;
		displayName = "[10th] Testing SCT_10th_Alternate_Armor";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"10th_AC\data\armor\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"ODST_testing\data\Alternate_Armor\armor_test.paa"
		};
	};

	// Helmets
	class Helmet_Black : SCT_10th_CH252D_Base {
		scope = 2;
		displayName = "[10th] Helmet Black Visor";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"ODST_testing\data\Helmet_Black\helmet_test.paa",
			"10th_AC\data\helmets\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
		class ItemInfo : HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
			mass = 40;
			modelSides[] = { 6 };
			passThrough = 0.1;
			hiddenSelections[] =
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[] =
			{
				"ODST_testing\data\Helmet_Black\helmet_test.paa",
				"10th_AC\data\helmets\blackvisor.paa"
			};
		};
	};
	class Helmet_Default : SCT_10th_CH252D_Base {
		scope = 2;
		displayName = "[10th] Helmet Default Visor";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"ODST_testing\data\Helmet_Default\helmet_test.paa",
			"10th_AC\data\helmets\defaultvisor.paa"
		};
		optreHUDStyle = "ODST_1";
		class ItemInfo : HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
			mass = 40;
			modelSides[] = { 6 };
			passThrough = 0.1;
			hiddenSelections[] =
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[] =
			{
				"ODST_testing\data\Helmet_Default\helmet_test.paa",
				"10th_AC\data\helmets\defaultvisor.paa"
			};
		};
	};
	class Helmet_Blue : SCT_10th_CH252D_Base {
		scope = 2;
		displayName = "[10th] Helmet Blue Visor";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"ODST_testing\data\Helmet_Blue\helmet_test.paa",
			"10th_AC\data\helmets\bluevisor.paa"
		};
		optreHUDStyle = "ODST_1";
		class ItemInfo : HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
			mass = 40;
			modelSides[] = { 6 };
			passThrough = 0.1;
			hiddenSelections[] =
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[] =
			{
				"ODST_testing\data\Helmet_Blue\helmet_test.paa",
				"10th_AC\data\helmets\bluevisor.paa"
			};
		};
	};
	class Helmet_Gold : SCT_10th_CH252D_Base {
		scope = 2;
		displayName = "[10th] Helmet Gold Visor";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"ODST_testing\data\Helmet_Gold\helmet_test.paa",
			"10th_AC\data\helmets\goldvisor.paa"
		};
		optreHUDStyle = "ODST_1";
		class ItemInfo : HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
			mass = 40;
			modelSides[] = { 6 };
			passThrough = 0.1;
			hiddenSelections[] =
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[] =
			{
				"ODST_testing\data\Helmet_Gold\helmet_test.paa",
				"10th_AC\data\helmets\goldvisor.paa"
			};
		};
	};
	class Helmet_Silver : SCT_10th_CH252D_Base {
		scope = 2;
		displayName = "[10th] Helmet Silver Visor";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"ODST_testing\data\Helmet_Silver\helmet_test.paa",
			"10th_AC\data\helmets\silvervisor.paa"
		};
		optreHUDStyle = "ODST_1";
		class ItemInfo : HeadgearItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
			mass = 40;
			modelSides[] = { 6 };
			passThrough = 0.1;
			hiddenSelections[] =
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[] =
			{
				"ODST_testing\data\Helmet_Silver\helmet_test.paa",
				"10th_AC\data\helmets\silvervisor.paa"
			};
		};
	};

};