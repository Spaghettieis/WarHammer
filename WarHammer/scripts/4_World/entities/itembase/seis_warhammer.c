class seis_warhammer extends Inventory_Base
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionClapBearTrapWithThisItem);
		AddAction(ActionDismantlePart);
		AddAction(ActionBuildPart);
		AddAction(ActionRepairPart);
		AddAction(ActionMineRock1H);
	}
}