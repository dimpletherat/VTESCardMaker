// Generated by Haxe 4.1.0
#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_backend_native_SensorEventInfo
#include <lime/_internal/backend/native/SensorEventInfo.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_60e5fd49cce3a06e_844_new,"lime._internal.backend.native.SensorEventInfo","new",0xcd81dd2e,"lime._internal.backend.native.SensorEventInfo.new","lime/_internal/backend/native/NativeApplication.hx",844,0xc1eba895)
HX_LOCAL_STACK_FRAME(_hx_pos_60e5fd49cce3a06e_854_clone,"lime._internal.backend.native.SensorEventInfo","clone",0x46c86fab,"lime._internal.backend.native.SensorEventInfo.clone","lime/_internal/backend/native/NativeApplication.hx",854,0xc1eba895)
namespace lime{
namespace _internal{
namespace backend{
namespace native{

void SensorEventInfo_obj::__construct( ::Dynamic type,::hx::Null< int >  __o_id,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z){
            		int id = __o_id.Default(0);
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            		Float z = __o_z.Default(0);
            	HX_STACKFRAME(&_hx_pos_60e5fd49cce3a06e_844_new)
HXLINE( 845)		this->type = ( (int)(type) );
HXLINE( 846)		this->id = id;
HXLINE( 847)		this->x = x;
HXLINE( 848)		this->y = y;
HXLINE( 849)		this->z = z;
            	}

Dynamic SensorEventInfo_obj::__CreateEmpty() { return new SensorEventInfo_obj; }

void *SensorEventInfo_obj::_hx_vtable = 0;

Dynamic SensorEventInfo_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SensorEventInfo_obj > _hx_result = new SensorEventInfo_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool SensorEventInfo_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3e27670a;
}

 ::lime::_internal::backend::native::SensorEventInfo SensorEventInfo_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_60e5fd49cce3a06e_854_clone)
HXDLIN( 854)		return  ::lime::_internal::backend::native::SensorEventInfo_obj::__alloc( HX_CTX ,this->type,this->id,this->x,this->y,this->z);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SensorEventInfo_obj,clone,return )


SensorEventInfo_obj::SensorEventInfo_obj()
{
}

::hx::Val SensorEventInfo_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		if (HX_FIELD_EQ(inName,"z") ) { return ::hx::Val( z ); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( id ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SensorEventInfo_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SensorEventInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("z",7a,00,00,00));
	outFields->push(HX_("type",ba,f2,08,4d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SensorEventInfo_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(SensorEventInfo_obj,id),HX_("id",db,5b,00,00)},
	{::hx::fsFloat,(int)offsetof(SensorEventInfo_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(SensorEventInfo_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsFloat,(int)offsetof(SensorEventInfo_obj,z),HX_("z",7a,00,00,00)},
	{::hx::fsInt,(int)offsetof(SensorEventInfo_obj,type),HX_("type",ba,f2,08,4d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SensorEventInfo_obj_sStaticStorageInfo = 0;
#endif

static ::String SensorEventInfo_obj_sMemberFields[] = {
	HX_("id",db,5b,00,00),
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("z",7a,00,00,00),
	HX_("type",ba,f2,08,4d),
	HX_("clone",5d,13,63,48),
	::String(null()) };

::hx::Class SensorEventInfo_obj::__mClass;

void SensorEventInfo_obj::__register()
{
	SensorEventInfo_obj _hx_dummy;
	SensorEventInfo_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime._internal.backend.native.SensorEventInfo",3c,6e,ec,28);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SensorEventInfo_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SensorEventInfo_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SensorEventInfo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SensorEventInfo_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace _internal
} // end namespace backend
} // end namespace native
