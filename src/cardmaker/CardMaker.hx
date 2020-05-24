package cardmaker;

import feathers.layout.HorizontalLayout;
import feathers.controls.Panel;
import feathers.controls.LayoutGroup;
import vtes.CardCategory;

class CardMaker extends LayoutGroup
{
    
    private var _previewPanel:PreviewPanel;
    private var _editPanel:EditPanel;
    

    public function new( cardCategory:CardCategory )
    {
        super();
        
		var l = new HorizontalLayout();
		l.gap = 30;	
		layout = l;

        _previewPanel = new PreviewPanel(cardCategory);
        addChild( _previewPanel);
        _editPanel = new EditPanel(cardCategory);
        _editPanel.addEventListener( CardMakerEvent.UPDATE, _editPanelUpdateHandler );
        addChild( _editPanel);
    }

    private function _editPanelUpdateHandler( e:CardMakerEvent ) 
    {
        
    }

}