// Generated by Haxe 4.1.0
#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_LineStyleView_Impl_
#define INCLUDED_openfl__internal_renderer__DrawCommandReader_LineStyleView_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,renderer,DrawCommandReader)
HX_DECLARE_CLASS4(openfl,_internal,renderer,_DrawCommandReader,LineStyleView_Impl_)

namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{


class HXCPP_CLASS_ATTRIBUTES LineStyleView_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef LineStyleView_Impl__obj OBJ_;
		LineStyleView_Impl__obj();

	public:
		enum { _hx_ClassId = 0x2fe8c4e8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_"); }

		inline static ::hx::ObjectPtr< LineStyleView_Impl__obj > __new() {
			::hx::ObjectPtr< LineStyleView_Impl__obj > __this = new LineStyleView_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< LineStyleView_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			LineStyleView_Impl__obj *__this = (LineStyleView_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LineStyleView_Impl__obj), false, "openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_"));
			*(void **)__this = LineStyleView_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LineStyleView_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LineStyleView_Impl_",a2,b3,32,46); }

		static  ::openfl::_internal::renderer::DrawCommandReader _new( ::openfl::_internal::renderer::DrawCommandReader d);
		static ::Dynamic _new_dyn();

		static  ::Dynamic get_thickness( ::openfl::_internal::renderer::DrawCommandReader this1);
		static ::Dynamic get_thickness_dyn();

		static int get_color( ::openfl::_internal::renderer::DrawCommandReader this1);
		static ::Dynamic get_color_dyn();

		static Float get_alpha( ::openfl::_internal::renderer::DrawCommandReader this1);
		static ::Dynamic get_alpha_dyn();

		static bool get_pixelHinting( ::openfl::_internal::renderer::DrawCommandReader this1);
		static ::Dynamic get_pixelHinting_dyn();

		static  ::Dynamic get_scaleMode( ::openfl::_internal::renderer::DrawCommandReader this1);
		static ::Dynamic get_scaleMode_dyn();

		static  ::Dynamic get_caps( ::openfl::_internal::renderer::DrawCommandReader this1);
		static ::Dynamic get_caps_dyn();

		static  ::Dynamic get_joints( ::openfl::_internal::renderer::DrawCommandReader this1);
		static ::Dynamic get_joints_dyn();

		static Float get_miterLimit( ::openfl::_internal::renderer::DrawCommandReader this1);
		static ::Dynamic get_miterLimit_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace _DrawCommandReader

#endif /* INCLUDED_openfl__internal_renderer__DrawCommandReader_LineStyleView_Impl_ */ 
