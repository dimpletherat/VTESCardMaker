// Generated by Haxe 4.1.0
#ifndef INCLUDED_openfl_display__StageQuality_StageQuality_Impl_
#define INCLUDED_openfl_display__StageQuality_StageQuality_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,display,_StageQuality,StageQuality_Impl_)

namespace openfl{
namespace display{
namespace _StageQuality{


class HXCPP_CLASS_ATTRIBUTES StageQuality_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef StageQuality_Impl__obj OBJ_;
		StageQuality_Impl__obj();

	public:
		enum { _hx_ClassId = 0x08aa0033 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._StageQuality.StageQuality_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display._StageQuality.StageQuality_Impl_"); }

		inline static ::hx::ObjectPtr< StageQuality_Impl__obj > __new() {
			::hx::ObjectPtr< StageQuality_Impl__obj > __this = new StageQuality_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< StageQuality_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			StageQuality_Impl__obj *__this = (StageQuality_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StageQuality_Impl__obj), false, "openfl.display._StageQuality.StageQuality_Impl_"));
			*(void **)__this = StageQuality_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StageQuality_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StageQuality_Impl_",21,85,e4,fb); }

		static void __boot();
		static  ::Dynamic BEST;
		static  ::Dynamic HIGH;
		static  ::Dynamic LOW;
		static  ::Dynamic MEDIUM;
		static  ::Dynamic fromString(::String value);
		static ::Dynamic fromString_dyn();

		static ::String toString( ::Dynamic this1);
		static ::Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _StageQuality

#endif /* INCLUDED_openfl_display__StageQuality_StageQuality_Impl_ */ 
