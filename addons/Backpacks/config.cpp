class CfgPatches
{
	class Tenthed_Test_Backpacks {
		author = "Akira";
		name = "10th Backpacks";
		requiredAddons[] = {
			"OPTRE_Core",
			"Silvers_Customs"
		};
		weapons[] = {};
		units[] = {};
	};
};
class cfgVehicles {
	class OPTRE_UNSC_Rucksack;
	class OPTRE_ILCS_Rucksack_Black;

	class Tenthed_Test_ANPRC_521_Backback : OPTRE_UNSC_Rucksack {
		displayName = "[10th] AN/PRC-521 - Test Mod Non-functional";
		descriptionShort = "AN/PRC-521<br>UNSC Long Range Radio<br>25km Effective Range";
		picture = "\OPTRE_weapons\backpacks\icons\icon_b_anprc521_ca.paa";
		faction = "Tenthed_UnitFact_Main";
		editorCategory = "Tenthed_EditorCategory_Items";
		editorSubcategory = "Tenthed_EditorSubcategory_Objects_Backpacks";
		hiddenSelections[] = {
			"camo",
			"camo2",
			"B_Medic",
			"B_Addons"
		};
		hiddenSelectionsTextures[] = {
			"optre_unsc_units\army\data\soft_backpack_co.paa",
			"Tenthed_Backpacks\data\10thcompack.paa"
		};
	};
}
class cfgWeapons
{

};