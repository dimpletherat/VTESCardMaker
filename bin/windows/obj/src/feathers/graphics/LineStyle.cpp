// Generated by Haxe 4.1.0
#include <hxcpp.h>

#ifndef INCLUDED_feathers_graphics_LineStyle
#include <feathers/graphics/LineStyle.h>
#endif
namespace feathers{
namespace graphics{

::feathers::graphics::LineStyle LineStyle_obj::Gradient(Float thickness, ::Dynamic type,::Array< int > colors,::Array< Float > alphas,::Array< int > ratios, ::Dynamic radians, ::Dynamic spreadMethod, ::Dynamic interpolationMethod, ::Dynamic focalPointRatio)
{
	return ::hx::CreateEnum< LineStyle_obj >(HX_("Gradient",10,f6,f0,03),1,9)->_hx_init(0,thickness)->_hx_init(1,type)->_hx_init(2,colors)->_hx_init(3,alphas)->_hx_init(4,ratios)->_hx_init(5,radians)->_hx_init(6,spreadMethod)->_hx_init(7,interpolationMethod)->_hx_init(8,focalPointRatio);
}

::feathers::graphics::LineStyle LineStyle_obj::SolidColor( ::Dynamic thickness, ::Dynamic color, ::Dynamic alpha, ::Dynamic pixelHinting, ::Dynamic scaleMode, ::Dynamic caps, ::Dynamic joints, ::Dynamic miterLimit)
{
	return ::hx::CreateEnum< LineStyle_obj >(HX_("SolidColor",58,35,a1,d7),0,8)->_hx_init(0,thickness)->_hx_init(1,color)->_hx_init(2,alpha)->_hx_init(3,pixelHinting)->_hx_init(4,scaleMode)->_hx_init(5,caps)->_hx_init(6,joints)->_hx_init(7,miterLimit);
}

bool LineStyle_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Gradient",10,f6,f0,03)) { outValue = LineStyle_obj::Gradient_dyn(); return true; }
	if (inName==HX_("SolidColor",58,35,a1,d7)) { outValue = LineStyle_obj::SolidColor_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(LineStyle_obj)

int LineStyle_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Gradient",10,f6,f0,03)) return 1;
	if (inName==HX_("SolidColor",58,35,a1,d7)) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC9(LineStyle_obj,Gradient,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC8(LineStyle_obj,SolidColor,return)

int LineStyle_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Gradient",10,f6,f0,03)) return 9;
	if (inName==HX_("SolidColor",58,35,a1,d7)) return 8;
	return super::__FindArgCount(inName);
}

::hx::Val LineStyle_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Gradient",10,f6,f0,03)) return Gradient_dyn();
	if (inName==HX_("SolidColor",58,35,a1,d7)) return SolidColor_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String LineStyle_obj_sStaticFields[] = {
	HX_("SolidColor",58,35,a1,d7),
	HX_("Gradient",10,f6,f0,03),
	::String(null())
};

::hx::Class LineStyle_obj::__mClass;

Dynamic __Create_LineStyle_obj() { return new LineStyle_obj; }

void LineStyle_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("feathers.graphics.LineStyle",d8,bb,ac,e5), ::hx::TCanCast< LineStyle_obj >,LineStyle_obj_sStaticFields,0,
	&__Create_LineStyle_obj, &__Create,
	&super::__SGetClass(), &CreateLineStyle_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &LineStyle_obj::__GetStatic;
}

void LineStyle_obj::__boot()
{
}


} // end namespace feathers
} // end namespace graphics
