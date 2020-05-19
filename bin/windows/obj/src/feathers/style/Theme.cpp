// Generated by Haxe 4.1.0
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_feathers_style_IDarkModeTheme
#include <feathers/style/IDarkModeTheme.h>
#endif
#ifndef INCLUDED_feathers_style_IStyleObject
#include <feathers/style/IStyleObject.h>
#endif
#ifndef INCLUDED_feathers_style_ITheme
#include <feathers/style/ITheme.h>
#endif
#ifndef INCLUDED_feathers_style_Theme
#include <feathers/style/Theme.h>
#endif
#ifndef INCLUDED_feathers_themes_ClassVariantTheme
#include <feathers/themes/ClassVariantTheme.h>
#endif
#ifndef INCLUDED_feathers_themes_steel_BaseSteelTheme
#include <feathers/themes/steel/BaseSteelTheme.h>
#endif
#ifndef INCLUDED_feathers_themes_steel_DefaultSteelTheme
#include <feathers/themes/steel/DefaultSteelTheme.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_2b62f0e4ac929144_31_get_fallbackTheme,"feathers.style.Theme","get_fallbackTheme",0x214443de,"feathers.style.Theme.get_fallbackTheme","feathers/style/Theme.hx",31,0xdbceadd2)
HX_LOCAL_STACK_FRAME(_hx_pos_2b62f0e4ac929144_49_setTheme,"feathers.style.Theme","setTheme",0x64afb107,"feathers.style.Theme.setTheme","feathers/style/Theme.hx",49,0xdbceadd2)
HX_LOCAL_STACK_FRAME(_hx_pos_2b62f0e4ac929144_79_getTheme,"feathers.style.Theme","getTheme",0xb6525793,"feathers.style.Theme.getTheme","feathers/style/Theme.hx",79,0xdbceadd2)
HX_LOCAL_STACK_FRAME(_hx_pos_2b62f0e4ac929144_41_boot,"feathers.style.Theme","boot",0x67634e32,"feathers.style.Theme.boot","feathers/style/Theme.hx",41,0xdbceadd2)
namespace feathers{
namespace style{

void Theme_obj::__construct() { }

Dynamic Theme_obj::__CreateEmpty() { return new Theme_obj; }

void *Theme_obj::_hx_vtable = 0;

Dynamic Theme_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Theme_obj > _hx_result = new Theme_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Theme_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4250c488;
}

::Dynamic Theme_obj::fallbackTheme;

::Dynamic Theme_obj::get_fallbackTheme(){
            	HX_GC_STACKFRAME(&_hx_pos_2b62f0e4ac929144_31_get_fallbackTheme)
HXLINE(  33)		if (::hx::IsNull( ::feathers::style::Theme_obj::fallbackTheme )) {
HXLINE(  34)			::feathers::style::Theme_obj::fallbackTheme =  ::feathers::themes::steel::DefaultSteelTheme_obj::__alloc( HX_CTX ,null(),null());
            		}
HXLINE(  37)		return ::feathers::style::Theme_obj::fallbackTheme;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Theme_obj,get_fallbackTheme,return )

::Dynamic Theme_obj::primaryTheme;

::Array< ::Dynamic> Theme_obj::roots;

