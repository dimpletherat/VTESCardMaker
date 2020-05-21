package;

import feathers.layout.HorizontalAlign;
import feathers.layout.VerticalLayout;
import feathers.layout.VerticalAlign;
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
import openfl.display.Sprite;
import entities.Clan;
import entities.Discipline;

class Card extends Sprite 
{
	private var _nameFormat:TextFormat;
	private var _textFormat:TextFormat;
	private var _capacityFormat:TextFormat;
    private var _background:Bitmap;
    private var _txtName:Label;
    private var t:TextField;
    private var _txtCardText:TextField;
    private var _txtCapacity:Label;
    private var _disciplineContainer:LayoutGroup;


    public var clan(default, set):Clan ;
    function set_clan(value:Clan){
        clan = value;
        _update();
        return clan;
    }

    public var crypteName(default, set):String = "";
    function set_crypteName(value:String){
        crypteName = value;
        _update();
        return crypteName;
    }

    public var crypteCapacity(default, set):String = "";
    function set_crypteCapacity(value:String){
        crypteCapacity = value;
        _update();
        return crypteCapacity;
    }

    public var disciplineList(default, set):ArrayCollection<Discipline> = new ArrayCollection<Discipline>();
    function set_disciplineList(value:ArrayCollection<Discipline>){
        disciplineList = value;
        _update();
        return disciplineList;
    }

    public function new() {
        super();

		//_nameFormat = new TextFormat( Assets.getFont( "fonts/MatrixExtraBold.ttf").fontName, 24, 0xffffff );
		_nameFormat = new TextFormat( Assets.getFont( "fonts/MatrixExtraBold.ttf").fontName, 48, 0xffffff );
        _textFormat = new TextFormat( Assets.getFont( "fonts/GIL_____.TTF").fontName, 14 );
        //_capacityFormat = new TextFormat( Assets.getFont( "fonts/Quorbl__.TTF").fontName, 24, 0xffffff, null, null, null, null, null, TextFormatAlign.CENTER );
        _capacityFormat = new TextFormat( Assets.getFont( "fonts/Quorbl__.TTF").fontName, 47, 0xffffff, null, null, null, null, null, TextFormatAlign.CENTER );

        //this.crypteName = "";

        _background = new Bitmap();
        //_background.scaleX = _background.scaleY = 0.5;
		addChild(_background);
        

        _txtName = new Label();
		_txtName.embedFonts = true;
		_txtName.textFormat = _nameFormat;
		_txtName.width = 600;
		_txtName.height = 80;
		_txtName.x= 44;
        _txtName.y = 44;
		_txtName.selectable = false;
        addChild( _txtName );

        _txtCapacity = new Label();
		_txtCapacity.embedFonts = true;
		_txtCapacity.textFormat = _capacityFormat;
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



        scaleX = scaleY = 0.5;
    }


    private function _update() 
    {
        if ( _background.bitmapData != null ) _background.bitmapData.dispose();
        _background.bitmapData = Assets.getBitmapData("images/" + clan.backgroundFileName );
        _txtName.text = crypteName;
        _txtCapacity.text = crypteCapacity;

        for ( i in 0..._disciplineContainer.numChildren)
            _disciplineContainer.removeChildAt(0);
        var dSize:Int;
        for( d in disciplineList )
        {
            dSize = (d.isSuperior) ? 75 : 59;
            _disciplineContainer.addChild( new DisciplineIcon( d, dSize,dSize));
        }
    }
}