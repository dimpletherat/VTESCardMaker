package;

import openfl.net.FileFilter;
import openfl.net.FileReference;
import openfl.display.Loader;
import feathers.events.TriggerEvent;
import openfl.events.TextEvent;
import feathers.controls.ScrollContainer;
import feathers.controls.Label;
import feathers.layout.VerticalLayout;
import feathers.layout.VerticalAlign;
import feathers.layout.HorizontalLayout;
import feathers.layout.HorizontalAlign;
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
import openfl.display.BitmapData;
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
	//private var _listDisciplineAvailable:ListView;
	private var _scAvailableDisciplineList:ScrollContainer;
	private var _availableDisciplineList:ArrayCollection<Discipline>;
	//private var _listDisciplineSelected:ListView;
	private var _scSelectedDisciplineList:ScrollContainer;
	private var _selectedDisciplineList:ArrayCollection<Discipline>;
	private var _mainFontName:String;
	private var _mainTextFormat:TextFormat;
	private var _mainTextFormatBold:TextFormat;


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

		_mainFontName = "_sans";
		_mainTextFormat = new TextFormat( _mainFontName, 16, 0x000000, false );
		_mainTextFormatBold = new TextFormat( _mainFontName, 16, 0x660000, true );

		addEventListener( Event.ADDED_TO_STAGE, _addedToStageHandler);
	}


	private function _addedToStageHandler( e:Event ):Void
	{
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
		lbl1.textFormat = _mainTextFormatBold;
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
		lbl2.textFormat = _mainTextFormatBold;
		lbl2.text = "Name";
		lg2.addChild( lbl2);

        _txtCardName = new TextInput();
		_txtCardName.textFormat = _mainTextFormat;
		_txtCardName.width = 200;
		_txtCardName.addEventListener( Event.CHANGE, _txtChangeHandler);
        lg2.addChild( _txtCardName );
		editCardLayoutGroup.addChild( lg2);


		//capacity
		var lg3:LayoutGroup = new LayoutGroup();
		lg3.layout = hl;
		var lbl3:Label = new Label();
		lbl3.textFormat = _mainTextFormatBold;
		lbl3.text = "Capacity";
		lg3.addChild( lbl3);

        _txtCardCapacity = new TextInput();
		//_txtCardName.embedFonts = true;
		_txtCardCapacity.textFormat = _mainTextFormat;
		_txtCardCapacity.restrict = "0-9";
		_txtCardCapacity.width = 40;
		_txtCardCapacity.addEventListener( Event.CHANGE, _txtChangeHandler);
		_txtCardCapacity.addEventListener( TextEvent.TEXT_INPUT, _txtInputChangeHandler);
        lg3.addChild( _txtCardCapacity );
		editCardLayoutGroup.addChild( lg3);



		//disciplines
		var lbl4:Label = new Label();
		lbl4.textFormat = _mainTextFormatBold;
		lbl4.text = "Disciplines";
		editCardLayoutGroup.addChild( lbl4);


		_availableDisciplineList = new ArrayCollection<Discipline>();
		_availableDisciplineList.add( new Discipline(DisciplineName.ANIMALISM));
		_availableDisciplineList.add( new Discipline(DisciplineName.ANIMALISM_SUP));
		_availableDisciplineList.add( new Discipline(DisciplineName.AUSPEX));
		_availableDisciplineList.add( new Discipline(DisciplineName.AUSPEX_SUP));
		_availableDisciplineList.add( new Discipline(DisciplineName.CELERITY));
		_availableDisciplineList.add( new Discipline(DisciplineName.CELERITY_SUP));
		_availableDisciplineList.add( new Discipline(DisciplineName.DOMINATE));
		_availableDisciplineList.add( new Discipline(DisciplineName.DOMINATE_SUP));
		_availableDisciplineList.add( new Discipline(DisciplineName.FORTITUDE));
		_availableDisciplineList.add( new Discipline(DisciplineName.FORTITUDE_SUP));
		_availableDisciplineList.add( new Discipline(DisciplineName.OBFUSCATE));
		_availableDisciplineList.add( new Discipline(DisciplineName.OBFUSCATE_SUP));
		_availableDisciplineList.add( new Discipline(DisciplineName.POTENCE));
		_availableDisciplineList.add( new Discipline(DisciplineName.POTENCE_SUP));
		_availableDisciplineList.add( new Discipline(DisciplineName.PRESENCE));
		_availableDisciplineList.add( new Discipline(DisciplineName.PRESENCE_SUP));
		_availableDisciplineList.add( new Discipline(DisciplineName.PROTEAN));
		_availableDisciplineList.add( new Discipline(DisciplineName.PROTEAN_SUP));
		_availableDisciplineList.add( new Discipline(DisciplineName.THAUMATURGY));
		_availableDisciplineList.add( new Discipline(DisciplineName.THAUMATURGY_SUP));	
        _availableDisciplineList.sortCompareFunction = function(a:Discipline,b:Discipline)
        {
            if ( a.label > b.label ) return 1;
            if ( a.label < b.label ) return -1;
            return 0;
        }



		_selectedDisciplineList = new ArrayCollection<Discipline>();		
        _selectedDisciplineList.sortCompareFunction = function(a:Discipline,b:Discipline)
        {
            if ( a.isSuperior && !b.isSuperior) return 1;
            if ( !a.isSuperior && b.isSuperior ) return -1;
            if ( a.label > b.label ) return 1;
            if ( a.label < b.label ) return -1;
            return 0;
        }

		var lg4:LayoutGroup = new LayoutGroup();
		lg4.layout = hl;		

		//var itemRendererRecycler = DisplayObjectRecycler.withClass( DisciplineListItemRendererRecycler, DisciplineListItemRendererRecycler.updateItem, DisciplineListItemRendererRecycler.resetItem );


		_scAvailableDisciplineList = new ScrollContainer();
		_scAvailableDisciplineList.layout = new VerticalLayout();
		_scAvailableDisciplineList.width = 170;
		_scAvailableDisciplineList.height = 200;
		_displayAvailableDisciplineList();
		lg4.addChild( _scAvailableDisciplineList);



		_scSelectedDisciplineList = new ScrollContainer();
		_scSelectedDisciplineList.layout = new VerticalLayout();
		_scSelectedDisciplineList.width = 170;
		_scSelectedDisciplineList.height = 200;
		_displaySelectedDisciplineList();
		lg4.addChild( _scSelectedDisciplineList);


		editCardLayoutGroup.addChild( lg4);





		//illustration

		var lg5:LayoutGroup = new LayoutGroup();
		lg5.layout = hl;

		var lbl5:Label = new Label();
		lbl5.textFormat = _mainTextFormatBold;
		lbl5.text = "Illustration";
		lg5.addChild( lbl5);

		var bt:Button = new Button();
		bt.addEventListener( TriggerEvent.TRIGGER, _loadIllustrationClickHandler );
		bt.text = "Load From Disk";
		lg5.addChild( bt );



		editCardLayoutGroup.addChild( lg5);

	}
	private function _loadIllustrationClickHandler(e:TriggerEvent):Void
	{
		var fr = new FileReference();
		fr.addEventListener( Event.SELECT, _selectFileHandler);
		fr.browse([new FileFilter("Compatible Images", "*.png"), new FileFilter("Compatible Images", "*.jpg")]);
		//var l:Loader = new Loader();
		//l.load( File)

	}
	private function _selectFileHandler(e:Event):Void
	{
		var fr = cast(e.target, FileReference);
		var ext:String = fr.name.substr( fr.name.lastIndexOf("."));
		trace( ext);
		if ( ext != ".png" && ext != ".jpg" ) return;
		fr.addEventListener( Event.COMPLETE, _loadFileHandler );
		fr.load();
	}
	private function _loadFileHandler(e:Event):Void
	{
		var fr = cast(e.target, FileReference);
		var bd:BitmapData = BitmapData.fromBytes( fr.data);
		trace( bd);
		_card.illustration = bd;
		trace( bd );
	}

	private function _displayAvailableDisciplineList():Void
	{		
		for ( i in 0..._scAvailableDisciplineList.numChildren )
			_scAvailableDisciplineList.removeChildAt(0);
		var b:Button;
		var tf = new TextFormat( _mainFontName, 11, 0x000000 );
		for ( d in _availableDisciplineList )
		{
			b = new DisciplineButton( d, 150);
			b.textFormat = tf;	
			b.addEventListener( TriggerEvent.TRIGGER, _availableDisciplineClickHandler);
			_scAvailableDisciplineList.addChild( b );
		}
	}

	private function _displaySelectedDisciplineList():Void
	{		
		for ( i in 0..._scSelectedDisciplineList.numChildren )
			_scSelectedDisciplineList.removeChildAt(0);
		var b:Button;
		var tf = new TextFormat( _mainFontName, 11, 0x000000 );
		for ( d in _selectedDisciplineList )
		{
			b = new DisciplineButton( d, 150);
			b.textFormat = tf;	
			b.addEventListener( TriggerEvent.TRIGGER, _selectedDisciplineClickHandler);
			_scSelectedDisciplineList.addChild( b );
		}
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
	
	function _txtInputChangeHandler(e:TextEvent):Void 
	{
		if ( e.target == _txtCardCapacity )
		{		
			var t = cast(e.target, TextInput);
			trace( "INPUT change", t.text);	
			/*if (t.text.length > 2)
				t.text = t.text.substr( 0,2);
				t.invalidate();
				t.update();*/
		}
		/*
		_card.crypteName = _txtCardName.text;
		_card.crypteCapacity = _txtCardCapacity.text;*/
	}
	
	function _cbClanChangeHandler(e:Event):Void 
	{
		_card.clan = _cbClan.selectedItem;
	}
	
	function _availableDisciplineClickHandler(e:TriggerEvent):Void 
	{
		var bt:DisciplineButton = cast( e.target, DisciplineButton);
		_availableDisciplineList.remove( bt.discipline);
		_selectedDisciplineList.add(bt.discipline);
		_displayAvailableDisciplineList();
		_displaySelectedDisciplineList();
		_card.disciplineList = _selectedDisciplineList;
	}
	
	function _selectedDisciplineClickHandler(e:TriggerEvent):Void 
	{
		var bt:DisciplineButton = cast( e.target, DisciplineButton);
		_availableDisciplineList.add( bt.discipline);
		_selectedDisciplineList.remove(bt.discipline);
		_displayAvailableDisciplineList();
		_displaySelectedDisciplineList();
		_card.disciplineList = _selectedDisciplineList;
	}
}
