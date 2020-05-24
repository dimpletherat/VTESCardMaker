package cardmaker;

import feathers.layout.HorizontalAlign;
import entities.Discipline;
import feathers.controls.Button;


class DisciplineButton extends Button 
{
    public var discipline(default,set):Discipline;
    public function set_discipline(value:Discipline)
    {
        discipline = value;
        _display();
        return discipline;
    }

    private var _displayLabel:Bool;
    private var _desiredWidth:Int;
    private var _desiredHeight:Int;




    public function new( ?discipline:Discipline = null, ?width:Int = -1, ?height:Int =-1, ?displayLabel:Bool = true)
    {
        super();
        horizontalAlign = HorizontalAlign.LEFT;
        _desiredWidth = width;
        _desiredHeight = height;
        _displayLabel = displayLabel;
        if ( discipline != null )
            this.discipline = discipline;
    }    

    private function _display():Void
    {
        icon = new DisciplineIcon( discipline, 26, 26);
        if ( _displayLabel)
        {
            horizontalAlign = HorizontalAlign.LEFT;
            text = discipline.label;
        }else{
            horizontalAlign = HorizontalAlign.CENTER;
        }
        if ( _desiredWidth > -1) width = _desiredWidth;
        if ( _desiredHeight > -1) height = _desiredHeight;
    }
}