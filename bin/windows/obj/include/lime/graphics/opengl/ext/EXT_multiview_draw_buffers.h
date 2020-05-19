// Generated by Haxe 4.1.0
#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_multiview_draw_buffers
#define INCLUDED_lime_graphics_opengl_ext_EXT_multiview_draw_buffers

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_36278e956d66cc9e_4_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,EXT_multiview_draw_buffers)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES EXT_multiview_draw_buffers_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef EXT_multiview_draw_buffers_obj OBJ_;
		EXT_multiview_draw_buffers_obj();

	public:
		enum { _hx_ClassId = 0x29e98b69 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.EXT_multiview_draw_buffers")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.EXT_multiview_draw_buffers"); }

		inline static ::hx::ObjectPtr< EXT_multiview_draw_buffers_obj > __new() {
			::hx::ObjectPtr< EXT_multiview_draw_buffers_obj > __this = new EXT_multiview_draw_buffers_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< EXT_multiview_draw_buffers_obj > __alloc(::hx::Ctx *_hx_ctx) {
			EXT_multiview_draw_buffers_obj *__this = (EXT_multiview_draw_buffers_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EXT_multiview_draw_buffers_obj), false, "lime.graphics.opengl.ext.EXT_multiview_draw_buffers"));
			*(void **)__this = EXT_multiview_draw_buffers_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_36278e956d66cc9e_4_new)
HXLINE(  10)		( ( ::lime::graphics::opengl::ext::EXT_multiview_draw_buffers)(__this) )->MAX_MULTIVIEW_BUFFERS_EXT = 37106;
HXLINE(   9)		( ( ::lime::graphics::opengl::ext::EXT_multiview_draw_buffers)(__this) )->READ_BUFFER_EXT = 3074;
HXLINE(   8)		( ( ::lime::graphics::opengl::ext::EXT_multiview_draw_buffers)(__this) )->DRAW_BUFFER_EXT = 3073;
HXLINE(   7)		( ( ::lime::graphics::opengl::ext::EXT_multiview_draw_buffers)(__this) )->MULTIVIEW_EXT = 37105;
HXLINE(   6)		( ( ::lime::graphics::opengl::ext::EXT_multiview_draw_buffers)(__this) )->COLOR_ATTACHMENT_EXT = 37104;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EXT_multiview_draw_buffers_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EXT_multiview_draw_buffers",f7,b6,e5,c5); }

		int COLOR_ATTACHMENT_EXT;
		int MULTIVIEW_EXT;
		int DRAW_BUFFER_EXT;
		int READ_BUFFER_EXT;
		int MAX_MULTIVIEW_BUFFERS_EXT;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_EXT_multiview_draw_buffers */ 
