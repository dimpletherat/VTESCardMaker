package com.nbigot.vtescardmaker.cardmaker;

import openfl.display.DisplayObject;
import openfl.display.DisplayObjectContainer;
import openfl.display.Loader;
import openfl.display.Shape;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.events.MouseEvent;
import openfl.geom.Point;
import openfl.geom.Rectangle;
import openfl.text.AntiAliasType;
import openfl.text.TextField;
import openfl.text.TextFieldAutoSize;
import openfl.text.TextFormat;
import openfl.utils.Object;

/**
 * ...
 * @author
 */
class Area extends Sprite
{
	private var DEPTH_ZOOM_CURSOR:Int = 7;
	private var DEPTH_ARROW_V_CURSOR:Int = 8;
	private var DEPTH_ARROW_H_CURSOR:Int = 9;
	private var DEPTH_MOVE_CURSOR:Int = 9;
	private var DEPTH_GRIP_LAYER:Int = 6;
	private var DEPTH_LABEL:Int = 5;
	private var DEPTH_BT_ADD_TO_CART:Int = 4;
	private var DEPTH_LOADER:Int = 3;
	private var DEPTH_IMAGE:Int = 1;
	private var DEPTH_BG:Int = 0;

	// VO
	private var _elementFileName:String;
	private var _noProduct:Bool;

	// graphics
	private var _elementImage:Sprite;
	private var _elementImageMask:Shape;
	private var _elementImageSelector:Shape;
	private var _elementLabel:TextField;
	private var _noImageOrProductLabel:TextField;
	private var _loader:Loader;
	private var _background:Sprite;

	// cursors
	private var _zoomCursor:Sprite;
	private var _arrowVCursor:Sprite;
	private var _arrowHCursor:Sprite;
	private var _moveCursor:Sprite;
	private var _cursor:Sprite;

	// resize & move
	private var _gripLeft:Sprite;
	private var _gripRight:Sprite;
	private var _gripUp:Sprite;
	private var _gripDown:Sprite;
	private var _currentTarget:DisplayObject;
	private var _gripContainer:Sprite;
	private var _currentMouseOffsetX:Float;
	private var _currentMouseOffsetY:Float;
	private var _isMovingImage:Bool;
	private var _isEditMode:Bool;
	private var _data:AreaData;

	public function new( isEditMode:Bool = false, data:AreaData = null )
	{
		super();
		_isEditMode = isEditMode;
		if ( data == null )
		{
			data = new AreaData();
			data.id = 0;
			data.name = "";
			data.x = 0;
			data.y = 0;
			data.width = 200;
			data.height = 100;
		}
		_data = data;
		addEventListener( Event.ADDED_TO_STAGE, _init );
		addEventListener( Event.REMOVED_FROM_STAGE, _destroy );
	}

	private function _init(e:Event):Void
	{
		removeEventListener(Event.ADDED_TO_STAGE, _init);
		_drawArea();
	}

	private function _destroy(e:Event):Void
	{
		removeEventListener(Event.REMOVED_FROM_STAGE, _destroy);
		//stage.removeEventListener( MouseEvent.MOUSE_DOWN, _mouseDownStageHandler );
	}

