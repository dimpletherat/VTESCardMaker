// Generated by Haxe 4.1.0
#ifndef INCLUDED_feathers_skins_UnderlineSkin
#define INCLUDED_feathers_skins_UnderlineSkin

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_feathers_skins_BaseGraphicsPathSkin
#include <feathers/skins/BaseGraphicsPathSkin.h>
#endif
HX_DECLARE_CLASS2(feathers,core,IDisplayObject)
HX_DECLARE_CLASS2(feathers,core,IMeasureObject)
HX_DECLARE_CLASS2(feathers,core,IStateObserver)
HX_DECLARE_CLASS2(feathers,core,IValidating)
HX_DECLARE_CLASS2(feathers,core,MeasureSprite)
HX_DECLARE_CLASS2(feathers,core,ValidatingSprite)
HX_DECLARE_CLASS2(feathers,skins,BaseGraphicsPathSkin)
HX_DECLARE_CLASS2(feathers,skins,UnderlineSkin)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace skins{


class HXCPP_CLASS_ATTRIBUTES UnderlineSkin_obj : public  ::feathers::skins::BaseGraphicsPathSkin_obj
{
	public:
		typedef  ::feathers::skins::BaseGraphicsPathSkin_obj super;
		typedef UnderlineSkin_obj OBJ_;
		UnderlineSkin_obj();

	public:
		enum { _hx_ClassId = 0x1a956aa3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.skins.UnderlineSkin")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.skins.UnderlineSkin"); }
		static ::hx::ObjectPtr< UnderlineSkin_obj > __new();
		static ::hx::ObjectPtr< UnderlineSkin_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~UnderlineSkin_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("UnderlineSkin",89,1d,6d,16); }

		void draw();

};

} // end namespace feathers
} // end namespace skins

#endif /* INCLUDED_feathers_skins_UnderlineSkin */ 
