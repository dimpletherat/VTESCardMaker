package com.nbigot.vtescardmaker.cardmaker;

import haxe.ui.components.Button;
import com.nbigot.vtescardmaker.vtes.*;
import feathers.layout.HorizontalLayout;
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
        
        // TMP
        _card = new Card( ECardCategory.CRYPT );

        // REAL
        //_card = card;

        _previewPanel = new PreviewPanel(_card);
        addChild( _previewPanel);
        _editPanel = new EditPanel(_card);
        _editPanel.addEventListener( CardMakerEvent.UPDATE, _editPanelUpdateHandler );
        addChild( _editPanel);

        var b=new Button();
        b.onClick = function (e) {
            trace(e);
        };
        b.width = 100;
        b.text = "HaxeUI button";
        addChild(b);
    }

    private function _editPanelUpdateHandler( e:CardMakerEvent ) 
    {
        _previewPanel.update();
    }

}