	private function _drawArea():Void
	{
		_background = new Sprite();
		addChild( _background );

		_gripContainer = new Sprite();
		_background.addChild( _gripContainer );

		_gripLeft = new GripItem();
		_gripLeft.mouseChildren = false;
		_gripLeft.rotation = 90;
		_gripContainer.addChild( _gripLeft );
		_gripRight = new GripItem();
		_gripRight.rotation = 90;
		_gripRight.mouseChildren = false;
		_gripContainer.addChild( _gripRight );
		_gripUp = new GripItem();
		_gripUp.mouseChildren = false;
		_gripContainer.addChild( _gripUp );
		_gripDown = new GripItem();
		_gripDown.mouseChildren = false;
		_gripContainer.addChild( _gripDown );

		_gripContainer.visible = false;

		_drawBackground();
		/*
		if ( Config.IS_ADMIN_MODE ){
			_btEditContent = new ButtonEditAreaContent();
			_btEditContent.x = _data.width - _btEditContent.width - 4;
			_btEditContent.y = _data.height - _btEditContent.height - 4;
			_btEditContent.addEventListener( MouseEvent.CLICK, _clickEditContentHandler );
			addChild( _btEditContent );
		}

		_zoomCursor = new ZoomCursor();
		_zoomCursor.visible = false;
		_zoomCursor.mouseEnabled = false;
		_zoomCursor.mouseChildren = false;
		_zoomCursor.cacheAsBitmap = true;
		addChild( _zoomCursor );
		_arrowVCursor = new ArrowVCursor();
		_arrowVCursor.visible = false;
		_arrowVCursor.mouseEnabled = false;
		_arrowVCursor.mouseChildren = false;
		_arrowVCursor.cacheAsBitmap = true;
		addChild( _arrowVCursor );
		_arrowHCursor = new ArrowHCursor();
		_arrowHCursor.visible = false;
		_arrowHCursor.mouseEnabled = false;
		_arrowHCursor.mouseChildren = false;
		_arrowHCursor.cacheAsBitmap = true;
		addChild( _arrowHCursor );
		//_moveCursor = new MoveCursor();
		_moveCursor.visible = false;
		_moveCursor.mouseEnabled = false;
		_moveCursor.mouseChildren = false;
		_moveCursor.cacheAsBitmap = true;
		addChild( _moveCursor );

		*/
		_elementLabel = _drawLabel();

		addEventListener( MouseEvent.MOUSE_DOWN, _mouseDownHandler );
		stage.addEventListener( MouseEvent.MOUSE_DOWN, _mouseDownStageHandler );

		_initialize();
	}

	private function _drawBackground():Void
	{
		_background.graphics.clear();
		_background.graphics.lineStyle( 1, 0x000000 );
		_background.graphics.beginFill( 0xcccccc );
		_background.graphics.drawRect( 0, 0,  _data.width, _data.height );
		_background.graphics.endFill();

		if ( _isEditMode /*&& !_data.isLocked*/ )
		{
			_gripContainer.visible = true;
			_gripLeft.x = 0;
			_gripLeft.y = _data.height / 2;
			_gripRight.x = _data.width;
			_gripRight.y = _data.height / 2;
			_gripUp.x = _data.width / 2;
			_gripUp.y = 0;
			_gripDown.x = _data.width / 2;
			_gripDown.y = _data.height;
		}
		else {
			_gripContainer.visible = false;
		}
		/*
			if ( _btEditContent ){
				_btEditContent.x = _data.width - _btEditContent.width - 4;
				_btEditContent.y = _data.height - _btEditContent.height - 4;
			}
			if ( _elementImageMask ) {
				_elementImageMask.graphics.clear();
				_elementImageMask.graphics.beginFill( 0xFF0000 , 0.4);
				_elementImageMask.graphics.drawRect( 0, 0, _data.width, _data.height );
				_elementImageMask.graphics.endFill();
			}
			if ( _btEnlargeImage && _btInitImage && _btEnlargeImage ) {
				_btEnlargeImage.x = _data.width + 2;
				_btEnlargeImage.y = 0;
				_btInitImage.x = _data.width + 2;
				_btInitImage.y = _btEnlargeImage.y + _btEnlargeImage.height + 2;
				_btReduceImage.x = _data.width + 2;
				_btReduceImage.y = _btInitImage.y + _btInitImage.height + 2;
			}

			if ( _elementLabel ) {
				_elementLabel.x = 2;
				_elementLabel.y = (_data.height - 20 );
			}
			if ( _noImageOrProductLabel ) {
				_noImageOrProductLabel.x = (_data.width - _noImageOrProductLabel.width)/2;
				_noImageOrProductLabel.y = (_data.height - _noImageOrProductLabel.height)/2;
			}
			*/
		x = _data.x;
		y = _data.y;
	}

