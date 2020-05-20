package;

import feathers.controls.Label;
import feathers.layout.VerticalLayout;
import feathers.layout.VerticalAlign;
import feathers.layout.HorizontalLayout;
import feathers.controls.Application;
import feathers.controls.LayoutGroup;
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

class Main extends Application
{
	private var _card:Card;
	private var _cbClan:ComboBox;
	private var _txtCardName:TextInput;
	private var _txtCardCapacity:TextInput;
	private var _listDisciplineAvailable:ListView;
	private var _acDisciplineAvailable:ArrayCollection<Discipline>;
	private var _listDisciplineSelected:ListView;
	private var _acDisciplineSelected:ArrayCollection<Discipline>;


	public function new()
	{
		super();
		var l = new HorizontalLayout();
		l.gap = 30;
		l.paddingLeft = 20;
		l.paddingTop = 20;
		l.paddingRight = 20;
		l.paddingBottom = 20;		
		layout = l;

		addEventListener( Event.ADDED_TO_STAGE, _addedToStageHandler);
	}


	private function _addedToStageHandler( e:Event ):Void
	{
		var tf:TextFormat = new TextFormat( "_sans", 16, 0x000000, false );
		var tfBold:TextFormat = new TextFormat( "_sans", 16, 0x000000, true );


		_card = new Card();
		_card.clan = new Clan( ClanName.BRUJAH);
		addChild( _card);

		var editCardLayoutGroup:LayoutGroup = new LayoutGroup();
		var vl:VerticalLayout = new VerticalLayout();		
		vl.gap = 20;
		var hl:HorizontalLayout = new HorizontalLayout();
		hl.verticalAlign = VerticalAlign.MIDDLE;
		hl.gap = 12;


		editCardLayoutGroup.layout = vl;
		addChild( editCardLayoutGroup);



		//clan
		var lg1:LayoutGroup = new LayoutGroup();
		lg1.layout = hl;
		var lbl1:Label = new Label();
		lbl1.textFormat = tfBold;
		lbl1.text = "Clan";
		lg1.addChild( lbl1);
		
        _cbClan = new  ComboBox();    
		/*
		_cbClan.textInputFactory = function():TextInput
		{
			var bt:TextInput = new TextInput();
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
        };*/

        var dataprovider:ArrayCollection<Clan> = new ArrayCollection<Clan>();
		dataprovider.add( new Clan(ClanName.BRUJAH));
		dataprovider.add( new Clan(ClanName.GANGREL));
		dataprovider.add( new Clan(ClanName.MALKAVIAN));
		dataprovider.add( new Clan(ClanName.NOSFERATU));
		dataprovider.add( new Clan(ClanName.TREMERE));
		dataprovider.add( new Clan(ClanName.TOREADOR));
		dataprovider.add( new Clan(ClanName.VENTRUE));
        _cbClan.dataProvider = dataprovider;    
        _cbClan.itemToText = function(item:Dynamic):String{
            return item.label;
        }
		_cbClan.addEventListener( Event.CHANGE, _cbClanChangeHandler );

        lg1.addChild( _cbClan );
		editCardLayoutGroup.addChild( lg1);


		//card name
		var lg2:LayoutGroup = new LayoutGroup();
		lg2.layout = hl;
		var lbl2:Label = new Label();
		lbl2.textFormat = tfBold;
		lbl2.text = "Name";
		lg2.addChild( lbl2);

        _txtCardName = new TextInput();
		//_txtCardName.embedFonts = true;
		_txtCardName.textFormat = tf;
		_txtCardName.width = 200;
		//_txtCardName.height = 30;
        //_txtCardName.x = 400;
        //_txtCardName.y = 20;
		_txtCardName.addEventListener( Event.CHANGE, _txtChangeHandler);
        lg2.addChild( _txtCardName );
		editCardLayoutGroup.addChild( lg2);


		//capacity
		var lg3:LayoutGroup = new LayoutGroup();
		lg3.layout = hl;
		var lbl3:Label = new Label();
		lbl3.textFormat = tfBold;
		lbl3.text = "Capacity";
		lg3.addChild( lbl3);

        _txtCardCapacity = new TextInput();
		//_txtCardName.embedFonts = true;
		_txtCardCapacity.textFormat = tf;
		_txtCardCapacity.restrict = "0-9";
		_txtCardCapacity.width = 400;
		_txtCardCapacity.addEventListener( Event.CHANGE, _txtChangeHandler);
        lg3.addChild( _txtCardCapacity );
		editCardLayoutGroup.addChild( lg3);



		//disciplines
		var lbl4:Label = new Label();
		lbl4.textFormat = tfBold;
		lbl4.text = "Disciplines";
		editCardLayoutGroup.addChild( lbl4);



		var lg4:LayoutGroup = new LayoutGroup();
		lg4.layout = hl;		

		var itemRendererRecycler = DisplayObjectRecycler.withClass( DisciplineListItemRendererRecycler, DisciplineListItemRendererRecycler.updateItem, DisciplineListItemRendererRecycler.resetItem );


// TODO: USE SCROLLCONTAINERS
		_listDisciplineAvailable = new ListView();
		_listDisciplineAvailable.height = 200;
		_listDisciplineAvailable.itemRendererRecycler = itemRendererRecycler;
		_acDisciplineAvailable = new ArrayCollection<Discipline>();
		_acDisciplineAvailable.add( new Discipline(DisciplineName.ANIMALISM));
		_acDisciplineAvailable.add( new Discipline(DisciplineName.ANIMALISM_SUP));
		_acDisciplineAvailable.add( new Discipline(DisciplineName.AUSPEX));
		_acDisciplineAvailable.add( new Discipline(DisciplineName.AUSPEX_SUP));
		_acDisciplineAvailable.add( new Discipline(DisciplineName.CELERITY));
		_acDisciplineAvailable.add( new Discipline(DisciplineName.CELERITY_SUP));
		_acDisciplineAvailable.add( new Discipline(DisciplineName.DOMINATE));
		_acDisciplineAvailable.add( new Discipline(DisciplineName.DOMINATE_SUP));
		_acDisciplineAvailable.add( new Discipline(DisciplineName.FORTITUDE));
		_acDisciplineAvailable.add( new Discipline(DisciplineName.FORTITUDE_SUP));
		_acDisciplineAvailable.add( new Discipline(DisciplineName.OBFUSCATE));
		_acDisciplineAvailable.add( new Discipline(DisciplineName.OBFUSCATE_SUP));
		_acDisciplineAvailable.add( new Discipline(DisciplineName.POTENCE));
		_acDisciplineAvailable.add( new Discipline(DisciplineName.POTENCE_SUP));
		_acDisciplineAvailable.add( new Discipline(DisciplineName.PRESENCE));
		_acDisciplineAvailable.add( new Discipline(DisciplineName.PRESENCE_SUP));
		_acDisciplineAvailable.add( new Discipline(DisciplineName.PROTEAN));
		_acDisciplineAvailable.add( new Discipline(DisciplineName.PROTEAN_SUP));
		_acDisciplineAvailable.add( new Discipline(DisciplineName.THAUMATURGY));
		_acDisciplineAvailable.add( new Discipline(DisciplineName.THAUMATURGY_SUP));
		_listDisciplineAvailable.dataProvider = _acDisciplineAvailable;
		_listDisciplineAvailable.addEventListener( Event.CHANGE, _listChangeHandler);



		lg4.addChild( _listDisciplineAvailable);

		_listDisciplineSelected = new ListView();
		_listDisciplineSelected.height = 200;
		_listDisciplineSelected.itemRendererRecycler = itemRendererRecycler;
		_acDisciplineSelected = new ArrayCollection<Discipline>();
		_listDisciplineSelected.dataProvider = _acDisciplineSelected;
		_listDisciplineSelected.addEventListener( Event.CHANGE, _listChangeHandler);

        lg4.addChild( _listDisciplineSelected );
		editCardLayoutGroup.addChild( lg4);








	}
	
