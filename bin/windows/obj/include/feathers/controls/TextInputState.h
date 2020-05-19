// Generated by Haxe 4.1.0
#ifndef INCLUDED_feathers_controls_TextInputState
#define INCLUDED_feathers_controls_TextInputState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,controls,TextInputState)
namespace feathers{
namespace controls{


class TextInputState_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef TextInputState_obj OBJ_;

	public:
		TextInputState_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("feathers.controls.TextInputState",4e,6a,c9,e3); }
		::String __ToString() const { return HX_("TextInputState.",da,1c,4d,0d) + _hx_tag; }

		static ::feathers::controls::TextInputState DISABLED;
		static inline ::feathers::controls::TextInputState DISABLED_dyn() { return DISABLED; }
		static ::feathers::controls::TextInputState ENABLED;
		static inline ::feathers::controls::TextInputState ENABLED_dyn() { return ENABLED; }
		static ::feathers::controls::TextInputState ERROR;
		static inline ::feathers::controls::TextInputState ERROR_dyn() { return ERROR; }
		static ::feathers::controls::TextInputState FOCUSED;
		static inline ::feathers::controls::TextInputState FOCUSED_dyn() { return FOCUSED; }
};

} // end namespace feathers
} // end namespace controls

#endif /* INCLUDED_feathers_controls_TextInputState */ 
