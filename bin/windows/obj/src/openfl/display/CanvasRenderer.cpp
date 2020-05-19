// Generated by Haxe 4.1.0
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_openfl_display_CanvasRenderer
#include <openfl/display/CanvasRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_dcbf857ab860ed73_27_new,"openfl.display.CanvasRenderer","new",0xb7099f97,"openfl.display.CanvasRenderer.new","openfl/display/CanvasRenderer.hx",27,0x2676f477)
HX_LOCAL_STACK_FRAME(_hx_pos_dcbf857ab860ed73_63_applySmoothing,"openfl.display.CanvasRenderer","applySmoothing",0xf98f304f,"openfl.display.CanvasRenderer.applySmoothing","openfl/display/CanvasRenderer.hx",63,0x2676f477)
HX_LOCAL_STACK_FRAME(_hx_pos_dcbf857ab860ed73_72_setTransform,"openfl.display.CanvasRenderer","setTransform",0x3b7aff53,"openfl.display.CanvasRenderer.setTransform","openfl/display/CanvasRenderer.hx",72,0x2676f477)
HX_LOCAL_STACK_FRAME(_hx_pos_dcbf857ab860ed73_96___clear,"openfl.display.CanvasRenderer","__clear",0x050d0124,"openfl.display.CanvasRenderer.__clear","openfl/display/CanvasRenderer.hx",96,0x2676f477)
HX_LOCAL_STACK_FRAME(_hx_pos_dcbf857ab860ed73_121___popMask,"openfl.display.CanvasRenderer","__popMask",0xbaf74a74,"openfl.display.CanvasRenderer.__popMask","openfl/display/CanvasRenderer.hx",121,0x2676f477)
HX_LOCAL_STACK_FRAME(_hx_pos_dcbf857ab860ed73_125___popMaskObject,"openfl.display.CanvasRenderer","__popMaskObject",0x24188c53,"openfl.display.CanvasRenderer.__popMaskObject","openfl/display/CanvasRenderer.hx",125,0x2676f477)
HX_LOCAL_STACK_FRAME(_hx_pos_dcbf857ab860ed73_139___popMaskRect,"openfl.display.CanvasRenderer","__popMaskRect",0xaa600db8,"openfl.display.CanvasRenderer.__popMaskRect","openfl/display/CanvasRenderer.hx",139,0x2676f477)
HX_LOCAL_STACK_FRAME(_hx_pos_dcbf857ab860ed73_143___pushMask,"openfl.display.CanvasRenderer","__pushMask",0x88887caf,"openfl.display.CanvasRenderer.__pushMask","openfl/display/CanvasRenderer.hx",143,0x2676f477)
HX_LOCAL_STACK_FRAME(_hx_pos_dcbf857ab860ed73_156___pushMaskObject,"openfl.display.CanvasRenderer","__pushMaskObject",0xbb0d9cce,"openfl.display.CanvasRenderer.__pushMaskObject","openfl/display/CanvasRenderer.hx",156,0x2676f477)
HX_LOCAL_STACK_FRAME(_hx_pos_dcbf857ab860ed73_169___pushMaskRect,"openfl.display.CanvasRenderer","__pushMaskRect",0x16167973,"openfl.display.CanvasRenderer.__pushMaskRect","openfl/display/CanvasRenderer.hx",169,0x2676f477)
HX_LOCAL_STACK_FRAME(_hx_pos_dcbf857ab860ed73_181___render,"openfl.display.CanvasRenderer","__render",0x63d57fdf,"openfl.display.CanvasRenderer.__render","openfl/display/CanvasRenderer.hx",181,0x2676f477)
HX_LOCAL_STACK_FRAME(_hx_pos_dcbf857ab860ed73_185___setBlendMode,"openfl.display.CanvasRenderer","__setBlendMode",0xc677459b,"openfl.display.CanvasRenderer.__setBlendMode","openfl/display/CanvasRenderer.hx",185,0x2676f477)
HX_LOCAL_STACK_FRAME(_hx_pos_dcbf857ab860ed73_196___setBlendModeContext,"openfl.display.CanvasRenderer","__setBlendModeContext",0x277f3194,"openfl.display.CanvasRenderer.__setBlendModeContext","openfl/display/CanvasRenderer.hx",196,0x2676f477)
HX_LOCAL_STACK_FRAME(_hx_pos_dcbf857ab860ed73_27_boot,"openfl.display.CanvasRenderer","boot",0x697b051b,"openfl.display.CanvasRenderer.boot","openfl/display/CanvasRenderer.hx",27,0x2676f477)
namespace openfl{
namespace display{

void CanvasRenderer_obj::__construct( ::Dynamic context){
            	HX_GC_STACKFRAME(&_hx_pos_dcbf857ab860ed73_27_new)
HXLINE(  38)		this->pixelRatio = ((Float)1);
HXLINE(  46)		super::__construct();
HXLINE(  48)		this->context = context;
HXLINE(  50)		this->_hx___tempMatrix =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE(  53)		this->_hx___type = HX_("canvas",d8,54,42,b8);
            	}

Dynamic CanvasRenderer_obj::__CreateEmpty() { return new CanvasRenderer_obj; }

void *CanvasRenderer_obj::_hx_vtable = 0;

Dynamic CanvasRenderer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CanvasRenderer_obj > _hx_result = new CanvasRenderer_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool CanvasRenderer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x16827685) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x16827685;
		}
	} else {
		return inClassId==(int)0x49529132;
	}
}