	private function _initialize():Void
	{
		/*
		removeEventListener( MouseEvent.MOUSE_OVER, _rollOverHandler );
		removeEventListener( MouseEvent.MOUSE_OUT, _rollOutHandler );
		removeEventListener( MouseEvent.CLICK, _clickZoomHandler );

		_noProduct = false;

		_elementLabel.visible = false;
		if ( _btAddToCart != null ) _btAddToCart.visible = false;
		if ( _btEditContent != null ) _btEditContent.visible = false;

		if ( _elementImage != null ) {
			//Bitmap(_elementImage.getChildAt(0).content).bitmapData.dispose();
			removeChild( _elementImage );
			_elementImage = null;
			_elementImageSelector = null;
		}
		if ( _loaderItem ) {
			removeChild( _loaderItem );
			_loaderItem = null;
		}
		if ( _elementImageMask != null ) {
			removeChild( _elementImageMask );
			_elementImageMask = null;
		}
		if ( _noImageOrProductLabel != null ) {
			removeChild( _noImageOrProductLabel );
			_noImageOrProductLabel = null;
		}
		if ( _loader ) {
			_loader.contentLoaderInfo.removeEventListener(Event.COMPLETE, _imageCompleteHandler );
			_loader.contentLoaderInfo.removeEventListener(ProgressEvent.PROGRESS, _imageProgressHandler );
			_loader = null;
		}
		*/
	}
	/*
		public function displayImage( element:CollectionElementVO, color:ColorVO ):Void
		{
			_initialize();
			if ( _btEditContent ) _btEditContent.visible = true;

			_element = element;
			//_element.updatePosition( _data.id, _element.areaPositionX, _element.areaPositionY, _element.areaScale );
			_color = color;

			if ( _element.colorIDList.indexOf( _color.id ) == -1 && !_element.isFabricAmbiance )
			{
				_displayNoProduct();
			}else{
				_loaderItem = addChild( new LoaderItemMini() ) as LoaderItemMini;
				_loaderItem.x = _data.width / 2;
				_loaderItem.y = _data.height / 2;
				if ( _element.isFabricAmbiance )
					_elementFileName = CollectionVO.instance.id + "_" + _element.code + ".jpg";
				else
					_elementFileName = _element.code + "_" + _color.id + ".jpg";
				trace( "_elementFileName : " + _elementFileName );
				_loader = new Loader();
				_loader.contentLoaderInfo.addEventListener( Event.COMPLETE, _imageCompleteHandler );
				_loader.contentLoaderInfo.addEventListener( IOErrorEvent.IO_ERROR, _IOErrorHandler );
				_loader.contentLoaderInfo.addEventListener( ProgressEvent.PROGRESS, _imageProgressHandler );
				_loader.load( new URLRequest( Config.IMAGES_FOLDER + _elementFileName ) );
			}
		}

		private function _drawImageSelector():Void
		{
			if ( !_elementImage ) return;

			var scale:Number = _elementImage.scaleX;
			_elementImageSelector = _elementImage.addChild( new Shape() ) as Shape;
			_elementImageSelector.graphics.lineStyle( 1, 0x990000, 0.5);
			_elementImageSelector.graphics.beginFill( 0x990000, 0.1);
			_elementImageSelector.graphics.drawRect( 0, 0, _elementImage.width / scale, _elementImage.height / scale );
			_elementImageSelector.graphics.endFill();

			_btEnlargeImage = new ButtonEnlargeImage();
			_btEnlargeImage.x = _data.width + 2;
			_btEnlargeImage.y = 0;
			_btEnlargeImage.addEventListener( MouseEvent.CLICK, _clickEnlargeImageHandler );
			addChild( _btEnlargeImage );
			_btInitImage = new ButtonInitImage();
			_btInitImage.x = _data.width + 2;
			_btInitImage.y = _btEnlargeImage.y + _btEnlargeImage.height + 2;
			_btInitImage.addEventListener( MouseEvent.CLICK, _clickInitImageHandler );
			addChild( _btInitImage );
			_btReduceImage = new ButtonReduceImage();
			_btReduceImage.x = _data.width + 2;
			_btReduceImage.y = _btInitImage.y + _btInitImage.height + 2;
			_btReduceImage.addEventListener( MouseEvent.CLICK, _clickReduceImageHandler );
			addChild( _btReduceImage );
		}
		*/

