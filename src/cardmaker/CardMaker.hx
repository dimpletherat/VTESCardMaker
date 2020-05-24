package cardmaker;

import feathers.layout.HorizontalLayout;
import feathers.controls.Panel;
import feathers.controls.LayoutGroup;
import vtes.CardCategory;

class CardMaker extends LayoutGroup
{
    
    private var _cardViewPanel:PreviewPanel;
    private var _cardEditPanel:EditPanel;
    

    public function new( cardCategory:CardCategory )
    {
        super();
        
		var l = new HorizontalLayout();
		l.gap = 30;	
		layout = l;

        addChild( new PreviewPanel(cardCategory));
        addChild( new EditPanel(cardCategory));
    }


}