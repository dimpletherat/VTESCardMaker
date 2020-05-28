package cardmaker;


import vtes.*;
import openfl.events.MouseEvent;
import feathers.layout.HorizontalAlign;
import feathers.layout.VerticalLayout;
import feathers.layout.VerticalAlign;
import feathers.controls.Panel;
import feathers.controls.LayoutGroup;
import feathers.controls.Label;
import feathers.data.ArrayCollection;
import openfl.text.TextField;
import openfl.text.TextFormat;
import openfl.text.TextFormatAlign;
import openfl.text.TextFieldAutoSize;
import openfl.text.AntiAliasType;
import openfl.utils.Assets;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.Sprite;

class PreviewPanel extends Sprite
{

    private var _layout:PreviewLayout;
    private var _card:Card;
    
    public function new( card:Card )
    {
        super();
        _card = card;
        switch (_card.category)
        {
            case CardCategory.CRYPT:
                _layout = new PreviewCyptLayout();
            case LIBRARY:
                _layout = new PreviewLibraryLayout();
        }
        addChild( _layout);




        addEventListener( MouseEvent.MOUSE_DOWN, _mouseDownHandler);
        scaleX = scaleY = 0.5;
    }

    


    private  function _mouseDownHandler( e:MouseEvent) 
    {
        stage.addEventListener( MouseEvent.MOUSE_UP, _stageMouseUpHandler );
        _layout.startDragIllustration();
    }

    private  function _stageMouseUpHandler( e:MouseEvent) 
    {
        _layout.stopDragIllustration();
        stage.removeEventListener( MouseEvent.MOUSE_UP, _stageMouseUpHandler );
    }



    public function update( /*data:Any*/ ) 
    {
        _layout.update( _card );
    }
}