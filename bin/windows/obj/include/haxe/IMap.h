// Generated by Haxe 4.1.0
#ifndef INCLUDED_haxe_IMap
#define INCLUDED_haxe_IMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)

namespace haxe{


class HXCPP_CLASS_ATTRIBUTES IMap_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		void (::hx::Object :: *_hx_set)( ::Dynamic k, ::Dynamic v); 
		static inline void set( ::Dynamic _hx_, ::Dynamic k, ::Dynamic v) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::haxe::IMap_obj *>(_hx_.mPtr->_hx_getInterface(0x09c2bd39)))->_hx_set)(k,v);
		}
		bool (::hx::Object :: *_hx_exists)( ::Dynamic k); 
		static inline bool exists( ::Dynamic _hx_, ::Dynamic k) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::haxe::IMap_obj *>(_hx_.mPtr->_hx_getInterface(0x09c2bd39)))->_hx_exists)(k);
		}
		bool (::hx::Object :: *_hx_remove)( ::Dynamic k); 
		static inline bool remove( ::Dynamic _hx_, ::Dynamic k) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::haxe::IMap_obj *>(_hx_.mPtr->_hx_getInterface(0x09c2bd39)))->_hx_remove)(k);
		}
};

} // end namespace haxe

#endif /* INCLUDED_haxe_IMap */ 
