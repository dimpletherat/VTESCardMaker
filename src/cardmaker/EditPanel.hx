package cardmaker;

import core.Fonts;
import feathers.controls.Button;
import feathers.controls.ComboBox;
import feathers.controls.HSlider;
import feathers.controls.Label;
import feathers.controls.LayoutGroup;
import feathers.controls.ScrollContainer;
import feathers.controls.TextInput;
import feathers.data.ArrayCollection;
import feathers.events.TriggerEvent;
import feathers.layout.HorizontalLayout;
import feathers.layout.VerticalAlign;
import feathers.layout.VerticalLayout;
import openfl.display.BitmapData;
import openfl.events.Event;
import openfl.events.TextEvent;
import openfl.net.FileReference;
import openfl.text.TextFormat;
import vtes.*;

class EditPanel extends LayoutGroup
{
	private var _card:Card;    
	private var _mainFontName:String;
	private var _mainTextFormat:TextFormat;
	private var _mainTextFormatBold:TextFormat;
	private var _cbClan:ComboBox;
	private var _txtCardName:TextInput;
	private var _txtCardCapacity:TextInput;
	//private var _listDisciplineAvailable:ListView;
	private var _scAvailableDisciplineList:ScrollContainer;
	private var _availableDisciplineList:Array<Discipline>;
	private var _availableDisciplineListSortFunction:(a:Discipline, b:Discipline)->Int;
	//private var _listDisciplineSelected:ListView;
	private var _scSelectedDisciplineList:ScrollContainer;
	private var _selectedDisciplineList:Array<Discipline>;
	private var _selectedDisciplineListSortFunction:(a:Discipline, b:Discipline)->Int;
	private var _sliderIllustrationScale:HSlider;
	private var _isInitializing:Bool;
    
    
    public function new( card:Card )
    {
        super();

		_card = card;
        
		var l = new HorizontalLayout();
		l.gap = 30;	
		layout = l;


        

		_mainFontName = Fonts.CAMBRIA_I;
		_mainTextFormat = new TextFormat( _mainFontName, 16, 0x000000, false );
		_mainTextFormatBold = new TextFormat( _mainFontName, 16, 0x660000, true );



        
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
		_txtCardCapacity.width = 80;
		_txtCardCapacity.addEventListener( Event.CHANGE, _txtChangeHandler);
		_txtCardCapacity.addEventListener( TextEvent.TEXT_INPUT, _txtInputChangeHandler);
        lg3.addChild( _txtCardCapacity );
		editCardLayoutGroup.addChild( lg3);



		//disciplines
		var lbl4:Label = new Label();
		lbl4.textFormat = _mainTextFormatBold;
		lbl4.text = "Disciplines";
		editCardLayoutGroup.addChild( lbl4);


		_availableDisciplineList = new Array<Discipline>();
		_availableDisciplineList.push( new Discipline(DisciplineName.ANIMALISM, DisciplineLevel.INFERIOR));
		_availableDisciplineList.push( new Discipline(DisciplineName.ANIMALISM));
		_availableDisciplineList.push( new Discipline(DisciplineName.AUSPEX, DisciplineLevel.INFERIOR));
		_availableDisciplineList.push( new Discipline(DisciplineName.AUSPEX));
		_availableDisciplineList.push( new Discipline(DisciplineName.CELERITY, DisciplineLevel.INFERIOR));
		_availableDisciplineList.push( new Discipline(DisciplineName.CELERITY));
		_availableDisciplineList.push( new Discipline(DisciplineName.DOMINATE, DisciplineLevel.INFERIOR));
		_availableDisciplineList.push( new Discipline(DisciplineName.DOMINATE));
		_availableDisciplineList.push( new Discipline(DisciplineName.FORTITUDE, DisciplineLevel.INFERIOR));
		_availableDisciplineList.push( new Discipline(DisciplineName.FORTITUDE));
		_availableDisciplineList.push( new Discipline(DisciplineName.OBFUSCATE, DisciplineLevel.INFERIOR));
		_availableDisciplineList.push( new Discipline(DisciplineName.OBFUSCATE));
		_availableDisciplineList.push( new Discipline(DisciplineName.POTENCE, DisciplineLevel.INFERIOR));
		_availableDisciplineList.push( new Discipline(DisciplineName.POTENCE));
		_availableDisciplineList.push( new Discipline(DisciplineName.PRESENCE, DisciplineLevel.INFERIOR));
		_availableDisciplineList.push( new Discipline(DisciplineName.PRESENCE));
		_availableDisciplineList.push( new Discipline(DisciplineName.PROTEAN, DisciplineLevel.INFERIOR));
		_availableDisciplineList.push( new Discipline(DisciplineName.PROTEAN));
		_availableDisciplineList.push( new Discipline(DisciplineName.THAUMATURGY, DisciplineLevel.INFERIOR));
		_availableDisciplineList.push( new Discipline(DisciplineName.THAUMATURGY));	
		_availableDisciplineListSortFunction = function(a:Discipline,b:Discipline):Int
        {
            if ( a.label > b.label ) return 1;
            if ( a.label < b.label ) return -1;
            return 0;
        }
		_availableDisciplineList.sort(_availableDisciplineListSortFunction);
		/*
        _availableDisciplineList.sortCompareFunction = function(a:Discipline,b:Discipline)
        {
            if ( a.label > b.label ) return 1;
            if ( a.label < b.label ) return -1;
            return 0;
        }*/



		_selectedDisciplineList = new Array<Discipline>();	
		_selectedDisciplineListSortFunction = function(a:Discipline,b:Discipline):Int
        {
            if ( a.level == SUPERIOR && b.level == INFERIOR ) return 1;
            if ( a.level == INFERIOR && b.level == SUPERIOR	) return -1;
            if ( a.label > b.label ) return 1;
            if ( a.label < b.label ) return -1;
            return 0;
        };
		_selectedDisciplineList.sort( _selectedDisciplineListSortFunction );
		/*	
        _selectedDisciplineList.sortCompareFunction = function(a:Discipline,b:Discipline)
        {
            if ( a.isSuperior && !b.isSuperior) return 1;
            if ( !a.isSuperior && b.isSuperior ) return -1;
            if ( a.label > b.label ) return 1;
            if ( a.label < b.label ) return -1;
            return 0;
        }*/

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

		_sliderIllustrationScale = new HSlider();
		_sliderIllustrationScale.minimum = 0.2;
		_sliderIllustrationScale.maximum = 3.0;
		_sliderIllustrationScale.step = 0.1;
		_sliderIllustrationScale.value = 1.0;
		_sliderIllustrationScale.addEventListener( Event.CHANGE, _sliderIllustrationScaleChangeHandler);
		editCardLayoutGroup.addChild( _sliderIllustrationScale);



		// initialization
		_isInitializing = true;

		if ( _card.clan == null ) _card.clan = dataprovider.get(0);
		_cbClan.selectedItem = _card.clan;
		_txtCardName.text = _card.name;
		_txtCardCapacity.text = Std.string(_card.capacity);
		_sliderIllustrationScale.value = _card.illustrationScale;

		_isInitializing = false;
    }

