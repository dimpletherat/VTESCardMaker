// Generated by Haxe 4.1.0
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_ANGLE_framebuffer_multisample
#include <lime/graphics/opengl/ext/ANGLE_framebuffer_multisample.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6ff00ab511a94054_4_new,"lime.graphics.opengl.ext.ANGLE_framebuffer_multisample","new",0x237bdc95,"lime.graphics.opengl.ext.ANGLE_framebuffer_multisample.new","lime/graphics/opengl/ext/ANGLE_framebuffer_multisample.hx",4,0x48b2bd1d)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void ANGLE_framebuffer_multisample_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_6ff00ab511a94054_4_new)
HXLINE(   8)		this->MAX_SAMPLES_ANGLE = 36183;
HXLINE(   7)		this->FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_ANGLE = 36182;
HXLINE(   6)		this->RENDERBUFFER_SAMPLES_ANGLE = 36011;
            	}

Dynamic ANGLE_framebuffer_multisample_obj::__CreateEmpty() { return new ANGLE_framebuffer_multisample_obj; }

void *ANGLE_framebuffer_multisample_obj::_hx_vtable = 0;

Dynamic ANGLE_framebuffer_multisample_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ANGLE_framebuffer_multisample_obj > _hx_result = new ANGLE_framebuffer_multisample_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ANGLE_framebuffer_multisample_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0f9e64d3;
}


ANGLE_framebuffer_multisample_obj::ANGLE_framebuffer_multisample_obj()
{
}

::hx::Val ANGLE_framebuffer_multisample_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"MAX_SAMPLES_ANGLE") ) { return ::hx::Val( MAX_SAMPLES_ANGLE ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_SAMPLES_ANGLE") ) { return ::hx::Val( RENDERBUFFER_SAMPLES_ANGLE ); }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_ANGLE") ) { return ::hx::Val( FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_ANGLE ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ANGLE_framebuffer_multisample_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"MAX_SAMPLES_ANGLE") ) { MAX_SAMPLES_ANGLE=inValue.Cast< int >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_SAMPLES_ANGLE") ) { RENDERBUFFER_SAMPLES_ANGLE=inValue.Cast< int >(); return inValue; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_ANGLE") ) { FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_ANGLE=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ANGLE_framebuffer_multisample_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("RENDERBUFFER_SAMPLES_ANGLE",34,90,45,07));
	outFields->push(HX_("FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_ANGLE",48,8a,b1,c4));
	outFields->push(HX_("MAX_SAMPLES_ANGLE",62,e6,01,b7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ANGLE_framebuffer_multisample_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(ANGLE_framebuffer_multisample_obj,RENDERBUFFER_SAMPLES_ANGLE),HX_("RENDERBUFFER_SAMPLES_ANGLE",34,90,45,07)},
	{::hx::fsInt,(int)offsetof(ANGLE_framebuffer_multisample_obj,FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_ANGLE),HX_("FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_ANGLE",48,8a,b1,c4)},
	{::hx::fsInt,(int)offsetof(ANGLE_framebuffer_multisample_obj,MAX_SAMPLES_ANGLE),HX_("MAX_SAMPLES_ANGLE",62,e6,01,b7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ANGLE_framebuffer_multisample_obj_sStaticStorageInfo = 0;
#endif

static ::String ANGLE_framebuffer_multisample_obj_sMemberFields[] = {
	HX_("RENDERBUFFER_SAMPLES_ANGLE",34,90,45,07),
	HX_("FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_ANGLE",48,8a,b1,c4),
	HX_("MAX_SAMPLES_ANGLE",62,e6,01,b7),
	::String(null()) };

::hx::Class ANGLE_framebuffer_multisample_obj::__mClass;

void ANGLE_framebuffer_multisample_obj::__register()
{
	ANGLE_framebuffer_multisample_obj _hx_dummy;
	ANGLE_framebuffer_multisample_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.ANGLE_framebuffer_multisample",23,ee,aa,e2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ANGLE_framebuffer_multisample_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ANGLE_framebuffer_multisample_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ANGLE_framebuffer_multisample_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ANGLE_framebuffer_multisample_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
