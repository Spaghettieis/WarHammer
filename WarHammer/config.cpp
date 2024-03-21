class CfgPatches
{
	class seis_warhammer
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Melee"
		};
	};
};

class CfgMods
{
	class seis_warhammer
	{
		dir = "WarHammer";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "Medieval war hammer";
		credits = "DaBenshi, Tweaks, Any1Kenobi";
		author = "Spaghettieis";
		authorID = "";
		version = "1.0";
		extra = 0;
		type = "mod";
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"WarHammer/scripts/4_World"};
			};
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Mace;
	class seis_warhammer: Mace
	{
		scope=2;
		displayName="Medieval warhammer";
		descriptionShort="Replica of a war hammer with a long, sturdy handle, and a steel head. The spike is useful against plate amor. And skulls. ";
		model="WarHammer\data\seis_warhammer.p3d";
		debug_ItemCategory=2;
		build_action_type=10;
		dismantle_action_type=74;
		repairableWithKits[]={4};
		repairCosts[]={25};
		rotationFlags=17;
		weight=1300;
		itemSize[]={2,4};
		fragility=0.0099999998;
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		itemInfo[]=
		{
			"Axe"
		};
		openItemSpillRange[]={60,80};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"WarHammer\data\seis_warhammer.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"WarHammer\data\seis_warhammer.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"WarHammer\data\seis_warhammer_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"WarHammer\data\seis_warhammer_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"WarHammer\data\seis_warhammer_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeSharpLight_4";
				range=1.4;
			};
			class Heavy
			{
				ammo="MeleeSharpHeavy_4";
				range=1.4;
			};
			class Sprint
			{
				ammo="MeleeSharpHeavy_4";
				range=3.3;
			};
		};
		isMeleeWeapon=1;
		suicideAnim="woodaxe";
		soundImpactType="metal";
	};
};