	private function _mouseDownHandler(e:MouseEvent):Void
	{
		if ( _isEditMode )
		{

			// remise au premier plan
			//parent.addChild( this );

			_isMovingImage = false;

			_currentTarget = cast(e.target);

			//if ( _currentTarget is ButtonEditAreaContent ) return;

			if ( _currentTarget is Loader)
			{
				_currentMouseOffsetX = mouseX - _elementImage.x;
				_currentMouseOffsetY = mouseY - _elementImage.y;
				/*if(  _cursor == null){
					_isMovingImage = true;
				}*/
			}
			else
			{
				_currentMouseOffsetX = e.localX;
				_currentMouseOffsetY = e.localY;
			}/*
			if ( !_elementImageSelector ) {
				_drawImageSelector();
			}*/
			stage.addEventListener( MouseEvent.MOUSE_UP, _mouseUpHandler );
			addEventListener( Event.ENTER_FRAME, _enterFrameHandler );
		}
	}
	private function _mouseDownStageHandler(e:MouseEvent):Void
	{
		if ( !this.hitTestPoint( stage.mouseX, stage.mouseY, true ) )
		{
			// HORS AREA
			//if ( _elementImageSelector ) _removeImageSelector();
		}
	}/*
	private function _clickEnlargeImageHandler(e:MouseEvent):Void
	{
		var beforeW:Number = _elementImage.width;
		var beforeH:Number = _elementImage.height;
		_elementImage.scaleX += 0.03;
		_elementImage.scaleY += 0.03;
		var afterW:Number = _elementImage.width;
		var afterH:Number = _elementImage.height;
		_elementImage.x += ( beforeW - afterW ) / 2;
		_elementImage.y += ( beforeH - afterH ) / 2;

		_data.updateElement( _element.code, _elementImage.x, _elementImage.y, _elementImage.scaleX );
	}

	private function _clickInitImageHandler(e:MouseEvent):Void
	{
		var rect:Rectangle = new Rectangle( 0, 0, _data.width, _data.height );
		ImageUtils.fitIn( _elementImage, rect );

		_data.updateElement( _element.code, _elementImage.x, _elementImage.y, _elementImage.scaleX );
	}

	private function _clickReduceImageHandler(e:MouseEvent):Void
	{
		if ( _elementImage.scaleX >= 0.1 ) {
			var beforeW:Number = _elementImage.width;
			var beforeH:Number = _elementImage.height;
			_elementImage.scaleX -= 0.03;
			_elementImage.scaleY -= 0.03;
			var afterW:Number = _elementImage.width;
			var afterH:Number = _elementImage.height;
			_elementImage.x += ( beforeW-afterW ) / 2;
			_elementImage.y += ( beforeH - afterH ) / 2;

			_data.updateElement( _element.code, _elementImage.x, _elementImage.y, _elementImage.scaleX );
		}
	}
	private function _removeImageSelector():Void
	{
		if ( _elementImageSelector )
			_elementImage.removeChild( _elementImageSelector );
		_elementImageSelector = null;

		removeChild( _btEnlargeImage );
		removeChild( _btReduceImage );
		removeChild( _btInitImage );
		_btEnlargeImage = null;
		_btReduceImage = null;
		_btInitImage = null;
	}
	*/
	private function _mouseUpHandler(e:MouseEvent):Void
	{
		if ( _isEditMode )
		{
			stage.removeEventListener( MouseEvent.MOUSE_UP, _mouseUpHandler );
			removeEventListener( Event.ENTER_FRAME, _enterFrameHandler );
		}
	}

