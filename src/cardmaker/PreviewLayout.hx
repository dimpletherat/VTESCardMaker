package cardmaker;

import openfl.geom.Point;
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
import openfl.display.DisplayObjectContainer;

class PreviewLayout extends DisplayObjectContainer
{	
    private var _background:Bitmap;
    private var _illustration:Bitmap;
    private var _illustrationContainer:Sprite;

    public var illustration(default, set):BitmapData;
    function set_illustration(value:BitmapData){
        illustration = value;
        illustrationScale = 1.0;
        illustrationPosition = new Point( width * 0.5, height * 0.5);
        _updateIllustration();
        return illustration;
    }

    public var illustrationScale(default, set):Float;
    function set_illustrationScale(value:Float){
        illustrationScale = value;
        _illustrationContainer.scaleX = _illustrationContainer.scaleY = illustrationScale;
        return illustrationScale;
    }

    public var illustrationPosition(default, set):Point;
    function set_illustrationPosition(value:Point){
        illustrationPosition = value;
        _illustrationContainer.x = illustrationPosition.x;
        _illustrationContainer.y = illustrationPosition.y;
        return illustrationPosition;
    }
    
    public function new ()
    {
        super();

        _illustrationContainer = new Sprite();
        addChild( _illustrationContainer);
        _illustration = new Bitmap();
		_illustrationContainer.addChild(_illustration);

        _background = new Bitmap();
		addChild(_background);
    }   

    public function update( card:Card ):Void
    {
        if ( illustration != card.illustration )
        {
            illustration = card.illustration;
            illustrationScale = card.illustrationScale;
            illustrationPosition = card.illustrationPosition;
        }
        //TODO
    } 
    public function startDragIllustration():Void
    {
        _illustrationContainer.startDrag();
    }
    public function stopDragIllustration():Void
    {
        _illustrationContainer.stopDrag();
    }

    private function _updateBackground() 
    {
        trace( "_updateBackground");
        ////if ( _background.bitmapData != null ) _background.bitmapData.dispose();
        //_background.bitmapData = Assets.getBitmapData("images/" + clan.backgroundFileName );
    }
    private function _updateIllustration() 
    {
        trace( "_updateIllustration");
        if ( illustration != null )
        {
            _illustration.bitmapData = illustration;
            _illustration.x = -illustration.width/2;
            _illustration.y = -illustration.height/2;
        }
    }

}