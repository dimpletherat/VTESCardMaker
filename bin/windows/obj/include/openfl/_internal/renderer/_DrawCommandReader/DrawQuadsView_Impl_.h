// Generated by Haxe 4.1.0
#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_DrawQuadsView_Impl_
#define INCLUDED_openfl__internal_renderer__DrawCommandReader_DrawQuadsView_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,IntVector)
HX_DECLARE_CLASS3(openfl,_internal,renderer,DrawCommandReader)
HX_DECLARE_CLASS4(openfl,_internal,renderer,_DrawCommandReader,DrawQuadsView_Impl_)

namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{


class HXCPP_CLASS_ATTRIBUTES DrawQuadsView_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef DrawQuadsView_Impl__obj OBJ_;
		DrawQuadsView_Impl__obj();

	public:
		enum { _hx_ClassId = 0x14dd8333 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl._internal.renderer._DrawCommandReader.DrawQuadsView_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl._internal.renderer._DrawCommandReader.DrawQuadsView_Impl_"); }

		inline static ::hx::ObjectPtr< DrawQuadsView_Impl__obj > __new() {
			::hx::ObjectPtr< DrawQuadsView_Impl__obj > __this = new DrawQuadsView_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< DrawQuadsView_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			DrawQuadsView_Impl__obj *__this = (DrawQuadsView_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DrawQuadsView_Impl__obj), false, "openfl._internal.renderer._DrawCommandReader.DrawQuadsView_Impl_"));
			*(void **)__this = DrawQuadsView_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DrawQuadsView_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DrawQuadsView_Impl_",ed,71,27,2b); }

		static  ::openfl::_internal::renderer::DrawCommandReader _new( ::openfl::_internal::renderer::DrawCommandReader d);
		static ::Dynamic _new_dyn();

		static  ::openfl::_Vector::FloatVector get_rects( ::openfl::_internal::renderer::DrawCommandReader this1);
		static ::Dynamic get_rects_dyn();

		static  ::openfl::_Vector::IntVector get_indices( ::openfl::_internal::renderer::DrawCommandReader this1);
		static ::Dynamic get_indices_dyn();

		static  ::openfl::_Vector::FloatVector get_transforms( ::openfl::_internal::renderer::DrawCommandReader this1);
		static ::Dynamic get_transforms_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace _DrawCommandReader

#endif /* INCLUDED_openfl__internal_renderer__DrawCommandReader_DrawQuadsView_Impl_ */ 