	private function _enterFrameHandler(e:Event):Void
	{
		trace( _currentTarget);
		if (_currentTarget == _gripLeft )
		{

			trace( "_gripLeft");
			var leftPos:Float = _data.x + _data.width;
			_data.x = parent.mouseX;
			_data.width = leftPos -_data.x;
		}
		else if (_currentTarget == _gripRight )
		{

			trace( "_gripRight");
			_data.width = mouseX;
		}
		else if (_currentTarget == _gripUp )
		{

			trace( "_gripUp");
			var downPos:Float = _data.y + _data.height;
			_data.y = parent.mouseY;
			_data.height = downPos -_data.y;
		}
		else if (_currentTarget == _gripDown )
		{

			trace( "_gripDown");
			_data.height = mouseY;
		}
		else{
			if ( _isMovingImage)
			{
				// click sur photo
				/*_elementImage.x = mouseX - _currentMouseOffsetX;
				_elementImage.y = mouseY - _currentMouseOffsetY;

				_data.updateElement( _element.code, _elementImage.x, _elementImage.y, _elementImage.scaleX );*/
			}
			else {
				// ailleurs

				//if ( _data.isLocked ) return;

				_data.x = parent.mouseX - _currentMouseOffsetX;
				_data.y = parent.mouseY - _currentMouseOffsetY;
				/*if ( _currentTarget is Loader) {
					_data.x -= _elementImage.x;
					_data.y -= _elementImage.y;
				}*/
			}
		}
		/*
		switch _currentTarget {
			case :
			case :
			case :
				_data.height = mouseY;
			default:

		}*/
		_data.x = Math.round( _data.x );
		_data.y = Math.round( _data.y );
		_data.width = Math.round( _data.width );
		_data.height = Math.round( _data.height );
		_drawBackground();
	}
	/*
		public function displayEditAreaMode( editMode:Boolean ):Void
		{
			_isEditMode = editMode;
			_drawBackground();
		}

		private function _IOErrorHandler(e:IOErrorEvent):Void
		{
			if ( _loaderItem ) removeChild( _loaderItem );
			_loaderItem = null;
			_displayNoImage();
		}

		private function _displayNoProduct():Void
		{
			_noProduct = true;
			_noImageOrProductLabel = new TextField();
			var tf:TextFormat = new TextFormat();
			var f:Font = new UniversCondensedBold();
			tf.font = f.fontName;
			tf.bold = true;
			tf.italic = true;
			tf.align = TextFormatAlign.CENTER;
			tf.color = 0xBBBBBB;
			tf.size = 14;
			_noImageOrProductLabel.selectable = false;
			_noImageOrProductLabel.mouseEnabled = false;
			_noImageOrProductLabel.embedFonts = true;
			_noImageOrProductLabel.antiAliasType = AntiAliasType.ADVANCED;
			_noImageOrProductLabel.autoSize = TextFieldAutoSize.LEFT;
			_noImageOrProductLabel.multiline = true;
			_noImageOrProductLabel.defaultTextFormat = tf;
			_noImageOrProductLabel.htmlText = Locale.loadString("LBL_NO_IMAGE_IN_COLOR");
			_noImageOrProductLabel.x = (_data.width - _noImageOrProductLabel.width)/2;
			_noImageOrProductLabel.y = (_data.height - _noImageOrProductLabel.height)/2;
			addChild(_noImageOrProductLabel);
			finishDisplaying();
		}

		private function _displayNoImage():Void
		{
			_noImageOrProductLabel = new TextField();
			var tf:TextFormat = new TextFormat();
			var f:Font = new UniversCondensedBold();
			tf.font = f.fontName;
			tf.bold = true;
			tf.italic = true;
			tf.align = TextFormatAlign.CENTER;
			tf.color = 0xBBBBBB;
			tf.size = 14;
			_noImageOrProductLabel.selectable = false;
			_noImageOrProductLabel.mouseEnabled = false;
			_noImageOrProductLabel.embedFonts = true;
			_noImageOrProductLabel.antiAliasType = AntiAliasType.ADVANCED;
			_noImageOrProductLabel.autoSize = TextFieldAutoSize.LEFT;
			_noImageOrProductLabel.multiline = true;
			_noImageOrProductLabel.defaultTextFormat = tf;
			_noImageOrProductLabel.htmlText = Locale.loadString("LBL_NO_IMAGE_AVAILABLE");
			_noImageOrProductLabel.x = (_data.width - _noImageOrProductLabel.width)/2;
			_noImageOrProductLabel.y = (_data.height - _noImageOrProductLabel.height)/2;
			addChild(_noImageOrProductLabel);
			finishDisplaying();
		}

		private function _imageProgressHandler(e:ProgressEvent):Void
		{
			var li:LoaderInfo = LoaderInfo( e.target );
			_loaderItem.update( li.bytesLoaded, li.bytesTotal );
		}

		private function _imageCompleteHandler(e:Event):Void
		{
			removeChild( _loaderItem );
			_loaderItem = null;
			_elementImage = new Sprite();
			_elementImage.addChild( LoaderInfo( e.target ).loader );
			_elementImage.alpha = 0;
			_loader.contentLoaderInfo.removeEventListener(Event.COMPLETE, _imageCompleteHandler );
			_loader.contentLoaderInfo.removeEventListener(ProgressEvent.PROGRESS, _imageProgressHandler );
			_loader = null;
			addChildAt( _elementImage, DEPTH_IMAGE );

			var rect:Rectangle = new Rectangle( 0, 0, _data.width, _data.height );// _background.getRect(this);
			if ( isNaN( _data.elementX ) || isNaN( _data.elementY ) || isNaN( _data.elementScale ) )
			{
				ImageUtils.fitIn( _elementImage, rect );
			}
			else
			{
				_elementImage.scaleX = _elementImage.scaleY = _data.elementScale;
				trace( "_elementImage.CODE : " + _data.elementCode );
				trace( "_elementImage.scaleX : " + _elementImage.scaleX );
				_elementImage.x = _data.elementX;
				trace( "_elementImage.x : " + _elementImage.x );
				_elementImage.y = _data.elementY;
				trace( "_elementImage.y : " + _elementImage.y );
			}

			_elementImageMask = new Shape();
			_elementImageMask.graphics.beginFill( 0xff0000, 0.4 );
			_elementImageMask.graphics.drawRect( rect.x, rect.y, rect.width, rect.height );
			_elementImageMask.graphics.endFill();
			addChild( _elementImageMask );
			_elementImage.mask = _elementImageMask;

			TweenLite.to( _elementImage, 1, { alpha:1 } );

			finishDisplaying();
		}

		public function finishDisplaying( color:ColorVO = null ):Void
		{
			if ( color ) _color = color;

			//_elementLabel.visible = true;
			if ( _element ) _elementLabel.text = _element.code;
			if ( _btAddToCart ) _btAddToCart.visible = true;
			if ( _btEditContent ) _btEditContent.visible = true;

			// remise au premier plan
			if ( _gripContainer ) addChild( _gripContainer );
			addChild( _zoomCursor );
			addChild( _arrowHCursor );
			addChild( _arrowVCursor );
			addChild( _moveCursor );

			addEventListener( MouseEvent.MOUSE_OVER, _rollOverHandler );
			addEventListener( MouseEvent.MOUSE_OUT, _rollOutHandler );

			addEventListener( MouseEvent.CLICK, _clickZoomHandler );
		}
	*/
	private function _drawLabel():TextField
	{

		var t:TextField = new TextField();
		var tf:TextFormat = new TextFormat();
		tf.font = "_sans";
		tf.bold = true;
		tf.color = 0x444444;
		tf.size = 14;
		t.selectable = false;
		t.embedFonts = true;
		t.antiAliasType = AntiAliasType.ADVANCED;
		t.autoSize = TextFieldAutoSize.LEFT;
		t.mouseEnabled = false;
		t.defaultTextFormat = tf;
		t.background = true;
		t.backgroundColor = 0xffffff;
		t.alpha = 0.8;
		t.x = 2;
		t.y = (_data.height - 20 );
		addChild(t);
		return t;
	}
	/*
		private function _rollOverHandler(e:MouseEvent):Void
		{
			_elementLabel.visible = true;
			addEventListener( MouseEvent.MOUSE_MOVE, _mouseMoveHandler );
		}

		private function _mouseMoveHandler(e:MouseEvent):Void
		{
			e.updateAfterEvent();
			if ( _cursor ) _cursor.visible = false;

			_cursor = null;
			if ( _isEditMode ) {
				if ( ( mouseX <= 10 ) || ( mouseX >= _data.width - 10 ) || ( mouseY <= 10 ) || (mouseY >= _data.height - 10 ) ){
					_cursor = _moveCursor;
				}
				switch( e.target ) {
					case _gripLeft:
						_cursor = _arrowHCursor;
						break;
					case _gripRight:
						_cursor = _arrowHCursor;
						break;
					case _gripUp:
						_cursor = _arrowVCursor;
						break;
					case _gripDown:
						_cursor = _arrowVCursor;
						break;
				}
				if ( e.target is ButtonEditAreaContent ) _cursor = null;

				if ( _data.isLocked ) _cursor = null;

			}else {
				if ( !_noProduct && !(e.target is ButtonEditAreaContent) && _element ) {
					_cursor = _zoomCursor;
				}
			}
			if ( _cursor ) {
				Mouse.hide();
				_cursor.x = mouseX;
				_cursor.y = mouseY;
				_cursor.visible = true;
			}else {
				Mouse.show();
			}
		}

		private function _rollOutHandler(e:MouseEvent):Void
		{
			removeEventListener( MouseEvent.MOUSE_MOVE, _mouseMoveHandler );
			_elementLabel.visible = false;
			if ( _cursor ) _cursor.visible = false;
			Mouse.show();
		}

		private function _clickZoomHandler(e:MouseEvent):Void
		{
			if ( !_isEditMode ){
				if ( !_noProduct && _cursor == _zoomCursor && _element ) {

						stage.addChild( new ZoomPanel( _elementFileName, _element ) );
				}
			}
		}

		private function _clickEditContentHandler(e:MouseEvent):Void
		{
			if ( !_listElement ){
				_listElement = stage.addChild( new ListElement( CollectionVO.instance.elementList, "code" ) ) as ListElement;

				var rect:Rectangle = _btEditContent.getBounds( stage );
				var p:Point = new Point( rect.x + rect.width - _listElement.width, rect.y - _listElement.height );
				if ( p.y < 0 ) p.y = 0;
				if ( p.x < 0 ) p.x = 0;

				_listElement.x = p.x;
				_listElement.y = p.y;
				_listElement.addEventListener( Event.SELECT, _selectListElementItemHandler );
				_listElement.selectedData = _element;
				stage.addEventListener( MouseEvent.MOUSE_UP, _clickStageHandler );
			}
		}

		private function _removeListElement():Void
		{
			stage.removeEventListener( MouseEvent.MOUSE_UP, _clickStageHandler );
			_listElement.removeEventListener( Event.SELECT, _selectListElementItemHandler );
			stage.removeChild( _listElement );
			_listElement = null;
		}

		private function _clickStageHandler(e:MouseEvent):Void
		{
			var isOutList:Boolean = !_listElement.hitTestPoint( stage.mouseX, stage.mouseY, true );
			if ( isOutList ) {
				_removeListElement();
			}
		}

		private function _updateElementArea():Void
		{
			var element:CollectionElementVO = _listElement.selectedData;
			_data.updateElement( element.code, Number.NaN, Number.NaN, Number.NaN );
			_elementLabel.text = element.code;
			_removeListElement();
			displayImage( element, _color );

			DataManager.instance.addEventListener( Event.COMPLETE, _saveLayoutCompleteHandler, false, 0, true );
			DataManager.instance.saveLayout( LayoutVO.instance );
		}

		private function _selectListElementItemHandler(e:Event):Void
		{
			_updateElementArea();
		}
		private function _saveLayoutCompleteHandler(e:Event):Void
		{
			DataManager.instance.removeEventListener( Event.COMPLETE, _saveLayoutCompleteHandler, false );
			// TODO ?
		}
		*/

}