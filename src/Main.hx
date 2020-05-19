package;

import feathers.data.ListViewItemState;
import feathers.controls.dataRenderers.ItemRenderer;
import feathers.utils.DisplayObjectRecycler;
import format.SVG;
import feathers.layout.RelativePosition;
import feathers.controls.TextCallout;
import feathers.controls.Callout;
import feathers.controls.TextInput;
import openfl.text.TextField;
import openfl.text.TextFormat;
import openfl.text.TextFieldAutoSize;
import openfl.text.TextFieldType;
import openfl.text.AntiAliasType;
import feathers.controls.Button;
import openfl.text.Font;
import openfl.display.Bitmap;
import openfl.utils.Assets;
import openfl.events.Event;
import openfl.display.Sprite;
import feathers.controls.ComboBox;
import feathers.controls.ListView;
import feathers.layout.VerticalListLayout;
import feathers.data.ArrayCollection;
import entities.*;

class Main extends Sprite
{
	private var _card:Card;
	private var _cbClan:ComboBox;
	private var _txtCardName:TextInput;
	private var _txtCardCapacity:TextField;


	public function new()
	{
		super();
		addEventListener( Event.ADDED_TO_STAGE, _addedToStageHandler);
	}


	private function _addedToStageHandler( e:Event ):Void
	{
		var tf:TextFormat = new TextFormat( "_sans", 16, 0xff0000 );


		_card = new Card();
		_card.clan = new Clan( ClanName.BRUJAH);
		addChild( _card);



        _txtCardName = new TextInput();
		_txtCardName.embedFonts = true;
		_txtCardName.textFormat = tf;
		_txtCardName.width = 200;
		_txtCardName.height = 30;
        _txtCardName.x = 400;
        _txtCardName.y = 20;
		_txtCardName.addEventListener( Event.CHANGE, _txtCardNameChangeHandler);
        addChild( _txtCardName );

        _txtCardCapacity = new TextField();
		_txtCardCapacity.defaultTextFormat = tf;
		_txtCardCapacity.type = TextFieldType.INPUT;
		_txtCardCapacity.restrict = "0-9";
		_txtCardCapacity.maxChars = 2;
		_txtCardCapacity.border = true;
		_txtCardCapacity.width = 200;
		_txtCardCapacity.height = 30;
        _txtCardCapacity.x = 400;
        _txtCardCapacity.y = 50;
		_txtCardCapacity.addEventListener( Event.CHANGE, _txtCardNameChangeHandler);
        addChild( _txtCardCapacity );
		

        _cbClan = new  ComboBox();        
        _cbClan.itemToText = function(item:Dynamic):String{
            return item.label;
        }
        _cbClan.x = 400;
        _cbClan.y = 80;
		_cbClan.textInputFactory = function():TextInput
		{
			var bt:TextInput = new TextInput();
			bt.embedFonts = true;
			bt.textFormat = tf;
			return bt;
		}
		_cbClan.buttonFactory = function():Button
		{
			var bt:Button = new Button();
			bt.embedFonts = true;
			bt.textFormat = tf;
			return bt;
		}
        _cbClan.listViewFactory = () ->
        {
            var lv:ListView = new ListView();
            lv.virtualLayout = true;
            var layout:VerticalListLayout = new VerticalListLayout();
			
            lv.layout = layout;
            return lv;
        };




        addChild(_cbClan);

        var dataprovider:ArrayCollection<Clan> = new ArrayCollection<Clan>();
		dataprovider.add( new Clan(ClanName.BRUJAH));
		dataprovider.add( new Clan(ClanName.GANGREL));
		dataprovider.add( new Clan(ClanName.MALKAVIAN));
		dataprovider.add( new Clan(ClanName.NOSFERATU));
		dataprovider.add( new Clan(ClanName.TREMERE));
		dataprovider.add( new Clan(ClanName.TOREADOR));
		dataprovider.add( new Clan(ClanName.VENTRUE));
		



        _cbClan.dataProvider = dataprovider;

		_cbClan.addEventListener( Event.CHANGE, comboBox_changeHandler);


		var lv:ListView = new ListView();
		//ItemRenderer


		var toto = function (item:DisciplineListItemRenderer, state:ListViewItemState):Void
    	{
        	trace("update" , item);
			 if ( item._icon != null )
			{
				item.removeChild( item._icon );            
				item._icon = null;
			}
			var disc:Discipline = cast( state.data, Discipline );
			item._icon = new DisciplineIcon( disc, 30,30);
			item.addChild( item._icon);
			//item.addChild( _icon );
			//item._label.text = disc.label;
    	}

		//lv.itemRendererRecycler = DisplayObjectRecycler.withClass( DisciplineListItemRenderer,toto);


		var itemRecycler = DisplayObjectRecycler.withClass( DisciplineListItemRenderer, DisciplineListItemRenderer.update, DisciplineListItemRenderer.reset, DisciplineListItemRenderer.destroy );
		lv.itemRendererRecycler = itemRecycler;




		lv.itemToText = function( data:Dynamic ):String{
			return data.label;
		}

        lv.x = 400;
        lv.y = 120;
		var dataDisc:ArrayCollection<Discipline> = new ArrayCollection<Discipline>();
		dataDisc.add( new Discipline(DisciplineName.PROTEAN));
		dataDisc.add( new Discipline(DisciplineName.PROTEAN_SUP));
		dataDisc.add( new Discipline(DisciplineName.THAUMATURGY));
		dataDisc.add( new Discipline(DisciplineName.THAUMATURGY_SUP));
		dataDisc.add( new Discipline(DisciplineName.FORTITUDE));
		dataDisc.add( new Discipline(DisciplineName.FORTITUDE_SUP));
		dataDisc.add( new Discipline(DisciplineName.AUSPEX));
		dataDisc.add( new Discipline(DisciplineName.AUSPEX_SUP));
		dataDisc.add( new Discipline(DisciplineName.OBFUSCATE));
		dataDisc.add( new Discipline(DisciplineName.OBFUSCATE_SUP));
		dataDisc.add( new Discipline(DisciplineName.CELERITY));
		dataDisc.add( new Discipline(DisciplineName.CELERITY_SUP));
		dataDisc.add( new Discipline(DisciplineName.POTENCE));
		dataDisc.add( new Discipline(DisciplineName.POTENCE_SUP));
		dataDisc.add( new Discipline(DisciplineName.DOMINATE));
		dataDisc.add( new Discipline(DisciplineName.DOMINATE_SUP));
		dataDisc.add( new Discipline(DisciplineName.PRESENCE));
		dataDisc.add( new Discipline(DisciplineName.PRESENCE_SUP));
		dataDisc.add( new Discipline(DisciplineName.ANIMALISM));
		dataDisc.add( new Discipline(DisciplineName.ANIMALISM_SUP));
		lv.dataProvider = dataDisc;
		addChild( lv );




		var d = addChild( new DisciplineIcon(new Discipline(DisciplineName.PROTEAN_SUP), 200,200));
	d.x = 200;
	d.y = 200;

	}
	
	function _txtCardNameChangeHandler(e:Event):Void {
		trace( "change");
		_card.crypteName = _txtCardName.text;
		_card.crypteCapacity = _txtCardCapacity.text;
	}
	
	function comboBox_changeHandler(event:Event):Void {
		_card.clan = _cbClan.selectedItem;
		TextCallout.show( "dsjkqhdf losdq flkqh", _cbClan, RelativePosition.TOP, false);
	}
}
