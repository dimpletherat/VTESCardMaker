// Generated by Haxe 4.1.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandReader
#include <openfl/_internal/renderer/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_MoveToView_Impl_
#include <openfl/_internal/renderer/_DrawCommandReader/MoveToView_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_cb6bac53584ced5e_967__new,"openfl._internal.renderer._DrawCommandReader.MoveToView_Impl_","_new",0x9bdb8896,"openfl._internal.renderer._DrawCommandReader.MoveToView_Impl_._new","openfl/_internal/renderer/DrawCommandReader.hx",967,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_cb6bac53584ced5e_976_get_x,"openfl._internal.renderer._DrawCommandReader.MoveToView_Impl_","get_x",0x5989007a,"openfl._internal.renderer._DrawCommandReader.MoveToView_Impl_.get_x","openfl/_internal/renderer/DrawCommandReader.hx",976,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_cb6bac53584ced5e_983_get_y,"openfl._internal.renderer._DrawCommandReader.MoveToView_Impl_","get_y",0x5989007b,"openfl._internal.renderer._DrawCommandReader.MoveToView_Impl_.get_y","openfl/_internal/renderer/DrawCommandReader.hx",983,0xbbdbd1ae)
namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{

void MoveToView_Impl__obj::__construct() { }

Dynamic MoveToView_Impl__obj::__CreateEmpty() { return new MoveToView_Impl__obj; }

void *MoveToView_Impl__obj::_hx_vtable = 0;

Dynamic MoveToView_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MoveToView_Impl__obj > _hx_result = new MoveToView_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MoveToView_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x69a61807;
}

 ::openfl::_internal::renderer::DrawCommandReader MoveToView_Impl__obj::_new( ::openfl::_internal::renderer::DrawCommandReader d){
            	HX_STACKFRAME(&_hx_pos_cb6bac53584ced5e_967__new)
HXDLIN( 967)		 ::openfl::_internal::renderer::DrawCommandReader this1 = d;
HXDLIN( 967)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MoveToView_Impl__obj,_new,return )

Float MoveToView_Impl__obj::get_x( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_cb6bac53584ced5e_976_get_x)
HXDLIN( 976)		return this1->buffer->f->__get(this1->fPos);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MoveToView_Impl__obj,get_x,return )

Float MoveToView_Impl__obj::get_y( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_cb6bac53584ced5e_983_get_y)
HXDLIN( 983)		return this1->buffer->f->__get((this1->fPos + 1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MoveToView_Impl__obj,get_y,return )


MoveToView_Impl__obj::MoveToView_Impl__obj()
{
}

bool MoveToView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { outValue = get_x_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_y") ) { outValue = get_y_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *MoveToView_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *MoveToView_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class MoveToView_Impl__obj::__mClass;

static ::String MoveToView_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("get_x",4f,a5,60,91),
	HX_("get_y",50,a5,60,91),
	::String(null())
};

void MoveToView_Impl__obj::__register()
{
	MoveToView_Impl__obj _hx_dummy;
	MoveToView_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl._internal.renderer._DrawCommandReader.MoveToView_Impl_",59,b9,76,ef);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MoveToView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MoveToView_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< MoveToView_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MoveToView_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MoveToView_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace _DrawCommandReader
