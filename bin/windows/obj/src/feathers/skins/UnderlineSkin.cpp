// Generated by Haxe 4.1.0
#include <hxcpp.h>

#ifndef INCLUDED_feathers_core_IDisplayObject
#include <feathers/core/IDisplayObject.h>
#endif
#ifndef INCLUDED_feathers_core_IMeasureObject
#include <feathers/core/IMeasureObject.h>
#endif
#ifndef INCLUDED_feathers_core_IStateObserver
#include <feathers/core/IStateObserver.h>
#endif
#ifndef INCLUDED_feathers_core_IValidating
#include <feathers/core/IValidating.h>
#endif
#ifndef INCLUDED_feathers_core_MeasureSprite
#include <feathers/core/MeasureSprite.h>
#endif
#ifndef INCLUDED_feathers_core_ValidatingSprite
#include <feathers/core/ValidatingSprite.h>
#endif
#ifndef INCLUDED_feathers_graphics_FillStyle
#include <feathers/graphics/FillStyle.h>
#endif
#ifndef INCLUDED_feathers_graphics_LineStyle
#include <feathers/graphics/LineStyle.h>
#endif
#ifndef INCLUDED_feathers_skins_BaseGraphicsPathSkin
#include <feathers/skins/BaseGraphicsPathSkin.h>
#endif
#ifndef INCLUDED_feathers_skins_UnderlineSkin
#include <feathers/skins/UnderlineSkin.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_069e278267f3094f_26_new,"feathers.skins.UnderlineSkin","new",0xad143265,"feathers.skins.UnderlineSkin.new","feathers/skins/UnderlineSkin.hx",26,0x645b7b6d)
HX_LOCAL_STACK_FRAME(_hx_pos_069e278267f3094f_29_draw,"feathers.skins.UnderlineSkin","draw",0xbe058e5f,"feathers.skins.UnderlineSkin.draw","feathers/skins/UnderlineSkin.hx",29,0x645b7b6d)
namespace feathers{
namespace skins{

void UnderlineSkin_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_069e278267f3094f_26_new)
HXDLIN(  26)		super::__construct();
            	}

Dynamic UnderlineSkin_obj::__CreateEmpty() { return new UnderlineSkin_obj; }

void *UnderlineSkin_obj::_hx_vtable = 0;

Dynamic UnderlineSkin_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< UnderlineSkin_obj > _hx_result = new UnderlineSkin_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool UnderlineSkin_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x093ab78b) {
				if (inClassId<=(int)0x0330636f) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
				} else {
					return inClassId==(int)0x093ab78b;
				}
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x1a956aa3 || inClassId==(int)0x1f4df417;
		}
	} else {
		if (inClassId<=(int)0x58123034) {
			if (inClassId<=(int)0x4af7dd8e) {
				return inClassId==(int)0x33776324 || inClassId==(int)0x4af7dd8e;
			} else {
				return inClassId==(int)0x58123034;
			}
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void UnderlineSkin_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_069e278267f3094f_29_draw)
HXLINE(  30)		 ::feathers::graphics::LineStyle currentBorder = this->getCurrentBorder();
HXLINE(  31)		Float thicknessOffset = (this->getLineThickness(currentBorder) / ((Float)2.0));
HXLINE(  33)		 ::feathers::graphics::FillStyle currentFill = this->getCurrentFill();
HXLINE(  34)		if (::hx::IsNotNull( currentFill )) {
HXLINE(  35)			this->applyFillStyle(currentFill);
HXLINE(  36)			 ::openfl::display::Graphics _hx_tmp = this->get_graphics();
HXDLIN(  36)			_hx_tmp->drawRect(((Float)0.0),((Float)0.0),this->actualWidth,(this->actualHeight - thicknessOffset));
HXLINE(  37)			this->get_graphics()->endFill();
            		}
HXLINE(  39)		this->applyLineStyle(currentBorder);
HXLINE(  40)		 ::openfl::display::Graphics _hx_tmp = this->get_graphics();
HXDLIN(  40)		_hx_tmp->moveTo(thicknessOffset,(this->actualHeight - thicknessOffset));
HXLINE(  41)		 ::openfl::display::Graphics _hx_tmp1 = this->get_graphics();
HXDLIN(  41)		_hx_tmp1->lineTo((this->actualWidth - thicknessOffset),(this->actualHeight - thicknessOffset));
            	}



::hx::ObjectPtr< UnderlineSkin_obj > UnderlineSkin_obj::__new() {
	::hx::ObjectPtr< UnderlineSkin_obj > __this = new UnderlineSkin_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< UnderlineSkin_obj > UnderlineSkin_obj::__alloc(::hx::Ctx *_hx_ctx) {
	UnderlineSkin_obj *__this = (UnderlineSkin_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(UnderlineSkin_obj), true, "feathers.skins.UnderlineSkin"));
	*(void **)__this = UnderlineSkin_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

UnderlineSkin_obj::UnderlineSkin_obj()
{
}

::hx::Val UnderlineSkin_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *UnderlineSkin_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *UnderlineSkin_obj_sStaticStorageInfo = 0;
#endif

static ::String UnderlineSkin_obj_sMemberFields[] = {
	HX_("draw",04,2c,70,42),
	::String(null()) };

::hx::Class UnderlineSkin_obj::__mClass;

void UnderlineSkin_obj::__register()
{
	UnderlineSkin_obj _hx_dummy;
	UnderlineSkin_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.skins.UnderlineSkin",f3,1b,50,6a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(UnderlineSkin_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< UnderlineSkin_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = UnderlineSkin_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = UnderlineSkin_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace skins
