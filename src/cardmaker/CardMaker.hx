package cardmaker;

import vtes.*;
import feathers.layout.HorizontalLayout;
import feathers.controls.Panel;
import feathers.controls.LayoutGroup;

class CardMaker extends LayoutGroup
{
    
    private var _previewPanel:PreviewPanel;
    private var _editPanel:EditPanel;
    private var _card:Card;
    

    public function new( card:Card )
    {
        super();
        
		var l = new HorizontalLayout();
		l.gap = 30;	
		layout = l;
        
        _card = new Card( CardCategory.CRYPT );
        _previewPanel = new PreviewPanel(_card);
        addChild( _previewPanel);
        _editPanel = new EditPanel(_card);
        _editPanel.addEventListener( CardMakerEvent.UPDATE, _editPanelUpdateHandler );
        addChild( _editPanel);
    }

    private function _editPanelUpdateHandler( e:CardMakerEvent ) 
    {
        _previewPanel.update();
    }

}