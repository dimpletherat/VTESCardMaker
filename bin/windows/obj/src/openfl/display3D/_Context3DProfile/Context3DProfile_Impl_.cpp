// Generated by Haxe 4.1.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D__Context3DProfile_Context3DProfile_Impl_
#include <openfl/display3D/_Context3DProfile/Context3DProfile_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_ee23285ac806d27a_84_fromString,"openfl.display3D._Context3DProfile.Context3DProfile_Impl_","fromString",0xdbdb0761,"openfl.display3D._Context3DProfile.Context3DProfile_Impl_.fromString","openfl/display3D/Context3DProfile.hx",84,0x8638b9ba)
HX_LOCAL_STACK_FRAME(_hx_pos_ee23285ac806d27a_102_toString,"openfl.display3D._Context3DProfile.Context3DProfile_Impl_","toString",0xda661cb2,"openfl.display3D._Context3DProfile.Context3DProfile_Impl_.toString","openfl/display3D/Context3DProfile.hx",102,0x8638b9ba)
HX_LOCAL_STACK_FRAME(_hx_pos_ee23285ac806d27a_19_boot,"openfl.display3D._Context3DProfile.Context3DProfile_Impl_","boot",0x742ed538,"openfl.display3D._Context3DProfile.Context3DProfile_Impl_.boot","openfl/display3D/Context3DProfile.hx",19,0x8638b9ba)
HX_LOCAL_STACK_FRAME(_hx_pos_ee23285ac806d27a_42_boot,"openfl.display3D._Context3DProfile.Context3DProfile_Impl_","boot",0x742ed538,"openfl.display3D._Context3DProfile.Context3DProfile_Impl_.boot","openfl/display3D/Context3DProfile.hx",42,0x8638b9ba)
HX_LOCAL_STACK_FRAME(_hx_pos_ee23285ac806d27a_50_boot,"openfl.display3D._Context3DProfile.Context3DProfile_Impl_","boot",0x742ed538,"openfl.display3D._Context3DProfile.Context3DProfile_Impl_.boot","openfl/display3D/Context3DProfile.hx",50,0x8638b9ba)
HX_LOCAL_STACK_FRAME(_hx_pos_ee23285ac806d27a_58_boot,"openfl.display3D._Context3DProfile.Context3DProfile_Impl_","boot",0x742ed538,"openfl.display3D._Context3DProfile.Context3DProfile_Impl_.boot","openfl/display3D/Context3DProfile.hx",58,0x8638b9ba)
HX_LOCAL_STACK_FRAME(_hx_pos_ee23285ac806d27a_66_boot,"openfl.display3D._Context3DProfile.Context3DProfile_Impl_","boot",0x742ed538,"openfl.display3D._Context3DProfile.Context3DProfile_Impl_.boot","openfl/display3D/Context3DProfile.hx",66,0x8638b9ba)
HX_LOCAL_STACK_FRAME(_hx_pos_ee23285ac806d27a_77_boot,"openfl.display3D._Context3DProfile.Context3DProfile_Impl_","boot",0x742ed538,"openfl.display3D._Context3DProfile.Context3DProfile_Impl_.boot","openfl/display3D/Context3DProfile.hx",77,0x8638b9ba)
namespace openfl{
namespace display3D{
namespace _Context3DProfile{

void Context3DProfile_Impl__obj::__construct() { }

Dynamic Context3DProfile_Impl__obj::__CreateEmpty() { return new Context3DProfile_Impl__obj; }

void *Context3DProfile_Impl__obj::_hx_vtable = 0;

Dynamic Context3DProfile_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Context3DProfile_Impl__obj > _hx_result = new Context3DProfile_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Context3DProfile_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x38498dce;
}

 ::Dynamic Context3DProfile_Impl__obj::BASELINE;

 ::Dynamic Context3DProfile_Impl__obj::BASELINE_CONSTRAINED;

 ::Dynamic Context3DProfile_Impl__obj::BASELINE_EXTENDED;

 ::Dynamic Context3DProfile_Impl__obj::STANDARD;

 ::Dynamic Context3DProfile_Impl__obj::STANDARD_CONSTRAINED;

 ::Dynamic Context3DProfile_Impl__obj::STANDARD_EXTENDED;

 ::Dynamic Context3DProfile_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_ee23285ac806d27a_84_fromString)
HXDLIN(  84)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("baseline",85,dc,27,11)) ){
HXLINE(  86)			return 0;
HXDLIN(  86)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("baselineConstrained",d1,73,c8,e8)) ){
HXLINE(  87)			return 1;
HXDLIN(  87)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("baselineExtended",5e,fa,57,d8)) ){
HXLINE(  88)			return 2;
HXDLIN(  88)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("standard",3d,37,78,ea)) ){
HXLINE(  89)			return 3;
HXDLIN(  89)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("standardConstrained",19,24,99,7f)) ){
HXLINE(  90)			return 4;
HXDLIN(  90)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("standardExtended",16,cd,15,fe)) ){
HXLINE(  92)			return 5;
HXDLIN(  92)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  96)			return null();
            		}
            		_hx_goto_0:;
HXLINE(  84)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DProfile_Impl__obj,fromString,return )

