package;

import vtes.CardCategory;
import vtes.Card;
import cardmaker.CardMaker;
import openfl.display3D.Context3DProgramFormat;
import cardmaker.EditPanel;
import feathers.controls.HSlider;
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

class Main extends Application
{
	//private var _card:Card;


	public function new()
	{
		super();
		var l = new HorizontalLayout();
		l.paddingLeft = 20;
		l.paddingTop = 20;
		l.paddingRight = 20;
		l.paddingBottom = 20;		
		layout = l;

		var c:vtes.Card = new vtes.Card(CardCategory.CRYPT);

		addChild( new CardMaker( c ));

		addEventListener( Event.ADDED_TO_STAGE, _addedToStageHandler);
	}


	private function _addedToStageHandler( e:Event ):Void
	{
		/*
		_card = new Card();
		_card.clan = new Clan( ClanName.BRUJAH);
		addChild( _card);
		*/
	}
}
