// Generated by Haxe 4.1.0
#ifndef INCLUDED_lime_net__HTTPRequest_Bytes
#define INCLUDED_lime_net__HTTPRequest_Bytes

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_lime_net__HTTPRequest_AbstractHTTPRequest
#include <lime/net/_HTTPRequest/AbstractHTTPRequest.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,app,Future)
HX_DECLARE_CLASS3(lime,net,_HTTPRequest,AbstractHTTPRequest)
HX_DECLARE_CLASS2(lime,net,_HTTPRequest_Bytes)
HX_DECLARE_CLASS2(lime,net,_IHTTPRequest)

namespace lime{
namespace net{


class HXCPP_CLASS_ATTRIBUTES _HTTPRequest_Bytes_obj : public  ::lime::net::_HTTPRequest::AbstractHTTPRequest_obj
{
	public:
		typedef  ::lime::net::_HTTPRequest::AbstractHTTPRequest_obj super;
		typedef _HTTPRequest_Bytes_obj OBJ_;
		_HTTPRequest_Bytes_obj();

	public:
		enum { _hx_ClassId = 0x7f4deb50 };

		void __construct(::String uri);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.net._HTTPRequest_Bytes")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime.net._HTTPRequest_Bytes"); }
		static ::hx::ObjectPtr< _HTTPRequest_Bytes_obj > __new(::String uri);
		static ::hx::ObjectPtr< _HTTPRequest_Bytes_obj > __alloc(::hx::Ctx *_hx_ctx,::String uri);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~_HTTPRequest_Bytes_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("_HTTPRequest_Bytes",34,80,e3,d7); }

		virtual  ::Dynamic fromBytes( ::haxe::io::Bytes bytes);
		::Dynamic fromBytes_dyn();

		 ::lime::app::Future load(::String uri);

};

} // end namespace lime
} // end namespace net

#endif /* INCLUDED_lime_net__HTTPRequest_Bytes */ 
