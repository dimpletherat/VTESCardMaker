// Generated by Haxe 4.1.0
#include <hxcpp.h>

#ifndef INCLUDED_lime_ui_Touch
#include <lime/ui/Touch.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_openfl__internal_utils_TouchData
#include <openfl/_internal/utils/TouchData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_75efee5aa8d131a4_25_new,"openfl._internal.utils.TouchData","new",0x621b4fae,"openfl._internal.utils.TouchData.new","openfl/_internal/utils/TouchData.hx",25,0xb785a0c5)
HX_LOCAL_STACK_FRAME(_hx_pos_75efee5aa8d131a4_29_reset,"openfl._internal.utils.TouchData","reset",0xe8e8b89d,"openfl._internal.utils.TouchData.reset","openfl/_internal/utils/TouchData.hx",29,0xb785a0c5)
HX_LOCAL_STACK_FRAME(_hx_pos_75efee5aa8d131a4_14_boot,"openfl._internal.utils.TouchData","boot",0x6de36924,"openfl._internal.utils.TouchData.boot","openfl/_internal/utils/TouchData.hx",14,0xb785a0c5)
HX_LOCAL_STACK_FRAME(_hx_pos_75efee5aa8d131a4_16_boot,"openfl._internal.utils.TouchData","boot",0x6de36924,"openfl._internal.utils.TouchData.boot","openfl/_internal/utils/TouchData.hx",16,0xb785a0c5)
namespace openfl{
namespace _internal{
namespace utils{

void TouchData_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_75efee5aa8d131a4_25_new)
HXDLIN(  25)		this->rollOutStack = ::Array_obj< ::Dynamic>::__new(0);
            	}

Dynamic TouchData_obj::__CreateEmpty() { return new TouchData_obj; }

void *TouchData_obj::_hx_vtable = 0;

Dynamic TouchData_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TouchData_obj > _hx_result = new TouchData_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TouchData_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x10010164;
}

void TouchData_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_75efee5aa8d131a4_29_reset)
HXLINE(  30)		this->touch = null();
HXLINE(  31)		this->touchDownTarget = null();
HXLINE(  32)		this->touchOverTarget = null();
HXLINE(  34)		this->rollOutStack->removeRange(0,this->rollOutStack->length);
            	}


HX_DEFINE_DYNAMIC_FUNC0(TouchData_obj,reset,(void))

 ::lime::utils::ObjectPool TouchData_obj::_hx___pool;


::hx::ObjectPtr< TouchData_obj > TouchData_obj::__new() {
	::hx::ObjectPtr< TouchData_obj > __this = new TouchData_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< TouchData_obj > TouchData_obj::__alloc(::hx::Ctx *_hx_ctx) {
	TouchData_obj *__this = (TouchData_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TouchData_obj), true, "openfl._internal.utils.TouchData"));
	*(void **)__this = TouchData_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TouchData_obj::TouchData_obj()
{
}

void TouchData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TouchData);
	HX_MARK_MEMBER_NAME(rollOutStack,"rollOutStack");
	HX_MARK_MEMBER_NAME(touch,"touch");
	HX_MARK_MEMBER_NAME(touchDownTarget,"touchDownTarget");
	HX_MARK_MEMBER_NAME(touchOverTarget,"touchOverTarget");
	HX_MARK_END_CLASS();
}

void TouchData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(rollOutStack,"rollOutStack");
	HX_VISIT_MEMBER_NAME(touch,"touch");
	HX_VISIT_MEMBER_NAME(touchDownTarget,"touchDownTarget");
	HX_VISIT_MEMBER_NAME(touchOverTarget,"touchOverTarget");
}

::hx::Val TouchData_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"touch") ) { return ::hx::Val( touch ); }
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"rollOutStack") ) { return ::hx::Val( rollOutStack ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"touchDownTarget") ) { return ::hx::Val( touchDownTarget ); }
		if (HX_FIELD_EQ(inName,"touchOverTarget") ) { return ::hx::Val( touchOverTarget ); }
	}
	return super::__Field(inName,inCallProp);
}

