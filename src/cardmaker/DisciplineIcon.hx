package cardmaker;


import openfl.events.Event;
import format.SVG;
import openfl.Assets;
import vtes.Discipline;
import openfl.display.Sprite;


class DisciplineIcon extends Sprite {
    

    private var _svg:SVG;
    private var _desiredWidth:Int;
    private var _desiredHeight:Int;



    public function new( ?discipline:Discipline = null, ?width:Int = -1, ?height:Int = -1 )
    {
        super();
         _desiredWidth = width ;
         _desiredHeight = height;

        if ( discipline != null )
        {
            addEventListener( Event.ADDED_TO_STAGE, _addedToStageHandler );
            display( discipline, _desiredWidth, _desiredHeight);
        }
    }

    private function _addedToStageHandler( e:Event)
    {
    }

    public function display(discipline:Discipline = null, ?width:Int = -1, ?height:Int = -1 )
    {
        graphics.clear();
        
        if ( discipline == null )
        {
            return;
        }
        _desiredWidth = width ;
        _desiredHeight = height;
        
        _svg = new SVG( Assets.getText( "icons/" + discipline.iconFileName));
        _svg.render( graphics, 0,0, _desiredWidth, _desiredHeight );
    }
}