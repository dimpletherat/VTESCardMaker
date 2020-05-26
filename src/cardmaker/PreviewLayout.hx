package cardmaker;

import openfl.display.Shape;
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
    private var _CARD_WIDTH(default,never):Int =  748;
    private var _CARD_HEIGHT(default,never):Int =  1038;


    private var _background:Shape;
    private var _cardBackground:Bitmap;
    private var _illustration:Bitmap;
    private var _illustrationContainer:Sprite;
/*
    public var illustration(default, set):BitmapData;
    function set_illustration(value:BitmapData){
        illustration = value;
        illustrationScale = 1.0;
        illustrationPosition = new Point( _CARD_WIDTH * 0.5, _CARD_HEIGHT * 0.5);
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
    }*/
    
    public function new ()
    {
        super();

        _background = new Shape();
        _background.graphics.beginFill( 0xDBDBDB );
        _background.graphics.drawRoundRect( 0,0,_CARD_WIDTH, _CARD_HEIGHT, 56,56);
        _background.graphics.endFill();
        addChild( _background );

        _illustrationContainer = new Sprite();
        addChild( _illustrationContainer);
        _illustration = new Bitmap();
		_illustrationContainer.addChild(_illustration);

        _cardBackground = new Bitmap();
		addChild(_cardBackground);
    }   

    public function update( card:Card ):Void
    {
        trace( _illustration.bitmapData );

        trace( card );
        trace( card.illustration );
        
        if ( _illustration.bitmapData != card.illustration )
        {
            _illustration.bitmapData = card.illustration;
            _illustration.x = -_illustration.width/2;
            _illustration.y = -_illustration.height/2;

            card.illustrationScale = 1.0;
            card.illustrationPosition = new Point(_CARD_WIDTH * 0.5, _CARD_HEIGHT * 0.5);
            _illustrationContainer.x = card.illustrationPosition.x;
            _illustrationContainer.y = card.illustrationPosition.y;
        }
        trace( card.illustration );
        _illustrationContainer.scaleX = _illustrationContainer.scaleY = card.illustrationScale;

        if ( _cardBackground.bitmapData != null ) _cardBackground.bitmapData.dispose();
        _cardBackground.bitmapData = Assets.getBitmapData("images/" + card.clan.backgroundFileName );
    } 
    public function startDragIllustration():Void
    {
        if ( _illustration.bitmapData != null )
        {
            _illustrationContainer.startDrag();
        }
    }
    public function stopDragIllustration():Void
    {
        _illustrationContainer.stopDrag();
    }

    private function _updateBackground() 
    {
        trace( "_updateBackground");
    }
}