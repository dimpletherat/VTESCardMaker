package com.nbigot.vtescardmaker.cardmaker;

import com.nbigot.vtescardmaker.core.Fonts;
import com.nbigot.vtescardmaker.vtes.*;
import openfl.events.MouseEvent;
import feathers.layout.HorizontalAlign;
import feathers.layout.VerticalLayout;
import feathers.layout.VerticalAlign;
import feathers.controls.LayoutGroup;
import feathers.controls.Label;
import feathers.data.ArrayCollection;
import openfl.text.TextField;
import openfl.text.TextFormat;
import openfl.text.TextFormatAlign;
import openfl.utils.Assets;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.Sprite;
import openfl.display.DisplayObjectContainer;

class PreviewCyptLayout extends PreviewLayout
{
    private var _txtName:Label;
    private var _txtCardText:TextField;
    private var _txtCapacity:Label;
    private var _disciplineContainer:LayoutGroup;
/*
    public var types:Array<ECardType>;
    public var cardName:String;
    public var clan:Clan;
    public var capacity:Int;
    public var poolCost:Int;
    public var bloodCost:Int;
    public var text:String;
    public var group:Int;
    public var extension:Extension;
    public var advanced:Bool;
    public var disciplines:Array<Discipline>;
    public var credits:String;
    public var copyright:String;
*/

    public var clan(default, set):Clan ;
    function set_clan(value:Clan){
        clan = value;
        _updateBackground();
        return clan;
    }

    public var crypteName(default, set):String = "";
    function set_crypteName(value:String){
        crypteName = value;
        _updateName();
        return crypteName;
    }

    public var crypteCapacity(default, set):String = "";
    function set_crypteCapacity(value:String){
        crypteCapacity = value;
        _updateCapacity();
        return crypteCapacity;
    }

    public var cardText(default, set):String = "";
    function set_cardText(value:String){
        cardText = value;
        _updateCardText();
        return cardText;
    }
/*
    public var disciplineList(default, set):ArrayCollection<Discipline> = new ArrayCollection<Discipline>();
    function set_disciplineList(value:ArrayCollection<Discipline>){
        disciplineList = value;
        _updateDisciplines();
        return disciplineList;
    }
    */

    
    public function new ()
    {
        trace('PreviewCryptLayout');
        super();
		/*var nameFormat = new TextFormat( Assets.getFont( "fonts/MatrixExtraBold.ttf").fontName, 48, 0xffffff );
        var cardTextFormat = new TextFormat( Assets.getFont( "fonts/GIL_____.TTF").fontName, 14 );
        var capacityFormat = new TextFormat( Assets.getFont( "fonts/Quorbl__.TTF").fontName, 47, 0xffffff, null, null, null, null, null, TextFormatAlign.CENTER );*/
		var nameFormat = new TextFormat( Fonts.MATRIX_B, 48, 0xffffff );
        var cardTextFormat = new TextFormat( Fonts.GILL_SANS, 14 );
        var capacityFormat = new TextFormat( Fonts.QUORUM, 47, 0xffffff, null, null, null, null, null, TextFormatAlign.CENTER );


        _txtName = new Label();
		_txtName.embedFonts = true;
		_txtName.textFormat = nameFormat;
		_txtName.width = 600;
		_txtName.height = 80;
		_txtName.x= 44;
        _txtName.y = 44;
		_txtName.selectable = false;
        addChild( _txtName );

        _txtCapacity = new Label();
		_txtCapacity.embedFonts = true;
		_txtCapacity.textFormat = capacityFormat;
		_txtCapacity.width = 80 ;
		_txtCapacity.height = 60;
		_txtCapacity.x= 630;
        _txtCapacity.y = 915;
		_txtCapacity.selectable = false;
        addChild( _txtCapacity );
        
        

        _disciplineContainer = new LayoutGroup();
        var vl:VerticalLayout = new VerticalLayout();
        vl.gap = 11;
        //vl.paddingLeft = 40;
        vl.paddingBottom = 57;
        vl.verticalAlign = VerticalAlign.BOTTOM;
        vl.horizontalAlign = HorizontalAlign.CENTER;
        _disciplineContainer.layout = vl;
        _disciplineContainer.width = 155;
        _disciplineContainer.height = 1040;
        addChild( _disciplineContainer);


    }   

    override public function update( card:Card ):Void
    {
        super.update( card );

        _txtName.text = card.name;
        _txtCapacity.text = Std.string(card.capacity);
        _updateDisciplines( card.disciplines);
    } 




    private function _updateName() 
    {
        trace( "_updateName");
        _txtName.text = crypteName;
    }
    private function _updateCapacity() 
    {
        trace( "_updateCapacity");
        _txtCapacity.text = crypteCapacity;
    }
    private function _updateCardText() 
    {
        trace( "_updateCardText");
        _txtCardText.text = cardText;
    }
    private function _updateDisciplines(disciplineList:Array<Discipline>) 
    {
        trace( "_updateDisciplines");
        while( _disciplineContainer.numChildren > 0)
            _disciplineContainer.removeChildAt(0);
        var dSize:Int;
        for( d in disciplineList )
        {
            dSize = (d.level == SUPERIOR) ? 75 : 59;
            _disciplineContainer.addChild( new DisciplineIcon( d, dSize,dSize));
        }
    }
    /*
    public var types:Array<ECardType>;
    public var name:String;
    public var clan:Clan;
    public var capacity:Int;
    public var poolCost:Int;
    public var bloodCost:Int;
    public var text:String;
    public var group:Int;
    public var extension:Extension;
    public var advanced:Bool;
    public var disciplines:Array<Discipline>;
    public var credits:String;
    public var copyright:String;
*/
 
}