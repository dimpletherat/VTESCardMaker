// Generated by Haxe 4.1.0
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoTextField
#define INCLUDED_openfl__internal_renderer_cairo_CairoTextField

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(openfl,_internal,renderer,cairo,CairoTextField)
HX_DECLARE_CLASS2(openfl,display,CairoRenderer)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,text,TextField)

namespace openfl{
namespace _internal{
namespace renderer{
namespace cairo{


class HXCPP_CLASS_ATTRIBUTES CairoTextField_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CairoTextField_obj OBJ_;
		CairoTextField_obj();

	public:
		enum { _hx_ClassId = 0x1bb6d31e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl._internal.renderer.cairo.CairoTextField")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl._internal.renderer.cairo.CairoTextField"); }

		inline static ::hx::ObjectPtr< CairoTextField_obj > __new() {
			::hx::ObjectPtr< CairoTextField_obj > __this = new CairoTextField_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< CairoTextField_obj > __alloc(::hx::Ctx *_hx_ctx) {
			CairoTextField_obj *__this = (CairoTextField_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CairoTextField_obj), false, "openfl._internal.renderer.cairo.CairoTextField"));
			*(void **)__this = CairoTextField_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CairoTextField_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CairoTextField",45,17,7a,57); }

		static void __boot();
		static  ::Dynamic __meta__;
		static void render( ::openfl::text::TextField textField, ::openfl::display::CairoRenderer renderer, ::openfl::geom::Matrix transform);
		static ::Dynamic render_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace cairo

#endif /* INCLUDED_openfl__internal_renderer_cairo_CairoTextField */ 
