// Generated by Haxe 4.1.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasBitmap
#include <openfl/_internal/renderer/canvas/CanvasBitmap.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_CanvasRenderer
#include <openfl/display/CanvasRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_2b98ee52b048188b_15_render,"openfl._internal.renderer.canvas.CanvasBitmap","render",0x768a0e62,"openfl._internal.renderer.canvas.CanvasBitmap.render","openfl/_internal/renderer/canvas/CanvasBitmap.hx",15,0x093d64fa)
HX_LOCAL_STACK_FRAME(_hx_pos_2b98ee52b048188b_12_boot,"openfl._internal.renderer.canvas.CanvasBitmap","boot",0x08010c3e,"openfl._internal.renderer.canvas.CanvasBitmap.boot","openfl/_internal/renderer/canvas/CanvasBitmap.hx",12,0x093d64fa)
namespace openfl{
namespace _internal{
namespace renderer{
namespace canvas{

void CanvasBitmap_obj::__construct() { }

Dynamic CanvasBitmap_obj::__CreateEmpty() { return new CanvasBitmap_obj; }

void *CanvasBitmap_obj::_hx_vtable = 0;

Dynamic CanvasBitmap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CanvasBitmap_obj > _hx_result = new CanvasBitmap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CanvasBitmap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7ec5c966;
}

void CanvasBitmap_obj::render( ::openfl::display::Bitmap bitmap, ::openfl::display::CanvasRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_2b98ee52b048188b_15_render)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasBitmap_obj,render,(void))


CanvasBitmap_obj::CanvasBitmap_obj()
{
}

bool CanvasBitmap_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CanvasBitmap_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CanvasBitmap_obj_sStaticStorageInfo = 0;
#endif

::hx::Class CanvasBitmap_obj::__mClass;

static ::String CanvasBitmap_obj_sStaticFields[] = {
	HX_("render",56,6b,29,05),
	::String(null())
};

void CanvasBitmap_obj::__register()
{
	CanvasBitmap_obj _hx_dummy;
	CanvasBitmap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl._internal.renderer.canvas.CanvasBitmap",e2,d3,73,1e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CanvasBitmap_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CanvasBitmap_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CanvasBitmap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CanvasBitmap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CanvasBitmap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CanvasBitmap_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_2b98ee52b048188b_12_boot)
HXDLIN(  12)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace canvas
