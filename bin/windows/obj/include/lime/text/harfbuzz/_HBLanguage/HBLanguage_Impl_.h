// Generated by Haxe 4.1.0
#ifndef INCLUDED_lime_text_harfbuzz__HBLanguage_HBLanguage_Impl_
#define INCLUDED_lime_text_harfbuzz__HBLanguage_HBLanguage_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,text,harfbuzz,_HBLanguage,HBLanguage_Impl_)

namespace lime{
namespace text{
namespace harfbuzz{
namespace _HBLanguage{


class HXCPP_CLASS_ATTRIBUTES HBLanguage_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef HBLanguage_Impl__obj OBJ_;
		HBLanguage_Impl__obj();

	public:
		enum { _hx_ClassId = 0x1f86dfa1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.text.harfbuzz._HBLanguage.HBLanguage_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.text.harfbuzz._HBLanguage.HBLanguage_Impl_"); }

		inline static ::hx::ObjectPtr< HBLanguage_Impl__obj > __new() {
			::hx::ObjectPtr< HBLanguage_Impl__obj > __this = new HBLanguage_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< HBLanguage_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			HBLanguage_Impl__obj *__this = (HBLanguage_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HBLanguage_Impl__obj), false, "lime.text.harfbuzz._HBLanguage.HBLanguage_Impl_"));
			*(void **)__this = HBLanguage_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~HBLanguage_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("HBLanguage_Impl_",92,e3,db,48); }

		static  ::Dynamic _new(::String language);
		static ::Dynamic _new_dyn();

		static ::String toString( ::Dynamic this1);
		static ::Dynamic toString_dyn();

		static  ::Dynamic fromString(::String value);
		static ::Dynamic fromString_dyn();

};

} // end namespace lime
} // end namespace text
} // end namespace harfbuzz
} // end namespace _HBLanguage

#endif /* INCLUDED_lime_text_harfbuzz__HBLanguage_HBLanguage_Impl_ */ 