bool TouchData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__pool") ) { outValue = ( _hx___pool ); return true; }
	}
	return false;
}

::hx::Val TouchData_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"touch") ) { touch=inValue.Cast<  ::lime::ui::Touch >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"rollOutStack") ) { rollOutStack=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"touchDownTarget") ) { touchDownTarget=inValue.Cast<  ::openfl::display::InteractiveObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"touchOverTarget") ) { touchOverTarget=inValue.Cast<  ::openfl::display::InteractiveObject >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TouchData_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__pool") ) { _hx___pool=ioValue.Cast<  ::lime::utils::ObjectPool >(); return true; }
	}
	return false;
}

void TouchData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("rollOutStack",77,60,71,65));
	outFields->push(HX_("touch",bf,17,33,14));
	outFields->push(HX_("touchDownTarget",f2,b5,29,4e));
	outFields->push(HX_("touchOverTarget",64,90,c0,f6));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TouchData_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(TouchData_obj,rollOutStack),HX_("rollOutStack",77,60,71,65)},
	{::hx::fsObject /*  ::lime::ui::Touch */ ,(int)offsetof(TouchData_obj,touch),HX_("touch",bf,17,33,14)},
	{::hx::fsObject /*  ::openfl::display::InteractiveObject */ ,(int)offsetof(TouchData_obj,touchDownTarget),HX_("touchDownTarget",f2,b5,29,4e)},
	{::hx::fsObject /*  ::openfl::display::InteractiveObject */ ,(int)offsetof(TouchData_obj,touchOverTarget),HX_("touchOverTarget",64,90,c0,f6)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo TouchData_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::lime::utils::ObjectPool */ ,(void *) &TouchData_obj::_hx___pool,HX_("__pool",fc,e3,54,f9)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String TouchData_obj_sMemberFields[] = {
	HX_("rollOutStack",77,60,71,65),
	HX_("touch",bf,17,33,14),
	HX_("touchDownTarget",f2,b5,29,4e),
	HX_("touchOverTarget",64,90,c0,f6),
	HX_("reset",cf,49,c8,e6),
	::String(null()) };

static void TouchData_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TouchData_obj::_hx___pool,"__pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TouchData_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TouchData_obj::_hx___pool,"__pool");
};

#endif

::hx::Class TouchData_obj::__mClass;

static ::String TouchData_obj_sStaticFields[] = {
	HX_("__pool",fc,e3,54,f9),
	::String(null())
};

void TouchData_obj::__register()
{
	TouchData_obj _hx_dummy;
	TouchData_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl._internal.utils.TouchData",bc,a0,3a,42);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TouchData_obj::__GetStatic;
	__mClass->mSetStaticField = &TouchData_obj::__SetStatic;
	__mClass->mMarkFunc = TouchData_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TouchData_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TouchData_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TouchData_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TouchData_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TouchData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TouchData_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TouchData_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_75efee5aa8d131a4_14_boot)
HXDLIN(  14)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("touch",bf,17,33,14), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c)))))))
            			->setFixed(1,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::openfl::_internal::utils::TouchData _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_75efee5aa8d131a4_16_boot)
HXDLIN(  16)			return  ::openfl::_internal::utils::TouchData_obj::__alloc( HX_CTX );
            		}
            		HX_END_LOCAL_FUNC0(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            		void _hx_run( ::openfl::_internal::utils::TouchData data){
            			HX_STACKFRAME(&_hx_pos_75efee5aa8d131a4_16_boot)
HXDLIN(  16)			data->reset();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_75efee5aa8d131a4_16_boot)
HXDLIN(  16)		_hx___pool =  ::lime::utils::ObjectPool_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0()), ::Dynamic(new _hx_Closure_1()),null());
            	}
}

} // end namespace openfl
} // end namespace _internal
} // end namespace utils
