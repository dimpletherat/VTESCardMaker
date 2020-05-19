// Generated by Haxe 4.1.0
#ifndef INCLUDED_motion__MotionPath_BezierSplinePath
#define INCLUDED_motion__MotionPath_BezierSplinePath

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_motion__MotionPath_ComponentPath
#include <motion/_MotionPath/ComponentPath.h>
#endif
HX_DECLARE_CLASS1(motion,IComponentPath)
HX_DECLARE_CLASS2(motion,_MotionPath,BezierSplinePath)
HX_DECLARE_CLASS2(motion,_MotionPath,ComponentPath)

namespace motion{
namespace _MotionPath{


class HXCPP_CLASS_ATTRIBUTES BezierSplinePath_obj : public  ::motion::_MotionPath::ComponentPath_obj
{
	public:
		typedef  ::motion::_MotionPath::ComponentPath_obj super;
		typedef BezierSplinePath_obj OBJ_;
		BezierSplinePath_obj();

	public:
		enum { _hx_ClassId = 0x27f5f14d };

		void __construct(::Array< Float > through,Float strength);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="motion._MotionPath.BezierSplinePath")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"motion._MotionPath.BezierSplinePath"); }
		static ::hx::ObjectPtr< BezierSplinePath_obj > __new(::Array< Float > through,Float strength);
		static ::hx::ObjectPtr< BezierSplinePath_obj > __alloc(::hx::Ctx *_hx_ctx,::Array< Float > through,Float strength);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BezierSplinePath_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BezierSplinePath",75,da,0d,01); }

		::Array< Float > through;
		::Array< ::Dynamic> computeControlPoints(Float start);
		::Dynamic computeControlPoints_dyn();

		Float set_start(Float value);

		Float get_end();

};

} // end namespace motion
} // end namespace _MotionPath

#endif /* INCLUDED_motion__MotionPath_BezierSplinePath */ 
