package com.nbigot.vtescardmaker.cardmaker;

import openfl.display.Sprite;
import openfl.display.DisplayObjectContainer;
import motion.easing.IEasing;
import openfl.display.DisplayObject;
import feathers.controls.dataRenderers.ItemRenderer;
import com.nbigot.vtescardmaker.vtes.Discipline;
import feathers.layout.HorizontalLayout;
import feathers.data.ListViewItemState;
import feathers.utils.DisplayObjectRecycler;
import feathers.controls.Label;
import feathers.controls.LayoutGroup;

class DisciplineListItemRendererRecycler extends ItemRenderer
{
    public var _icon:DisciplineIcon;

    public function new ()
    {
        super();
        _icon = new DisciplineIcon();
        icon = _icon;
    }    
    




    public static function updateItem(item:ItemRenderer, state:ListViewItemState):Void
    {
       var d:Discipline = cast( state.data, Discipline );
        /* trace("update", d.label, item.width);
        item._icon.display( d, 30,30);*/
        var iconSize:Int = 24;
        cast(item.icon, DisciplineIcon).display( d,iconSize,iconSize);
        item.text = d.label;

        //trace("update", d.label, item.width);
    };

    public static function resetItem (item:ItemRenderer, state:ListViewItemState):Void
    {
        /*var d:Discipline = cast( state.data, Discipline );
        item._icon.display(null);*/
        item.text = "";

        //trace("reset", d.label, item.width);
    }
/*
    public static function destroy(item:DisciplineListItemRenderer):Void 
    {
        item.removeChild( item._icon);
        item.removeChild( item._label);
    }*/
}