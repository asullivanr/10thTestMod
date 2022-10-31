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
	class VestItem;

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

	class OPTRE_FC_M52B_Armor_Vest;

	class OPTRE_FC_VX19_Helmet;

	// Armors
	class SpecialistArmor_test : SCT_10th_Specialist2_Armor
	{
		scope = 2;
		displayName = "[10th Test] Testing SCT_10th_Specialist2_Armor";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"10th_AC\data\armor\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Armor\data\Specialist2_Armor\armor_test.paa"
		};
	};
	class RiflemanArmor_test : SCT_10th_Rifleman_Armor
	{
		scope = 2;
		displayName = "[10th Test] Testing SCT_10th_Rifleman_Armor";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"10th_AC\data\armor\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Armor\data\Rifleman_Armor\armor_test.paa"
		};
	};
	class RiflemanArmorKnife_test : SCT_10th_Rifleman_Knife_Armor
	{
		scope = 2;
		displayName = "[10th Test] Testing SCT_10th_Rifleman_Knife_Armor";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"10th_AC\data\armor\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Armor\data\Rifleman_ArmorKnife\armor_test.paa"
		};
	};
	class DemolitionsKnifeArmor_test : SCT_10th_Demolitions_Knife_Armor
	{
		scope = 2;
		displayName = "[10th Test] Testing SCT_10th_Demolitions_Knife_Armor";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"10th_AC\data\armor\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Armor\data\DemolitionsKnife_Armor\armor_test.paa"
		};
	};
	class DemolitionsArmor_test : SCT_10th_Demolitions_Armor
	{
		scope = 2;
		displayName = "[10th Test] Testing SCT_10th_Demolitions_Armor";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"10th_AC\data\armor\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Armor\data\Demolitions_Armor\armor_test.paa"
		};
	};
	class Light_KnifeArmor_test : SCT_10th_Light_Knife_Armor
	{
		scope = 2;
		displayName = "[10th Test] Testing SCT_10th_Light_Knife_Armor";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"10th_AC\data\armor\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Armor\data\Light_Knife_Armor\armor_test.paa"
		};
	};
	class Light_Armor_test : SCT_10th_Light_Armor
	{
		scope = 2;
		displayName = "[10th Test] Testing SCT_10th_Light_Knife_Armor";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"10th_AC\data\armor\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Armor\data\Light_Armor\armor_test.paa"
		};
	};
	class Sniper_Knife_Armor_test : SCT_10th_Sniper_Knife_Armor
	{
		scope = 2;
		displayName = "[10th Test] Testing SCT_10th_Sniper_Knife_Armor";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"10th_AC\data\armor\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Armor\data\Sniper_Knife\armor_test.paa"
		};
	};
	class Sniper_Armor_test : SCT_10th_Sniper_Armor
	{
		scope = 2;
		displayName = "[10th Test] Testing SCT_10th_Sniper_Armor";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"10th_AC\data\armor\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Armor\data\sniper_armor\armor_test.paa"
		};
	};
	class Sniper_ArmorGhillie_test : SCT_10th_Sniper_Ghillie_Armor
	{
		scope = 2;
		displayName = "[10th Test] Testing SCT_10th_Sniper_Ghillie_Armor";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"10th_AC\data\armor\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Armor\data\Sniper_armor_ghillie\armor_test.paa"
		};
	};
	class Alternate_Armor_test : SCT_10th_Alternate_Armor
	{
		scope = 2;
		displayName = "[10th Test] Testing SCT_10th_Alternate_Armor";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"10th_AC\data\armor\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Armor\data\Alternate_Armor\armor_test.paa"
		};
	};
	class Pilot_Vest_Test : OPTRE_FC_M52B_Armor_Vest {
		scope = 2;
		displayName = "[10th Test] Pilot Vest";
		model = "\OPTRE_FC_Units\Marines\h3_vest.p3d";
		picture = "\OPTRE_FC_Units\Marines\data\h3_vest_i_ca.paa";
		hiddenSelectionsTextures[] = {
			"Armor\data\Pilot_Armor_Vest\h3_vest_co.paa",
		};
		hiddenSelections[] = {
			"camo1",
			"attach_arms",
			"A_Ghillie",
			"AP_AR",
			"AP_BR",
			"AB_Canteen",
			"AP_Frag",
			"AP_GL",
			"AP_Knife",
			"AP_Pack",
			"AP_Pistol",
			"AP_SG",
			"AP_SMG",
			"AP_Smoke",
			"AP_Sniper"
		};
		class ItemInfo : VestItem {
			uniformModel = "\OPTRE_FC_Units\Marines\h3_vest.p3d";
			containerClass = "Supply160";
			mass = 65;
			passThrough = 0.15000001;
			modelSides[] = { 6 };
			hiddenSelectionsTextures[] = {
				"Armor\data\Pilot_Armor_Vest\h3_vest_co.paa",
			};
			hiddenSelections[] = {
			"camo1",
			"attach_arms",
			"A_Ghillie",
			"AP_AR",
			"AP_BR",
			"AB_Canteen",
			"AP_Frag",
			"AP_GL",
			"AP_Knife",
			"AP_Pack",
			"AP_Pistol",
			"AP_SG",
			"AP_SMG",
			"AP_Smoke",
			"AP_Sniper"
			};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 150;
					passThrough = 0.1;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 150;
					passThrough = 0.1;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 150;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 150;
					passThrough = 0.1;
				};
				class Chest {
					hitpointName = "HitChest";
					armor = 150;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 150;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 150;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					armor = 150;
					passThrough = 0.1;
				};
			};
		};
	};
	class Pilot_Armored_Test : OPTRE_FC_M52B_Armor_Vest {
		scope = 2;
		displayName = "[10th Test] Pilot Armored Varient";
		model = "\OPTRE_FC_Units\Marines\h3_vest.p3d";
		picture = "\OPTRE_FC_Units\Marines\data\h3_vest_i_ca.paa";
		hiddenSelectionsTextures[] = {
			"Armor\data\Pilot_Armor_Armored\h3_vest_co.paa",
		};
		hiddenSelections[] = {
				"camo1",
				"A_Ghillie",
				"AP_AR",
				"AP_BR",
				"AP_GL",
				"AP_Knife",
				"AP_Pack",
				"AP_Pistol",
				"AP_SG",
				"AP_SMG",
				"AP_Smoke",
				"AP_Sniper",
				"AP_Frag",
				"AB_Canteen"
		};
		class ItemInfo : VestItem {
			uniformModel = "\OPTRE_FC_Units\Marines\h3_vest.p3d";
			containerClass = "Supply160";
			mass = 65;
			passThrough = 0.15000001;
			modelSides[] = { 6 };
			hiddenSelectionsTextures[] = {
				"Armor\data\Pilot_Armor_Armored\h3_vest_co.paa",
			};
			hiddenSelections[] = {
				"camo1",
				"A_Ghillie",
				"AP_AR",
				"AP_BR",
				"AP_GL",
				"AP_Knife",
				"AP_Pack",
				"AP_Pistol",
				"AP_SG",
				"AP_SMG",
				"AP_Smoke",
				"AP_Sniper",
				"AP_Frag",
				"AB_Canteen"
			};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 150;
					passThrough = 0.1;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 150;
					passThrough = 0.1;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 150;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 150;
					passThrough = 0.1;
				};
				class Chest {
					hitpointName = "HitChest";
					armor = 150;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 150;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 150;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					armor = 150;
					passThrough = 0.1;
				};
			};
		};
	};

	// Helmets
	class Helmet_Black : SCT_10th_CH252D_Base {
		scope = 2;
		displayName = "[10th Test] Helmet Black Visor";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Armor\data\Helmet_Black\helmet_test.paa",
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
				"Armor\data\Helmet_Black\helmet_test.paa",
				"10th_AC\data\helmets\blackvisor.paa"
			};
		};
	};
	class Helmet_Default : SCT_10th_CH252D_Base {
		scope = 2;
		displayName = "[10th Test] Helmet Default Visor";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Armor\data\Helmet_Default\helmet_test.paa",
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
				"Armor\data\Helmet_Default\helmet_test.paa",
				"10th_AC\data\helmets\defaultvisor.paa"
			};
		};
	};
	class Helmet_Blue : SCT_10th_CH252D_Base {
		scope = 2;
		displayName = "[10th Test] Helmet Blue Visor";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Armor\data\Helmet_Blue\helmet_test.paa",
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
				"Armor\data\Helmet_Blue\helmet_test.paa",
				"10th_AC\data\helmets\bluevisor.paa"
			};
		};
	};
	class Helmet_Gold : SCT_10th_CH252D_Base {
		scope = 2;
		displayName = "[10th Test] Helmet Gold Visor";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Armor\data\Helmet_Gold\helmet_test.paa",
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
				"Armor\data\Helmet_Gold\helmet_test.paa",
				"10th_AC\data\helmets\goldvisor.paa"
			};
		};
	};
	class Helmet_Silver : SCT_10th_CH252D_Base {
		scope = 2;
		displayName = "[10th Test] Helmet Silver Visor";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Armor\data\Helmet_Silver\helmet_test.paa",
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
				"Armor\data\Helmet_Silver\helmet_test.paa",
				"10th_AC\data\helmets\silvervisor.paa"
			};
		};
	};
	class Helmet_Pilot : OPTRE_FC_VX19_Helmet {
		dlc = "OPTRE_FC";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[10th Test] Helmet Pilot V1";
		author = "Wolfe, Kodiak";
		hiddenSelectionsTextures[] = {
			"\Armor\data\Pilot_helmet_v1\10thpilot.paa",
			"\Armor\data\Pilot_helmet_v1\h3_pilothelmet_visor_CO"
		};
	};
};