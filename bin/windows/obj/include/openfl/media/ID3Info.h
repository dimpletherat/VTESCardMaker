// Generated by Haxe 4.1.0
#ifndef INCLUDED_openfl_media_ID3Info
#define INCLUDED_openfl_media_ID3Info

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_93e4eccf60244a3a_51_new)
HX_DECLARE_CLASS2(openfl,media,ID3Info)

namespace openfl{
namespace media{


class HXCPP_CLASS_ATTRIBUTES ID3Info_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ID3Info_obj OBJ_;
		ID3Info_obj();

	public:
		enum { _hx_ClassId = 0x1ff899d6 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.media.ID3Info")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.media.ID3Info"); }

		inline static ::hx::ObjectPtr< ID3Info_obj > __new() {
			::hx::ObjectPtr< ID3Info_obj > __this = new ID3Info_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ID3Info_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ID3Info_obj *__this = (ID3Info_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ID3Info_obj), true, "openfl.media.ID3Info"));
			*(void **)__this = ID3Info_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_93e4eccf60244a3a_51_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ID3Info_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ID3Info",86,60,e7,99); }

		::String album;
		::String artist;
		::String comment;
		::String genre;
		::String songName;
		::String track;
		::String year;
};

} // end namespace openfl
} // end namespace media

#endif /* INCLUDED_openfl_media_ID3Info */ 
