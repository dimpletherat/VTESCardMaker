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

        trace("create", this);
        _icon = null;
        _label = new Label();

       /* var lg:LayoutGroup = new LayoutGroup();
        var hl:HorizontalLayout = new HorizontalLayout();
        lg.layout = hl;
        lg.addChild( _label );
        addChild( lg );*/


        addChild( _label);
    }    
/*
    public function create():LayoutGroup
    {
        _icon = null;
        _label = new Label();

        var lg:LayoutGroup = new LayoutGroup();
        var hl:HorizontalLayout = new HorizontalLayout();
        lg.layout = hl;
        lg.addChild( _label );

        return lg;
    }
  */

    public function update (item:DisciplineListItemRenderer, state:ListViewItemState):Void
    {
        trace("update" , item);
        if ( _icon != null )
        {
            item.removeChild( _icon );            
            _icon = null;
        }
        var disc:Discipline = cast( state.data, Discipline );
        _icon = new DisciplineIcon( disc, 30,30);
        //item.addChild( _icon );
        _label.text = disc.label;
    }

      

    public function reset (item:DisciplineListItemRenderer, state:ListViewItemState):Void
    {
        trace("reset");
        if ( _icon != null )
        {
            item.removeChild( _icon );
            _icon = null;
        }
        //_label.text = "";
    }

      /*

    public function destroy(item:LayoutGroup):Void
    {

    }
*/
}