package;


import openfl.events.Event;
import format.SVG;
import openfl.Assets;
import entities.Discipline;
import openfl.display.Sprite;


class DisciplineIcon extends Sprite {
    

    private var _svg:SVG;
    private var _desiredWidth:Int;
    private var _desiredHeight:Int;



    public function new( discipline:Discipline, ?width:Int = -1, ?height:Int = -1 )
    {
        super();
        if ( width > -1 )
            _desiredWidth = width ;

        if ( height > -1 )
            _desiredHeight = height;
        _svg = new SVG( Assets.getText( "icons/" + discipline.iconFileName));
        
        addEventListener( Event.ADDED_TO_STAGE, _addedToStageHandler );
        trace( _desiredHeight );
        trace( _desiredWidth );

    }

    private function _addedToStageHandler( e:Event) {
        _svg.render( graphics, 0,0, _desiredWidth, _desiredHeight );
    }
}