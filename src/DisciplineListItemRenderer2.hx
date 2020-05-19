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

class DisciplineListItemRenderer2<LayoutGroup, ListViewItemState, DisplayObject> extends DisplayObjectRecycler<Dynamic, feathers.data.ListViewItemState, openfl.display.DisplayObject>
{
/*
    public var _icon:DisciplineIcon;
    public var _label:Label;


    public function new ()
    {
        super();
    }    


      
    override public dynamic function create():LayoutGroup
    {
        trace("create");
        var lg:LayoutGroup = new LayoutGroup();

        _icon = new DisciplineIcon();
        _label = new Label();

        var hl:HorizontalLayout = new HorizontalLayout();
        lg.layout = hl;
        lg.addChild( _icon );
        lg.addChild( _label );

        return lg;
    }
    override public dynamic function update(target:LayoutGroup, state:feathers.data.ListViewItemState):Void
    {
        trace("update");
        var d:Discipline = cast( state.data, Discipline );
        _icon.display( d, 30,30);
        _label.text = d.label;

    };

    override public function reset (item:LayoutGroup, state:feathers.data.ListViewItemState):Void
    {
        trace("reset");
        _icon.display(null);
        _label.text = "";
    }
    override public dynamic function destroy(target:LayoutGroup):Void {}*/
}