	private function _sliderIllustrationScaleChangeHandler(e:Event):Void 
	{
		if ( _isInitializing) return;
		_card.illustrationScale = _sliderIllustrationScale.value;
		dispatchEvent( new CardMakerEvent(CardMakerEvent.UPDATE) );
	}
	private function _loadIllustrationClickHandler(e:TriggerEvent):Void
	{
		var fr = new FileReference();
		fr.addEventListener( Event.SELECT, _selectFileHandler);
		fr.browse(/*[new FileFilter("Compatible Images", "*.png"), new FileFilter("Compatible Images", "*.jpg")]*/);
		//var l:Loader = new Loader();
		//l.load( File)

	}
	private function _selectFileHandler(e:Event):Void
	{
		var fr = cast(e.target, FileReference);
		var ext:String = fr.name.substr( fr.name.lastIndexOf("."));
		//trace( ext);
		if ( ext != ".png" && ext != ".jpg" ) return;
		fr.addEventListener( Event.COMPLETE, _loadFileHandler );
		fr.load();
	}
	private function _loadFileHandler(e:Event):Void
	{
		var fr = cast(e.target, FileReference);
		var bd:BitmapData = BitmapData.fromBytes( fr.data);
		_card.illustration = bd;
		_card.illustrationScale = 1.0;
		dispatchEvent( new CardMakerEvent(CardMakerEvent.UPDATE) );

		_sliderIllustrationScale.value = 1.0;
	}

