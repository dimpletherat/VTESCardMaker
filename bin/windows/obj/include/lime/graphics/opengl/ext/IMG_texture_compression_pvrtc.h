// Generated by Haxe 4.1.0
#ifndef INCLUDED_lime_graphics_opengl_ext_IMG_texture_compression_pvrtc
#define INCLUDED_lime_graphics_opengl_ext_IMG_texture_compression_pvrtc

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_7f8e4f7c75ceaac2_4_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,IMG_texture_compression_pvrtc)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES IMG_texture_compression_pvrtc_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef IMG_texture_compression_pvrtc_obj OBJ_;
		IMG_texture_compression_pvrtc_obj();

	public:
		enum { _hx_ClassId = 0x5415bafc };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.IMG_texture_compression_pvrtc")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.IMG_texture_compression_pvrtc"); }

		inline static ::hx::ObjectPtr< IMG_texture_compression_pvrtc_obj > __new() {
			::hx::ObjectPtr< IMG_texture_compression_pvrtc_obj > __this = new IMG_texture_compression_pvrtc_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< IMG_texture_compression_pvrtc_obj > __alloc(::hx::Ctx *_hx_ctx) {
			IMG_texture_compression_pvrtc_obj *__this = (IMG_texture_compression_pvrtc_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(IMG_texture_compression_pvrtc_obj), false, "lime.graphics.opengl.ext.IMG_texture_compression_pvrtc"));
			*(void **)__this = IMG_texture_compression_pvrtc_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_7f8e4f7c75ceaac2_4_new)
HXLINE(   9)		( ( ::lime::graphics::opengl::ext::IMG_texture_compression_pvrtc)(__this) )->COMPRESSED_RGBA_PVRTC_2BPPV1_IMG = 35843;
HXLINE(   8)		( ( ::lime::graphics::opengl::ext::IMG_texture_compression_pvrtc)(__this) )->COMPRESSED_RGBA_PVRTC_4BPPV1_IMG = 35842;
HXLINE(   7)		( ( ::lime::graphics::opengl::ext::IMG_texture_compression_pvrtc)(__this) )->COMPRESSED_RGB_PVRTC_2BPPV1_IMG = 35841;
HXLINE(   6)		( ( ::lime::graphics::opengl::ext::IMG_texture_compression_pvrtc)(__this) )->COMPRESSED_RGB_PVRTC_4BPPV1_IMG = 35840;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~IMG_texture_compression_pvrtc_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("IMG_texture_compression_pvrtc",02,61,85,d1); }

		int COMPRESSED_RGB_PVRTC_4BPPV1_IMG;
		int COMPRESSED_RGB_PVRTC_2BPPV1_IMG;
		int COMPRESSED_RGBA_PVRTC_4BPPV1_IMG;
		int COMPRESSED_RGBA_PVRTC_2BPPV1_IMG;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_IMG_texture_compression_pvrtc */ 
