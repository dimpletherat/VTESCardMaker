// Generated by Haxe 4.1.0
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_OES_texture_float
#include <lime/graphics/opengl/ext/OES_texture_float.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_32892684ce66f7bd_6_new,"lime.graphics.opengl.ext.OES_texture_float","new",0x5171d986,"lime.graphics.opengl.ext.OES_texture_float.new","lime/graphics/opengl/ext/OES_texture_float.hx",6,0x6fb07e4c)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void OES_texture_float_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_32892684ce66f7bd_6_new)
            	}

Dynamic OES_texture_float_obj::__CreateEmpty() { return new OES_texture_float_obj; }

void *OES_texture_float_obj::_hx_vtable = 0;

Dynamic OES_texture_float_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OES_texture_float_obj > _hx_result = new OES_texture_float_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OES_texture_float_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x01c25064;
}


OES_texture_float_obj::OES_texture_float_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *OES_texture_float_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *OES_texture_float_obj_sStaticStorageInfo = 0;
#endif

::hx::Class OES_texture_float_obj::__mClass;

void OES_texture_float_obj::__register()
{
	OES_texture_float_obj _hx_dummy;
	OES_texture_float_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.OES_texture_float",94,5e,61,0c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< OES_texture_float_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OES_texture_float_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OES_texture_float_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
