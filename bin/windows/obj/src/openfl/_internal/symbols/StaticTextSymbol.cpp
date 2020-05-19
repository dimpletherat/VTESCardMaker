// Generated by Haxe 4.1.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_openfl__internal_formats_swf_SWFLite
#include <openfl/_internal/formats/swf/SWFLite.h>
#endif
#ifndef INCLUDED_openfl__internal_formats_swf_ShapeCommand
#include <openfl/_internal/formats/swf/ShapeCommand.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_FontSymbol
#include <openfl/_internal/symbols/FontSymbol.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_SWFSymbol
#include <openfl/_internal/symbols/SWFSymbol.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_StaticTextRecord
#include <openfl/_internal/symbols/StaticTextRecord.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_StaticTextSymbol
#include <openfl/_internal/symbols/StaticTextSymbol.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
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
#ifndef INCLUDED_openfl_text_StaticText
#include <openfl/text/StaticText.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9cb7cf8686767cce_26_new,"openfl._internal.symbols.StaticTextSymbol","new",0x75321c28,"openfl._internal.symbols.StaticTextSymbol.new","openfl/_internal/symbols/StaticTextSymbol.hx",26,0x451958e5)
HX_LOCAL_STACK_FRAME(_hx_pos_9cb7cf8686767cce_30___createObject,"openfl._internal.symbols.StaticTextSymbol","__createObject",0xe6e27b33,"openfl._internal.symbols.StaticTextSymbol.__createObject","openfl/_internal/symbols/StaticTextSymbol.hx",30,0x451958e5)
namespace openfl{
namespace _internal{
namespace symbols{

void StaticTextSymbol_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_9cb7cf8686767cce_26_new)
HXDLIN(  26)		super::__construct();
            	}

Dynamic StaticTextSymbol_obj::__CreateEmpty() { return new StaticTextSymbol_obj; }

void *StaticTextSymbol_obj::_hx_vtable = 0;

Dynamic StaticTextSymbol_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StaticTextSymbol_obj > _hx_result = new StaticTextSymbol_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StaticTextSymbol_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6ec9976b) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x6ec9976b;
	} else {
		return inClassId==(int)0x7b53fc16;
	}
}

 ::openfl::display::DisplayObject StaticTextSymbol_obj::_hx___createObject( ::openfl::_internal::formats::swf::SWFLite swf){
            	HX_GC_STACKFRAME(&_hx_pos_9cb7cf8686767cce_30___createObject)
HXLINE(  31)		 ::openfl::text::StaticText staticText =  ::openfl::text::StaticText_obj::__alloc( HX_CTX );
HXLINE(  32)		 ::openfl::display::Graphics graphics = staticText->_hx___graphics;
HXLINE(  34)		if (::hx::IsNotNull( this->rendered )) {
HXLINE(  36)			staticText->text = this->rendered->text;
HXLINE(  37)			graphics->copyFrom(this->rendered->_hx___graphics);
HXLINE(  38)			return staticText;
            		}
HXLINE(  41)		::String text = HX_("",00,00,00,00);
HXLINE(  43)		if (::hx::IsNotNull( this->records )) {
HXLINE(  45)			 ::openfl::_internal::symbols::FontSymbol font = null();
HXLINE(  46)			int color = 16777215;
HXLINE(  47)			Float offsetX = this->matrix->tx;
HXLINE(  48)			Float offsetY = this->matrix->ty;
HXLINE(  50)			Float scale;
HXDLIN(  50)			int index;
HXLINE(  52)			{
HXLINE(  52)				int _g = 0;
HXDLIN(  52)				::Array< ::Dynamic> _g1 = this->records;
HXDLIN(  52)				while((_g < _g1->length)){
HXLINE(  52)					 ::openfl::_internal::symbols::StaticTextRecord record = _g1->__get(_g).StaticCast<  ::openfl::_internal::symbols::StaticTextRecord >();
HXDLIN(  52)					_g = (_g + 1);
HXLINE(  54)					if (::hx::IsNotNull( record->fontID )) {
HXLINE(  54)						font = ( ( ::openfl::_internal::symbols::FontSymbol)(swf->symbols->get(( (int)(record->fontID) ))) );
            					}
HXLINE(  55)					if (::hx::IsNotNull( record->offsetX )) {
HXLINE(  55)						offsetX = (this->matrix->tx + (( (Float)(record->offsetX) ) * ((Float)0.05)));
            					}
HXLINE(  56)					if (::hx::IsNotNull( record->offsetY )) {
HXLINE(  56)						offsetY = (this->matrix->ty + (( (Float)(record->offsetY) ) * ((Float)0.05)));
            					}
HXLINE(  57)					if (::hx::IsNotNull( record->color )) {
HXLINE(  57)						color = ( (int)(record->color) );
            					}
HXLINE(  59)					if (::hx::IsNotNull( font )) {
HXLINE(  61)						scale = ((( (Float)(record->fontHeight) ) / ( (Float)(1024) )) * ((Float)0.05));
HXLINE(  63)						{
HXLINE(  63)							int _g = 0;
HXDLIN(  63)							int _g1 = record->glyphs->length;
HXDLIN(  63)							while((_g < _g1)){
HXLINE(  63)								_g = (_g + 1);
HXDLIN(  63)								int i = (_g - 1);
HXLINE(  65)								index = record->glyphs->__get(i);
HXLINE(  66)								text = (text + ::String::fromCharCode(font->codes->__get(index)));
HXLINE(  68)								{
HXLINE(  68)									int _g1 = 0;
HXDLIN(  68)									::Array< ::Dynamic> _g2 = font->glyphs->__get(index).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  68)									while((_g1 < _g2->length)){
HXLINE(  68)										 ::openfl::_internal::formats::swf::ShapeCommand command = _g2->__get(_g1).StaticCast<  ::openfl::_internal::formats::swf::ShapeCommand >();
HXDLIN(  68)										_g1 = (_g1 + 1);
HXLINE(  70)										switch((int)(command->_hx_getIndex())){
            											case (int)1: {
HXLINE(  72)												int _g = command->_hx_getInt(0);
HXDLIN(  72)												{
HXLINE(  72)													Float alpha = command->_hx_getFloat(1);
HXLINE(  73)													graphics->beginFill((color & 16777215),(( (Float)(((color >> 24) & 255)) ) / ( (Float)(255) )));
            												}
            											}
            											break;
            											case (int)3: {
HXLINE(  75)												Float anchorY = command->_hx_getFloat(3);
HXDLIN(  75)												Float anchorX = command->_hx_getFloat(2);
HXDLIN(  75)												Float controlY = command->_hx_getFloat(1);
HXDLIN(  75)												Float controlX = command->_hx_getFloat(0);
HXLINE(  76)												graphics->curveTo(((controlX * scale) + offsetX),((controlY * scale) + offsetY),((anchorX * scale) + offsetX),((anchorY * scale) + offsetY));
            											}
            											break;
            											case (int)4: {
HXLINE(  80)												graphics->endFill();
            											}
            											break;
            											case (int)5: {
HXLINE(  82)												 ::Dynamic miterLimit = command->_hx_getObject(7);
HXDLIN(  82)												 ::Dynamic joints = command->_hx_getObject(6);
HXDLIN(  82)												 ::Dynamic caps = command->_hx_getObject(5);
HXDLIN(  82)												 ::Dynamic scaleMode = command->_hx_getObject(4);
HXDLIN(  82)												 ::Dynamic pixelHinting = command->_hx_getObject(3);
HXDLIN(  82)												 ::Dynamic alpha = command->_hx_getObject(2);
HXDLIN(  82)												 ::Dynamic color = command->_hx_getObject(1);
HXDLIN(  82)												 ::Dynamic thickness = command->_hx_getObject(0);
HXLINE(  83)												if (::hx::IsNotNull( thickness )) {
HXLINE(  85)													graphics->lineStyle(thickness,color,alpha,pixelHinting,scaleMode,caps,joints,miterLimit);
            												}
            												else {
HXLINE(  90)													graphics->lineStyle(null(),null(),null(),null(),null(),null(),null(),null());
            												}
            											}
            											break;
            											case (int)6: {
HXLINE(  93)												Float y = command->_hx_getFloat(1);
HXDLIN(  93)												Float x = command->_hx_getFloat(0);
HXLINE(  94)												graphics->lineTo(((x * scale) + offsetX),((y * scale) + offsetY));
            											}
            											break;
            											case (int)7: {
HXLINE(  96)												Float y = command->_hx_getFloat(1);
HXDLIN(  96)												Float x = command->_hx_getFloat(0);
HXLINE(  97)												graphics->moveTo(((x * scale) + offsetX),((y * scale) + offsetY));
            											}
            											break;
            											default:{
            											}
            										}
            									}
            								}
HXLINE( 103)								offsetX = (offsetX + (( (Float)(record->advances->__get(i)) ) * ((Float)0.05)));
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 109)		staticText->text = text;
HXLINE( 111)		this->records = null();
HXLINE( 112)		this->rendered =  ::openfl::text::StaticText_obj::__alloc( HX_CTX );
HXLINE( 113)		this->rendered->text = text;
HXLINE( 114)		this->rendered->_hx___graphics->copyFrom(staticText->_hx___graphics);
HXLINE( 116)		return staticText;
            	}



::hx::ObjectPtr< StaticTextSymbol_obj > StaticTextSymbol_obj::__new() {
	::hx::ObjectPtr< StaticTextSymbol_obj > __this = new StaticTextSymbol_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< StaticTextSymbol_obj > StaticTextSymbol_obj::__alloc(::hx::Ctx *_hx_ctx) {
	StaticTextSymbol_obj *__this = (StaticTextSymbol_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StaticTextSymbol_obj), true, "openfl._internal.symbols.StaticTextSymbol"));
	*(void **)__this = StaticTextSymbol_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

StaticTextSymbol_obj::StaticTextSymbol_obj()
{
}

void StaticTextSymbol_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StaticTextSymbol);
	HX_MARK_MEMBER_NAME(matrix,"matrix");
	HX_MARK_MEMBER_NAME(records,"records");
	HX_MARK_MEMBER_NAME(rendered,"rendered");
	 ::openfl::_internal::symbols::SWFSymbol_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StaticTextSymbol_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(matrix,"matrix");
	HX_VISIT_MEMBER_NAME(records,"records");
	HX_VISIT_MEMBER_NAME(rendered,"rendered");
	 ::openfl::_internal::symbols::SWFSymbol_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val StaticTextSymbol_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { return ::hx::Val( matrix ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"records") ) { return ::hx::Val( records ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rendered") ) { return ::hx::Val( rendered ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__createObject") ) { return ::hx::Val( _hx___createObject_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val StaticTextSymbol_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"records") ) { records=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rendered") ) { rendered=inValue.Cast<  ::openfl::text::StaticText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StaticTextSymbol_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("matrix",41,36,c8,bb));
	outFields->push(HX_("records",c2,48,fb,30));
	outFields->push(HX_("rendered",35,c5,db,b2));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo StaticTextSymbol_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(int)offsetof(StaticTextSymbol_obj,matrix),HX_("matrix",41,36,c8,bb)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(StaticTextSymbol_obj,records),HX_("records",c2,48,fb,30)},
	{::hx::fsObject /*  ::openfl::text::StaticText */ ,(int)offsetof(StaticTextSymbol_obj,rendered),HX_("rendered",35,c5,db,b2)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *StaticTextSymbol_obj_sStaticStorageInfo = 0;
#endif

static ::String StaticTextSymbol_obj_sMemberFields[] = {
	HX_("matrix",41,36,c8,bb),
	HX_("records",c2,48,fb,30),
	HX_("rendered",35,c5,db,b2),
	HX_("__createObject",fb,41,55,58),
	::String(null()) };

::hx::Class StaticTextSymbol_obj::__mClass;

void StaticTextSymbol_obj::__register()
{
	StaticTextSymbol_obj _hx_dummy;
	StaticTextSymbol_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl._internal.symbols.StaticTextSymbol",36,28,1f,3c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StaticTextSymbol_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StaticTextSymbol_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StaticTextSymbol_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StaticTextSymbol_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace symbols
