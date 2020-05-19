// Generated by Haxe 4.1.0
#ifndef INCLUDED_feathers_themes_steel_components_SteelComboBoxStyles
#define INCLUDED_feathers_themes_steel_components_SteelComboBoxStyles

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,style,IDarkModeTheme)
HX_DECLARE_CLASS2(feathers,style,ITheme)
HX_DECLARE_CLASS2(feathers,themes,ClassVariantTheme)
HX_DECLARE_CLASS3(feathers,themes,steel,BaseSteelTheme)
HX_DECLARE_CLASS4(feathers,themes,steel,components,SteelComboBoxStyles)

namespace feathers{
namespace themes{
namespace steel{
namespace components{


class HXCPP_CLASS_ATTRIBUTES SteelComboBoxStyles_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SteelComboBoxStyles_obj OBJ_;
		SteelComboBoxStyles_obj();

	public:
		enum { _hx_ClassId = 0x7727c7c7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="feathers.themes.steel.components.SteelComboBoxStyles")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"feathers.themes.steel.components.SteelComboBoxStyles"); }

		inline static ::hx::ObjectPtr< SteelComboBoxStyles_obj > __new() {
			::hx::ObjectPtr< SteelComboBoxStyles_obj > __this = new SteelComboBoxStyles_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< SteelComboBoxStyles_obj > __alloc(::hx::Ctx *_hx_ctx) {
			SteelComboBoxStyles_obj *__this = (SteelComboBoxStyles_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SteelComboBoxStyles_obj), false, "feathers.themes.steel.components.SteelComboBoxStyles"));
			*(void **)__this = SteelComboBoxStyles_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SteelComboBoxStyles_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SteelComboBoxStyles",aa,cb,36,f0); }

		static void initialize( ::feathers::themes::steel::BaseSteelTheme theme);
		static ::Dynamic initialize_dyn();

};

} // end namespace feathers
} // end namespace themes
} // end namespace steel
} // end namespace components

#endif /* INCLUDED_feathers_themes_steel_components_SteelComboBoxStyles */ 
