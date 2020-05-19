package;

import openfl.display.Sprite;
import openfl.display.DisplayObjectContainer;
import motion.easing.IEasing;
import openfl.display.DisplayObject;
import feathers.controls.dataRenderers.ItemRenderer;
import entities.Discipline;
import feathers.layout.HorizontalLayout;
import feathers.data.ListViewItemState;
import feathers.utils.DisplayObjectRecycler;
import feathers.controls.Label;
import feathers.controls.LayoutGroup;

class DisciplineListItemRenderer extends Sprite
{
    public var _icon:DisciplineIcon;
    public var _label:Label;


    public function new ()
    {
        super();


        //var lg:LayoutGroup = new LayoutGroup();
        _icon = new DisciplineIcon();
        _label = new Label();
        _label.x = 30;
/*
        var hl:HorizontalLayout = new HorizontalLayout();
        lg.layout = hl;
        lg.addChild( _icon );
        lg.addChild( _label );
        addChild( lg );*/
        addChild( _icon);
        addChild( _label);
        trace("create", this, width);
    }    
    




    public static function update(item:DisciplineListItemRenderer, state:ListViewItemState):Void
    {
        var d:Discipline = cast( state.data, Discipline );
        trace("update", d.label, item.width);
        item._icon.display( d, 30,30);
        item._label.text = d.label;

        trace("update", d.label, item.width);
    };

    public static function reset (item:DisciplineListItemRenderer, state:ListViewItemState):Void
    {
        var d:Discipline = cast( state.data, Discipline );
        item._icon.display(null);
        item._label.text = "";

        trace("reset", d.label, item.width);
    }

    public static function destroy(item:DisciplineListItemRenderer):Void 
    {
        item.removeChild( item._icon);
        item.removeChild( item._label);
    }


}