	function _txtChangeHandler(e:Event):Void 
	{
		if ( e.target == _txtCardCapacity )
		{		
			var t = cast(e.target, TextInput);
			trace( "change", t.text);	
			if (t.text.length > 2)
				t.text = t.text.substr( 0,2);
				t.invalidate();
				t.update();
		}
		_card.crypteName = _txtCardName.text;
		_card.crypteCapacity = _txtCardCapacity.text;
	}
	
	function _cbClanChangeHandler(e:Event):Void 
	{
		_card.clan = _cbClan.selectedItem;
	}
	
	function _listChangeHandler(e:Event):Void 
	{


		trace( cast(e.target, ListView).selectedIndex);
		trace( _listDisciplineAvailable.selectedIndex);
		
		var d:Discipline = null;
		var ac:ArrayCollection<Discipline> = null;
		if ( e.target == _listDisciplineAvailable )
		{
			d = _listDisciplineAvailable.dataProvider.get(_listDisciplineAvailable.selectedIndex);
		trace( d);
			_acDisciplineAvailable.remove( d );
			_acDisciplineSelected.add(d);
			_listDisciplineAvailable.dataProvider = _acDisciplineAvailable;
			_listDisciplineSelected.dataProvider = _acDisciplineSelected;
		}/*
		if ( e.target == _listDisciplineSelected )
		{
			d = _listDisciplineSelected.dataProvider.get(_listDisciplineSelected.selectedIndex);
			_listDisciplineSelected.dataProvider.remove( d );
			_listDisciplineAvailable.dataProvider.add( d );
		}*/
	}
}