void CanvasRenderer_obj::applySmoothing( ::Dynamic context,bool value){
            	HX_STACKFRAME(&_hx_pos_dcbf857ab860ed73_63_applySmoothing)
HXDLIN(  63)		context->__SetField(HX_("imageSmoothingEnabled",e8,4e,0e,94),value,::hx::paccDynamic);
            	}


HX_DEFINE_DYNAMIC_FUNC2(CanvasRenderer_obj,applySmoothing,(void))

void CanvasRenderer_obj::setTransform( ::openfl::geom::Matrix transform, ::Dynamic context){
            	HX_STACKFRAME(&_hx_pos_dcbf857ab860ed73_72_setTransform)
HXLINE(  73)		if (::hx::IsNull( context )) {
HXLINE(  75)			context = this->context;
            		}
            		else {
HXLINE(  77)			bool _hx_tmp;
HXDLIN(  77)			if (::hx::IsEq( this->context,context )) {
HXLINE(  77)				_hx_tmp = ::hx::IsNotNull( this->_hx___worldTransform );
            			}
            			else {
HXLINE(  77)				_hx_tmp = false;
            			}
HXDLIN(  77)			if (_hx_tmp) {
HXLINE(  79)				this->_hx___tempMatrix->copyFrom(transform);
HXLINE(  80)				this->_hx___tempMatrix->concat(this->_hx___worldTransform);
HXLINE(  81)				transform = this->_hx___tempMatrix;
            			}
            		}
HXLINE(  84)		if (this->_hx___roundPixels) {
HXLINE(  86)			 ::Dynamic context1 =  ::Dynamic(context->__Field(HX_("setTransform",6a,ed,e2,69),::hx::paccDynamic));
HXDLIN(  86)			Float transform1 = transform->a;
HXDLIN(  86)			Float transform2 = transform->b;
HXDLIN(  86)			Float transform3 = transform->c;
HXDLIN(  86)			Float transform4 = transform->d;
HXDLIN(  86)			int _hx_tmp = ::Std_obj::_hx_int(transform->tx);
HXDLIN(  86)			context1(transform1,transform2,transform3,transform4,_hx_tmp,::Std_obj::_hx_int(transform->ty));
            		}
            		else {
HXLINE(  90)			context->__Field(HX_("setTransform",6a,ed,e2,69),::hx::paccDynamic)(transform->a,transform->b,transform->c,transform->d,transform->tx,transform->ty);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(CanvasRenderer_obj,setTransform,(void))

void CanvasRenderer_obj::_hx___clear(){
            	HX_STACKFRAME(&_hx_pos_dcbf857ab860ed73_96___clear)
HXDLIN(  96)		if (::hx::IsNotNull( this->_hx___stage )) {
HXLINE(  98)			 ::Dynamic cacheBlendMode = this->_hx___blendMode;
HXLINE(  99)			this->_hx___blendMode = null();
HXLINE( 100)			this->_hx___setBlendMode(10);
HXLINE( 102)			this->context->__Field(HX_("setTransform",6a,ed,e2,69),::hx::paccDynamic)(1,0,0,1,0,0);
HXLINE( 103)			this->context->__SetField(HX_("globalAlpha",fb,fe,d4,f9),1,::hx::paccDynamic);
HXLINE( 105)			bool _hx_tmp;
HXDLIN( 105)			if (!(this->_hx___stage->_hx___transparent)) {
HXLINE( 105)				_hx_tmp = this->_hx___stage->_hx___clearBeforeRender;
            			}
            			else {
HXLINE( 105)				_hx_tmp = false;
            			}
HXDLIN( 105)			if (_hx_tmp) {
HXLINE( 107)				this->context->__SetField(HX_("fillStyle",ae,cb,c4,52),this->_hx___stage->_hx___colorString,::hx::paccDynamic);
HXLINE( 108)				this->context->__Field(HX_("fillRect",47,45,b9,6c),::hx::paccDynamic)(0,0,(( (Float)(this->_hx___stage->stageWidth) ) * this->_hx___stage->window->_hx___scale),(( (Float)(this->_hx___stage->stageHeight) ) * this->_hx___stage->window->_hx___scale));
            			}
            			else {
HXLINE( 110)				bool _hx_tmp;
HXDLIN( 110)				if (this->_hx___stage->_hx___transparent) {
HXLINE( 110)					_hx_tmp = this->_hx___stage->_hx___clearBeforeRender;
            				}
            				else {
HXLINE( 110)					_hx_tmp = false;
            				}
HXDLIN( 110)				if (_hx_tmp) {
HXLINE( 112)					this->context->__Field(HX_("clearRect",51,35,68,bf),::hx::paccDynamic)(0,0,(( (Float)(this->_hx___stage->stageWidth) ) * this->_hx___stage->window->_hx___scale),(( (Float)(this->_hx___stage->stageHeight) ) * this->_hx___stage->window->_hx___scale));
            				}
            			}
HXLINE( 115)			this->_hx___setBlendMode(cacheBlendMode);
            		}
            	}


void CanvasRenderer_obj::_hx___popMask(){
            	HX_STACKFRAME(&_hx_pos_dcbf857ab860ed73_121___popMask)
HXDLIN( 121)		this->context->__Field(HX_("restore",4e,67,b0,6a),::hx::paccDynamic)();
            	}


void CanvasRenderer_obj::_hx___popMaskObject( ::openfl::display::DisplayObject object,::hx::Null< bool >  __o_handleScrollRect){
            		bool handleScrollRect = __o_handleScrollRect.Default(true);
            	HX_STACKFRAME(&_hx_pos_dcbf857ab860ed73_125___popMaskObject)
HXLINE( 126)		bool _hx_tmp;
HXDLIN( 126)		if (!(object->_hx___isCacheBitmapRender)) {
HXLINE( 126)			_hx_tmp = ::hx::IsNotNull( object->_hx___mask );
            		}
            		else {
HXLINE( 126)			_hx_tmp = false;
            		}
HXDLIN( 126)		if (_hx_tmp) {
HXLINE( 128)			this->_hx___popMask();
            		}
HXLINE( 131)		bool _hx_tmp1;
HXDLIN( 131)		if (handleScrollRect) {
HXLINE( 131)			_hx_tmp1 = ::hx::IsNotNull( object->_hx___scrollRect );
            		}
            		else {
HXLINE( 131)			_hx_tmp1 = false;
            		}
HXDLIN( 131)		if (_hx_tmp1) {
HXLINE( 133)			this->_hx___popMaskRect();
            		}
            	}


void CanvasRenderer_obj::_hx___popMaskRect(){
            	HX_STACKFRAME(&_hx_pos_dcbf857ab860ed73_139___popMaskRect)
HXDLIN( 139)		this->context->__Field(HX_("restore",4e,67,b0,6a),::hx::paccDynamic)();
            	}


void CanvasRenderer_obj::_hx___pushMask( ::openfl::display::DisplayObject mask){
            	HX_STACKFRAME(&_hx_pos_dcbf857ab860ed73_143___pushMask)
HXLINE( 144)		this->context->__Field(HX_("save",3d,8b,4d,4c),::hx::paccDynamic)();
HXLINE( 146)		this->setTransform(mask->_hx___renderTransform,this->context);
HXLINE( 148)		this->context->__Field(HX_("beginPath",6e,c4,2b,93),::hx::paccDynamic)();
HXLINE( 149)		mask->_hx___renderCanvasMask(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 150)		this->context->__Field(HX_("closePath",7d,65,20,14),::hx::paccDynamic)();
HXLINE( 152)		this->context->__Field(HX_("clip",d0,6e,c2,41),::hx::paccDynamic)();
            	}


void CanvasRenderer_obj::_hx___pushMaskObject( ::openfl::display::DisplayObject object,::hx::Null< bool >  __o_handleScrollRect){
            		bool handleScrollRect = __o_handleScrollRect.Default(true);
            	HX_STACKFRAME(&_hx_pos_dcbf857ab860ed73_156___pushMaskObject)
HXLINE( 157)		bool _hx_tmp;
HXDLIN( 157)		if (handleScrollRect) {
HXLINE( 157)			_hx_tmp = ::hx::IsNotNull( object->_hx___scrollRect );
            		}
            		else {
HXLINE( 157)			_hx_tmp = false;
            		}
HXDLIN( 157)		if (_hx_tmp) {
HXLINE( 159)			this->_hx___pushMaskRect(object->_hx___scrollRect,object->_hx___renderTransform);
            		}
HXLINE( 162)		bool _hx_tmp1;
HXDLIN( 162)		if (!(object->_hx___isCacheBitmapRender)) {
HXLINE( 162)			_hx_tmp1 = ::hx::IsNotNull( object->_hx___mask );
            		}
            		else {
HXLINE( 162)			_hx_tmp1 = false;
            		}
HXDLIN( 162)		if (_hx_tmp1) {
HXLINE( 164)			this->_hx___pushMask(object->_hx___mask);
            		}
            	}


void CanvasRenderer_obj::_hx___pushMaskRect( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix transform){
            	HX_STACKFRAME(&_hx_pos_dcbf857ab860ed73_169___pushMaskRect)
HXLINE( 170)		this->context->__Field(HX_("save",3d,8b,4d,4c),::hx::paccDynamic)();
HXLINE( 172)		this->setTransform(transform,this->context);
HXLINE( 174)		this->context->__Field(HX_("beginPath",6e,c4,2b,93),::hx::paccDynamic)();
HXLINE( 175)		this->context->__Field(HX_("rect",24,4d,a7,4b),::hx::paccDynamic)(rect->x,rect->y,rect->width,rect->height);
HXLINE( 176)		this->context->__Field(HX_("clip",d0,6e,c2,41),::hx::paccDynamic)();
            	}


void CanvasRenderer_obj::_hx___render(::Dynamic object){
            	HX_STACKFRAME(&_hx_pos_dcbf857ab860ed73_181___render)
HXDLIN( 181)		::openfl::display::IBitmapDrawable_obj::_hx___renderCanvas(object,::hx::ObjectPtr<OBJ_>(this));
            	}


void CanvasRenderer_obj::_hx___setBlendMode( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_dcbf857ab860ed73_185___setBlendMode)
HXLINE( 186)		if (::hx::IsNotNull( this->_hx___overrideBlendMode )) {
HXLINE( 186)			value = this->_hx___overrideBlendMode;
            		}
HXLINE( 187)		if (::hx::IsEq( this->_hx___blendMode,value )) {
HXLINE( 187)			return;
            		}
HXLINE( 189)		this->_hx___blendMode = value;
HXLINE( 190)		this->_hx___setBlendModeContext(this->context,value);
            	}


void CanvasRenderer_obj::_hx___setBlendModeContext( ::Dynamic context, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_dcbf857ab860ed73_196___setBlendModeContext)
HXDLIN( 196)		 ::Dynamic _hx_switch_0 = value;
            		if (  (_hx_switch_0==0) ){
HXLINE( 199)			context->__SetField(HX_("globalCompositeOperation",63,05,f9,c0),HX_("lighter",c3,4a,e3,19),::hx::paccDynamic);
HXDLIN( 199)			goto _hx_goto_12;
            		}
            		if (  (_hx_switch_0==2) ){
HXLINE( 206)			context->__SetField(HX_("globalCompositeOperation",63,05,f9,c0),HX_("darken",5f,36,3a,21),::hx::paccDynamic);
HXDLIN( 206)			goto _hx_goto_12;
            		}
            		if (  (_hx_switch_0==3) ){
HXLINE( 209)			context->__SetField(HX_("globalCompositeOperation",63,05,f9,c0),HX_("difference",fd,9b,91,46),::hx::paccDynamic);
HXDLIN( 209)			goto _hx_goto_12;
            		}
            		if (  (_hx_switch_0==5) ){
HXLINE( 216)			context->__SetField(HX_("globalCompositeOperation",63,05,f9,c0),HX_("hard-light",b4,7e,9e,35),::hx::paccDynamic);
HXDLIN( 216)			goto _hx_goto_12;
            		}
            		if (  (_hx_switch_0==8) ){
HXLINE( 227)			context->__SetField(HX_("globalCompositeOperation",63,05,f9,c0),HX_("lighten",bf,4a,e3,19),::hx::paccDynamic);
HXDLIN( 227)			goto _hx_goto_12;
            		}
            		if (  (_hx_switch_0==9) ){
HXLINE( 230)			context->__SetField(HX_("globalCompositeOperation",63,05,f9,c0),HX_("multiply",24,e2,8c,9a),::hx::paccDynamic);
HXDLIN( 230)			goto _hx_goto_12;
            		}
            		if (  (_hx_switch_0==11) ){
HXLINE( 233)			context->__SetField(HX_("globalCompositeOperation",63,05,f9,c0),HX_("overlay",90,43,10,a9),::hx::paccDynamic);
HXDLIN( 233)			goto _hx_goto_12;
            		}
            		if (  (_hx_switch_0==12) ){
HXLINE( 236)			context->__SetField(HX_("globalCompositeOperation",63,05,f9,c0),HX_("screen",6c,3b,5d,47),::hx::paccDynamic);
HXDLIN( 236)			goto _hx_goto_12;
            		}
            		/* default */{
HXLINE( 247)			context->__SetField(HX_("globalCompositeOperation",63,05,f9,c0),HX_("source-over",46,01,99,ce),::hx::paccDynamic);
            		}
            		_hx_goto_12:;
            	}


