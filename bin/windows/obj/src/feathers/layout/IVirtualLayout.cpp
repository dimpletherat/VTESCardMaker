// Generated by Haxe 4.1.0
#include <hxcpp.h>

#ifndef INCLUDED_feathers_layout_ILayout
#include <feathers/layout/ILayout.h>
#endif
#ifndef INCLUDED_feathers_layout_IScrollLayout
#include <feathers/layout/IScrollLayout.h>
#endif
#ifndef INCLUDED_feathers_layout_IVirtualLayout
#include <feathers/layout/IVirtualLayout.h>
#endif
#ifndef INCLUDED_feathers_layout_VirtualLayoutRange
#include <feathers/layout/VirtualLayoutRange.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

namespace feathers{
namespace layout{


static ::String IVirtualLayout_obj_sMemberFields[] = {
	HX_("get_virtualCache",c0,90,1f,4d),
	HX_("set_virtualCache",34,7e,61,a3),
	HX_("getVisibleIndices",0b,78,6a,0a),
	::String(null()) };

::hx::Class IVirtualLayout_obj::__mClass;

void IVirtualLayout_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.layout.IVirtualLayout",52,ec,81,36);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IVirtualLayout_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x3aa17e26 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace layout