::String Context3DProfile_Impl__obj::toString( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_ee23285ac806d27a_102_toString)
HXDLIN( 102)		 ::Dynamic _hx_switch_0 = this1;
            		if (  (_hx_switch_0==0) ){
HXLINE( 104)			return HX_("baseline",85,dc,27,11);
HXDLIN( 104)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==1) ){
HXLINE( 105)			return HX_("baselineConstrained",d1,73,c8,e8);
HXDLIN( 105)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==2) ){
HXLINE( 106)			return HX_("baselineExtended",5e,fa,57,d8);
HXDLIN( 106)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==3) ){
HXLINE( 107)			return HX_("standard",3d,37,78,ea);
HXDLIN( 107)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==4) ){
HXLINE( 108)			return HX_("standardConstrained",19,24,99,7f);
HXDLIN( 108)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==5) ){
HXLINE( 110)			return HX_("standardExtended",16,cd,15,fe);
HXDLIN( 110)			goto _hx_goto_2;
            		}
            		/* default */{
HXLINE( 114)			return null();
            		}
            		_hx_goto_2:;
HXLINE( 102)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DProfile_Impl__obj,toString,return )


Context3DProfile_Impl__obj::Context3DProfile_Impl__obj()
{
}

bool Context3DProfile_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Context3DProfile_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Context3DProfile_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Context3DProfile_Impl__obj::BASELINE,HX_("BASELINE",85,6c,ad,6a)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Context3DProfile_Impl__obj::BASELINE_CONSTRAINED,HX_("BASELINE_CONSTRAINED",3c,9e,1a,00)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Context3DProfile_Impl__obj::BASELINE_EXTENDED,HX_("BASELINE_EXTENDED",f3,b6,e7,2a)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Context3DProfile_Impl__obj::STANDARD,HX_("STANDARD",3d,c7,fd,43)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Context3DProfile_Impl__obj::STANDARD_CONSTRAINED,HX_("STANDARD_CONSTRAINED",f4,2c,e4,5f)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Context3DProfile_Impl__obj::STANDARD_EXTENDED,HX_("STANDARD_EXTENDED",3b,45,42,0b)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Context3DProfile_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DProfile_Impl__obj::BASELINE,"BASELINE");
	HX_MARK_MEMBER_NAME(Context3DProfile_Impl__obj::BASELINE_CONSTRAINED,"BASELINE_CONSTRAINED");
	HX_MARK_MEMBER_NAME(Context3DProfile_Impl__obj::BASELINE_EXTENDED,"BASELINE_EXTENDED");
	HX_MARK_MEMBER_NAME(Context3DProfile_Impl__obj::STANDARD,"STANDARD");
	HX_MARK_MEMBER_NAME(Context3DProfile_Impl__obj::STANDARD_CONSTRAINED,"STANDARD_CONSTRAINED");
	HX_MARK_MEMBER_NAME(Context3DProfile_Impl__obj::STANDARD_EXTENDED,"STANDARD_EXTENDED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Context3DProfile_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DProfile_Impl__obj::BASELINE,"BASELINE");
	HX_VISIT_MEMBER_NAME(Context3DProfile_Impl__obj::BASELINE_CONSTRAINED,"BASELINE_CONSTRAINED");
	HX_VISIT_MEMBER_NAME(Context3DProfile_Impl__obj::BASELINE_EXTENDED,"BASELINE_EXTENDED");
	HX_VISIT_MEMBER_NAME(Context3DProfile_Impl__obj::STANDARD,"STANDARD");
	HX_VISIT_MEMBER_NAME(Context3DProfile_Impl__obj::STANDARD_CONSTRAINED,"STANDARD_CONSTRAINED");
	HX_VISIT_MEMBER_NAME(Context3DProfile_Impl__obj::STANDARD_EXTENDED,"STANDARD_EXTENDED");
};

#endif

::hx::Class Context3DProfile_Impl__obj::__mClass;

static ::String Context3DProfile_Impl__obj_sStaticFields[] = {
	HX_("BASELINE",85,6c,ad,6a),
	HX_("BASELINE_CONSTRAINED",3c,9e,1a,00),
	HX_("BASELINE_EXTENDED",f3,b6,e7,2a),
	HX_("STANDARD",3d,c7,fd,43),
	HX_("STANDARD_CONSTRAINED",f4,2c,e4,5f),
	HX_("STANDARD_EXTENDED",3b,45,42,0b),
	HX_("fromString",db,2d,74,54),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void Context3DProfile_Impl__obj::__register()
{
	Context3DProfile_Impl__obj _hx_dummy;
	Context3DProfile_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display3D._Context3DProfile.Context3DProfile_Impl_",28,ad,4e,ea);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DProfile_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Context3DProfile_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Context3DProfile_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Context3DProfile_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Context3DProfile_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Context3DProfile_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Context3DProfile_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Context3DProfile_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_ee23285ac806d27a_19_boot)
HXDLIN(  19)		BASELINE = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ee23285ac806d27a_42_boot)
HXDLIN(  42)		BASELINE_CONSTRAINED = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ee23285ac806d27a_50_boot)
HXDLIN(  50)		BASELINE_EXTENDED = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ee23285ac806d27a_58_boot)
HXDLIN(  58)		STANDARD = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ee23285ac806d27a_66_boot)
HXDLIN(  66)		STANDARD_CONSTRAINED = 4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ee23285ac806d27a_77_boot)
HXDLIN(  77)		STANDARD_EXTENDED = 5;
            	}
}

} // end namespace openfl
} // end namespace display3D
} // end namespace _Context3DProfile
