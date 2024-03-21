modded class ModItemRegisterCallbacks
{
	override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
	{
        super.RegisterOneHanded(pType, pBehavior);
        	pType.AddItemInHandsProfileIK("seis_warhammer",
		"dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi",
 		pBehavior,
		"dz/anims/anm/player/ik/gear/flanged_mace.anm");

	}
};