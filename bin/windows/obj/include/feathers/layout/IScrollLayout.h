// Generated by Haxe 4.1.0
#ifndef INCLUDED_feathers_layout_IScrollLayout
#define INCLUDED_feathers_layout_IScrollLayout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_feathers_layout_ILayout
#include <feathers/layout/ILayout.h>
#endif
HX_DECLARE_CLASS2(feathers,layout,Direction)
HX_DECLARE_CLASS2(feathers,layout,ILayout)
HX_DECLARE_CLASS2(feathers,layout,IScrollLayout)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace layout{


class HXCPP_CLASS_ATTRIBUTES IScrollLayout_obj {
	public:
		typedef  ::feathers::layout::ILayout_obj super;
		HX_DO_INTERFACE_RTTI;

		void (::hx::Object :: *_hx_addEventListener)(::String type, ::Dynamic listener,::hx::Null< bool >  useCapture,::hx::Null< int >  priority,::hx::Null< bool >  useWeakReference); 
		static inline void addEventListener( ::Dynamic _hx_,::String type, ::Dynamic listener,::hx::Null< bool >  useCapture,::hx::Null< int >  priority,::hx::Null< bool >  useWeakReference) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::layout::IScrollLayout_obj *>(_hx_.mPtr->_hx_getInterface(0x7543aca6)))->_hx_addEventListener)(type,listener,useCapture,priority,useWeakReference);
		}
		bool (::hx::Object :: *_hx_dispatchEvent)( ::openfl::events::Event event); 
		static inline bool dispatchEvent( ::Dynamic _hx_, ::openfl::events::Event event) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::layout::IScrollLayout_obj *>(_hx_.mPtr->_hx_getInterface(0x7543aca6)))->_hx_dispatchEvent)(event);
		}
		bool (::hx::Object :: *_hx_hasEventListener)(::String type); 
		static inline bool hasEventListener( ::Dynamic _hx_,::String type) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::layout::IScrollLayout_obj *>(_hx_.mPtr->_hx_getInterface(0x7543aca6)))->_hx_hasEventListener)(type);
		}
		void (::hx::Object :: *_hx_removeEventListener)(::String type, ::Dynamic listener,::hx::Null< bool >  useCapture); 
		static inline void removeEventListener( ::Dynamic _hx_,::String type, ::Dynamic listener,::hx::Null< bool >  useCapture) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::layout::IScrollLayout_obj *>(_hx_.mPtr->_hx_getInterface(0x7543aca6)))->_hx_removeEventListener)(type,listener,useCapture);
		}
		bool (::hx::Object :: *_hx_willTrigger)(::String type); 
		static inline bool willTrigger( ::Dynamic _hx_,::String type) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::layout::IScrollLayout_obj *>(_hx_.mPtr->_hx_getInterface(0x7543aca6)))->_hx_willTrigger)(type);
		}
		 ::feathers::layout::LayoutBoundsResult (::hx::Object :: *_hx_layout)(::Array< ::Dynamic> items, ::feathers::layout::Measurements measurements, ::feathers::layout::LayoutBoundsResult result); 
		static inline  ::feathers::layout::LayoutBoundsResult layout( ::Dynamic _hx_,::Array< ::Dynamic> items, ::feathers::layout::Measurements measurements, ::feathers::layout::LayoutBoundsResult result) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::layout::IScrollLayout_obj *>(_hx_.mPtr->_hx_getInterface(0x7543aca6)))->_hx_layout)(items,measurements,result);
		}
		Float (::hx::Object :: *_hx_set_scrollX)(Float value); 
		static inline Float set_scrollX( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::layout::IScrollLayout_obj *>(_hx_.mPtr->_hx_getInterface(0x7543aca6)))->_hx_set_scrollX)(value);
		}
		Float (::hx::Object :: *_hx_set_scrollY)(Float value); 
		static inline Float set_scrollY( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::layout::IScrollLayout_obj *>(_hx_.mPtr->_hx_getInterface(0x7543aca6)))->_hx_set_scrollY)(value);
		}
		 ::feathers::layout::Direction (::hx::Object :: *_hx_get_primaryDirection)(); 
		static inline  ::feathers::layout::Direction get_primaryDirection( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::layout::IScrollLayout_obj *>(_hx_.mPtr->_hx_getInterface(0x7543aca6)))->_hx_get_primaryDirection)();
		}
		bool (::hx::Object :: *_hx_get_requiresLayoutOnScroll)(); 
		static inline bool get_requiresLayoutOnScroll( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::layout::IScrollLayout_obj *>(_hx_.mPtr->_hx_getInterface(0x7543aca6)))->_hx_get_requiresLayoutOnScroll)();
		}
};

} // end namespace feathers
} // end namespace layout

#endif /* INCLUDED_feathers_layout_IScrollLayout */ 
