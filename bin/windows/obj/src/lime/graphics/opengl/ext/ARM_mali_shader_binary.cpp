// Generated by Haxe 4.1.0
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_ARM_mali_shader_binary
#include <lime/graphics/opengl/ext/ARM_mali_shader_binary.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e18d77e874350d8f_6_new,"lime.graphics.opengl.ext.ARM_mali_shader_binary","new",0x83002564,"lime.graphics.opengl.ext.ARM_mali_shader_binary.new","lime/graphics/opengl/ext/ARM_mali_shader_binary.hx",6,0xd9cea1aa)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void ARM_mali_shader_binary_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_e18d77e874350d8f_6_new)
HXDLIN(   6)		this->MALI_SHADER_BINARY_ARM = 36704;
            	}

Dynamic ARM_mali_shader_binary_obj::__CreateEmpty() { return new ARM_mali_shader_binary_obj; }

void *ARM_mali_shader_binary_obj::_hx_vtable = 0;

Dynamic ARM_mali_shader_binary_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ARM_mali_shader_binary_obj > _hx_result = new ARM_mali_shader_binary_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ARM_mali_shader_binary_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x62f073de;
}


ARM_mali_shader_binary_obj::ARM_mali_shader_binary_obj()
{
}

::hx::Val ARM_mali_shader_binary_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 22:
		if (HX_FIELD_EQ(inName,"MALI_SHADER_BINARY_ARM") ) { return ::hx::Val( MALI_SHADER_BINARY_ARM ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ARM_mali_shader_binary_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 22:
		if (HX_FIELD_EQ(inName,"MALI_SHADER_BINARY_ARM") ) { MALI_SHADER_BINARY_ARM=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ARM_mali_shader_binary_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("MALI_SHADER_BINARY_ARM",aa,a5,4b,82));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ARM_mali_shader_binary_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(ARM_mali_shader_binary_obj,MALI_SHADER_BINARY_ARM),HX_("MALI_SHADER_BINARY_ARM",aa,a5,4b,82)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ARM_mali_shader_binary_obj_sStaticStorageInfo = 0;
#endif

static ::String ARM_mali_shader_binary_obj_sMemberFields[] = {
	HX_("MALI_SHADER_BINARY_ARM",aa,a5,4b,82),
	::String(null()) };

::hx::Class ARM_mali_shader_binary_obj::__mClass;

void ARM_mali_shader_binary_obj::__register()
{
	ARM_mali_shader_binary_obj _hx_dummy;
	ARM_mali_shader_binary_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.ARM_mali_shader_binary",72,e3,e8,36);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ARM_mali_shader_binary_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ARM_mali_shader_binary_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ARM_mali_shader_binary_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ARM_mali_shader_binary_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