HX_DEFINE_DYNAMIC_FUNC2(CanvasRenderer_obj,_hx___setBlendModeContext,(void))


::hx::ObjectPtr< CanvasRenderer_obj > CanvasRenderer_obj::__new( ::Dynamic context) {
	::hx::ObjectPtr< CanvasRenderer_obj > __this = new CanvasRenderer_obj();
	__this->__construct(context);
	return __this;
}

::hx::ObjectPtr< CanvasRenderer_obj > CanvasRenderer_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic context) {
	CanvasRenderer_obj *__this = (CanvasRenderer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CanvasRenderer_obj), true, "openfl.display.CanvasRenderer"));
	*(void **)__this = CanvasRenderer_obj::_hx_vtable;
	__this->__construct(context);
	return __this;
}

CanvasRenderer_obj::CanvasRenderer_obj()
{
}

void CanvasRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CanvasRenderer);
	HX_MARK_MEMBER_NAME(context,"context");
	HX_MARK_MEMBER_NAME(pixelRatio,"pixelRatio");
	HX_MARK_MEMBER_NAME(_hx___isDOM,"__isDOM");
	HX_MARK_MEMBER_NAME(_hx___tempMatrix,"__tempMatrix");
	 ::openfl::display::DisplayObjectRenderer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CanvasRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(context,"context");
	HX_VISIT_MEMBER_NAME(pixelRatio,"pixelRatio");
	HX_VISIT_MEMBER_NAME(_hx___isDOM,"__isDOM");
	HX_VISIT_MEMBER_NAME(_hx___tempMatrix,"__tempMatrix");
	 ::openfl::display::DisplayObjectRenderer_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val CanvasRenderer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { return ::hx::Val( context ); }
		if (HX_FIELD_EQ(inName,"__isDOM") ) { return ::hx::Val( _hx___isDOM ); }
		if (HX_FIELD_EQ(inName,"__clear") ) { return ::hx::Val( _hx___clear_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__render") ) { return ::hx::Val( _hx___render_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__popMask") ) { return ::hx::Val( _hx___popMask_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pixelRatio") ) { return ::hx::Val( pixelRatio ); }
		if (HX_FIELD_EQ(inName,"__pushMask") ) { return ::hx::Val( _hx___pushMask_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__tempMatrix") ) { return ::hx::Val( _hx___tempMatrix ); }
		if (HX_FIELD_EQ(inName,"setTransform") ) { return ::hx::Val( setTransform_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__popMaskRect") ) { return ::hx::Val( _hx___popMaskRect_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"applySmoothing") ) { return ::hx::Val( applySmoothing_dyn() ); }
		if (HX_FIELD_EQ(inName,"__pushMaskRect") ) { return ::hx::Val( _hx___pushMaskRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"__setBlendMode") ) { return ::hx::Val( _hx___setBlendMode_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__popMaskObject") ) { return ::hx::Val( _hx___popMaskObject_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__pushMaskObject") ) { return ::hx::Val( _hx___pushMaskObject_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__setBlendModeContext") ) { return ::hx::Val( _hx___setBlendModeContext_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CanvasRenderer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { context=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__isDOM") ) { _hx___isDOM=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pixelRatio") ) { pixelRatio=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__tempMatrix") ) { _hx___tempMatrix=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CanvasRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("context",ef,95,77,19));
	outFields->push(HX_("pixelRatio",a5,78,12,83));
	outFields->push(HX_("__isDOM",98,a9,a8,2b));
	outFields->push(HX_("__tempMatrix",95,6f,cb,0f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CanvasRenderer_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(CanvasRenderer_obj,context),HX_("context",ef,95,77,19)},
	{::hx::fsFloat,(int)offsetof(CanvasRenderer_obj,pixelRatio),HX_("pixelRatio",a5,78,12,83)},
	{::hx::fsBool,(int)offsetof(CanvasRenderer_obj,_hx___isDOM),HX_("__isDOM",98,a9,a8,2b)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(int)offsetof(CanvasRenderer_obj,_hx___tempMatrix),HX_("__tempMatrix",95,6f,cb,0f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CanvasRenderer_obj_sStaticStorageInfo = 0;
#endif

static ::String CanvasRenderer_obj_sMemberFields[] = {
	HX_("context",ef,95,77,19),
	HX_("pixelRatio",a5,78,12,83),
	HX_("__isDOM",98,a9,a8,2b),
	HX_("__tempMatrix",95,6f,cb,0f),
	HX_("applySmoothing",26,12,60,84),
	HX_("setTransform",6a,ed,e2,69),
	HX_("__clear",6d,ca,b9,b2),
	HX_("__popMask",fd,b7,5f,c4),
	HX_("__popMaskObject",9c,46,0d,10),
	HX_("__popMaskRect",c1,73,e8,16),
	HX_("__pushMask",06,e7,7f,ba),
	HX_("__pushMaskObject",65,e2,3b,45),
	HX_("__pushMaskRect",4a,5b,e7,a0),
	HX_("__render",76,d6,58,ad),
	HX_("__setBlendMode",72,27,48,51),
	HX_("__setBlendModeContext",9d,48,5a,f6),
	::String(null()) };

::hx::Class CanvasRenderer_obj::__mClass;

void CanvasRenderer_obj::__register()
{
	CanvasRenderer_obj _hx_dummy;
	CanvasRenderer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.CanvasRenderer",25,88,96,c8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CanvasRenderer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CanvasRenderer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CanvasRenderer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CanvasRenderer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CanvasRenderer_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_dcbf857ab860ed73_27_boot)
HXDLIN(  27)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(5)
            				->setFixed(0,HX_("applySmoothing",26,12,60,84), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c)))))
            				->setFixed(1,HX_("__setBlendModeContext",9d,48,5a,f6), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c)))))
            				->setFixed(2,HX_("_",5f,00,00,00), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c)))))
            				->setFixed(3,HX_("context",ef,95,77,19), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c)))))
            				->setFixed(4,HX_("setTransform",6a,ed,e2,69), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c))))))));
            	}
}

} // end namespace openfl
} // end namespace display