 ::haxe::ds::ObjectMap Theme_obj::rootToTheme;

void Theme_obj::setTheme(::Dynamic theme, ::openfl::display::DisplayObjectContainer root,::hx::Null< bool >  __o_disposeOldTheme){
            		bool disposeOldTheme = __o_disposeOldTheme.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_2b62f0e4ac929144_49_setTheme)
HXLINE(  50)		::Dynamic oldTheme = null();
HXLINE(  51)		if (::hx::IsNull( root )) {
HXLINE(  52)			oldTheme = ::feathers::style::Theme_obj::primaryTheme;
HXLINE(  53)			::feathers::style::Theme_obj::primaryTheme = theme;
            		}
            		else {
HXLINE(  55)			if (::hx::IsNull( ::feathers::style::Theme_obj::roots )) {
HXLINE(  56)				::feathers::style::Theme_obj::roots = ::Array_obj< ::Dynamic>::__new(1)->init(0,root);
HXLINE(  57)				 ::haxe::ds::ObjectMap _g =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
HXDLIN(  57)				_g->set(root,theme);
HXDLIN(  57)				::feathers::style::Theme_obj::rootToTheme = _g;
            			}
            			else {
HXLINE(  59)				oldTheme = ::feathers::style::Theme_obj::rootToTheme->get(root);
HXLINE(  60)				if (::hx::IsNull( oldTheme )) {
HXLINE(  62)					::feathers::style::Theme_obj::roots->push(root);
            				}
HXLINE(  64)				::feathers::style::Theme_obj::rootToTheme->set(root,theme);
            			}
            		}
HXLINE(  67)		bool _hx_tmp;
HXDLIN(  67)		if (::hx::IsNotNull( oldTheme )) {
HXLINE(  67)			_hx_tmp = disposeOldTheme;
            		}
            		else {
HXLINE(  67)			_hx_tmp = false;
            		}
HXDLIN(  67)		if (_hx_tmp) {
HXLINE(  68)			::feathers::style::ITheme_obj::dispose(oldTheme);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Theme_obj,setTheme,(void))

::Dynamic Theme_obj::getTheme(::Dynamic object){
            	HX_STACKFRAME(&_hx_pos_2b62f0e4ac929144_79_getTheme)
HXLINE(  80)		bool _hx_tmp;
HXDLIN(  80)		if (::hx::IsNotNull( ::feathers::style::Theme_obj::roots )) {
HXLINE(  80)			_hx_tmp = ::Std_obj::isOfType(object,( ( ::Dynamic)(::hx::ClassOf< ::openfl::display::DisplayObject >()) ));
            		}
            		else {
HXLINE(  80)			_hx_tmp = false;
            		}
HXDLIN(  80)		if (_hx_tmp) {
HXLINE(  81)			 ::openfl::display::DisplayObject displayObject = ::hx::TCast<  ::openfl::display::DisplayObject >::cast(object);
HXLINE(  82)			{
HXLINE(  82)				int _g = 0;
HXDLIN(  82)				::Array< ::Dynamic> _g1 = ::feathers::style::Theme_obj::roots;
HXDLIN(  82)				while((_g < _g1->length)){
HXLINE(  82)					 ::openfl::display::DisplayObjectContainer root = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObjectContainer >();
HXDLIN(  82)					_g = (_g + 1);
HXLINE(  83)					if (root->contains(displayObject)) {
HXLINE(  84)						return ::feathers::style::Theme_obj::rootToTheme->get(root);
            					}
            				}
            			}
            		}
HXLINE(  88)		if (::hx::IsNotNull( ::feathers::style::Theme_obj::primaryTheme )) {
HXLINE(  89)			return ::feathers::style::Theme_obj::primaryTheme;
            		}
HXLINE(  91)		return ::feathers::style::Theme_obj::get_fallbackTheme();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Theme_obj,getTheme,return )


Theme_obj::Theme_obj()
{
}

bool Theme_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"roots") ) { outValue = ( roots ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setTheme") ) { outValue = setTheme_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getTheme") ) { outValue = getTheme_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"rootToTheme") ) { outValue = ( rootToTheme ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"primaryTheme") ) { outValue = ( primaryTheme ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fallbackTheme") ) { outValue = ( inCallProp == ::hx::paccAlways ? get_fallbackTheme() : fallbackTheme ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_fallbackTheme") ) { outValue = get_fallbackTheme_dyn(); return true; }
	}
	return false;
}

bool Theme_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"roots") ) { roots=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"rootToTheme") ) { rootToTheme=ioValue.Cast<  ::haxe::ds::ObjectMap >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"primaryTheme") ) { primaryTheme=ioValue.Cast< ::Dynamic >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fallbackTheme") ) { fallbackTheme=ioValue.Cast< ::Dynamic >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Theme_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Theme_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(void *) &Theme_obj::fallbackTheme,HX_("fallbackTheme",87,42,b2,1d)},
	{::hx::fsObject /* ::Dynamic */ ,(void *) &Theme_obj::primaryTheme,HX_("primaryTheme",e7,4e,af,0a)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &Theme_obj::roots,HX_("roots",11,70,61,ed)},
	{::hx::fsObject /*  ::haxe::ds::ObjectMap */ ,(void *) &Theme_obj::rootToTheme,HX_("rootToTheme",8c,ec,39,ce)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Theme_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Theme_obj::fallbackTheme,"fallbackTheme");
	HX_MARK_MEMBER_NAME(Theme_obj::primaryTheme,"primaryTheme");
	HX_MARK_MEMBER_NAME(Theme_obj::roots,"roots");
	HX_MARK_MEMBER_NAME(Theme_obj::rootToTheme,"rootToTheme");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Theme_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Theme_obj::fallbackTheme,"fallbackTheme");
	HX_VISIT_MEMBER_NAME(Theme_obj::primaryTheme,"primaryTheme");
	HX_VISIT_MEMBER_NAME(Theme_obj::roots,"roots");
	HX_VISIT_MEMBER_NAME(Theme_obj::rootToTheme,"rootToTheme");
};

#endif

::hx::Class Theme_obj::__mClass;

static ::String Theme_obj_sStaticFields[] = {
	HX_("fallbackTheme",87,42,b2,1d),
	HX_("get_fallbackTheme",de,4d,22,24),
	HX_("primaryTheme",e7,4e,af,0a),
	HX_("roots",11,70,61,ed),
	HX_("rootToTheme",8c,ec,39,ce),
	HX_("setTheme",07,e7,ba,1d),
	HX_("getTheme",93,8d,5d,6f),
	::String(null())
};

void Theme_obj::__register()
{
	Theme_obj _hx_dummy;
	Theme_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.style.Theme",6e,d6,a0,ec);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Theme_obj::__GetStatic;
	__mClass->mSetStaticField = &Theme_obj::__SetStatic;
	__mClass->mMarkFunc = Theme_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Theme_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Theme_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Theme_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Theme_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Theme_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Theme_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_2b62f0e4ac929144_41_boot)
HXDLIN(  41)		roots = null();
            	}
}

} // end namespace feathers
} // end namespace style