	private function _displayAvailableDisciplineList():Void
	{		
		while (_scAvailableDisciplineList.numChildren > 0 )
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
		while (_scSelectedDisciplineList.numChildren > 0 )
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
		if ( _isInitializing) return;
		if ( e.target == _txtCardCapacity )
		{		
			var t = cast(e.target, TextInput);
			trace( "change", t.text);	
			if (t.text.length > 2)
				t.text = t.text.substr( 0,2);
				t.invalidate();
				t.update();
		}
		
		_card.name = _txtCardName.text;
		_card.capacity = Std.parseInt(_txtCardCapacity.text);
		dispatchEvent( new CardMakerEvent(CardMakerEvent.UPDATE) );
	}
	
	function _txtInputChangeHandler(e:TextEvent):Void 
	{
		if ( _isInitializing) return;
		if ( e.target == _txtCardCapacity )
		{		
			var t = cast(e.target, TextInput);
			trace( "INPUT change", t.text);	
			/*if (t.text.length > 2)
				t.text = t.text.substr( 0,2);
				t.invalidate();
				t.update();*/
		}
		_card.name = _txtCardName.text;
		_card.capacity = Std.parseInt(_txtCardCapacity.text);
		dispatchEvent( new CardMakerEvent(CardMakerEvent.UPDATE) );
	}
	
	function _cbClanChangeHandler(e:Event):Void 
	{
		if ( _isInitializing) return;
		_card.clan = _cbClan.selectedItem;
		dispatchEvent( new CardMakerEvent(CardMakerEvent.UPDATE) );
	}
	
	function _availableDisciplineClickHandler(e:TriggerEvent):Void 
	{
		var bt:DisciplineButton = cast( e.target, DisciplineButton);
		_manageDisciplineLists( bt.discipline, _availableDisciplineList,_selectedDisciplineList);
		_displayAvailableDisciplineList();
		_displaySelectedDisciplineList();
		
		_card.disciplines = _selectedDisciplineList;
		dispatchEvent( new CardMakerEvent(CardMakerEvent.UPDATE) );
	}
	
	function _selectedDisciplineClickHandler(e:TriggerEvent):Void 
	{
		var bt:DisciplineButton = cast( e.target, DisciplineButton);
		_manageDisciplineLists( bt.discipline, _selectedDisciplineList,_availableDisciplineList);
		_displayAvailableDisciplineList();
		_displaySelectedDisciplineList();
		
		_card.disciplines = _selectedDisciplineList;
		dispatchEvent( new CardMakerEvent(CardMakerEvent.UPDATE) );
	}

	private function _manageDisciplineLists( d:Discipline, from:Array<Discipline>, to:Array<Discipline> ):Void
	{
		from.remove(d);
		if ( from == _availableDisciplineList)
		{
			for ( o in _availableDisciplineList )
			{
				if ( o.code == d.code) 
				{
					_availableDisciplineList.remove(o);
				}
			}
			to.push( d );
		}
		if ( to == _availableDisciplineList)
		{
			var newD:Discipline;
			if ( d.level == SUPERIOR )
			{
				newD = new Discipline( d.name, INFERIOR);
				to.push(newD);
				to.push(d);
			}else {
				newD = new Discipline( d.name, SUPERIOR);
				to.push(d);
				to.push(newD);
			}
		}
		
		_selectedDisciplineList.sort( _selectedDisciplineListSortFunction );
		_availableDisciplineList.sort(_availableDisciplineListSortFunction);
	}
}