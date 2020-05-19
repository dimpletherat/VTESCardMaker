// Generated by Haxe 4.1.0
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_math__BGRA_BGRA_Impl_
#include <lime/math/_BGRA/BGRA_Impl_.h>
#endif
#ifndef INCLUDED_lime_math__RGBA_RGBA_Impl_
#include <lime/math/_RGBA/RGBA_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_48afddf114bf5522_50__new,"lime.math._BGRA.BGRA_Impl_","_new",0x1062f173,"lime.math._BGRA.BGRA_Impl_._new","lime/math/BGRA.hx",50,0xa22a967d)
HX_LOCAL_STACK_FRAME(_hx_pos_48afddf114bf5522_64_create,"lime.math._BGRA.BGRA_Impl_","create",0x0b0feb8e,"lime.math._BGRA.BGRA_Impl_.create","lime/math/BGRA.hx",64,0xa22a967d)
HX_LOCAL_STACK_FRAME(_hx_pos_48afddf114bf5522_75_multiplyAlpha,"lime.math._BGRA.BGRA_Impl_","multiplyAlpha",0x5dba0448,"lime.math._BGRA.BGRA_Impl_.multiplyAlpha","lime/math/BGRA.hx",75,0xa22a967d)
HX_LOCAL_STACK_FRAME(_hx_pos_48afddf114bf5522_94_readUInt8,"lime.math._BGRA.BGRA_Impl_","readUInt8",0xd108bef6,"lime.math._BGRA.BGRA_Impl_.readUInt8","lime/math/BGRA.hx",94,0xa22a967d)
HX_LOCAL_STACK_FRAME(_hx_pos_48afddf114bf5522_122_set,"lime.math._BGRA.BGRA_Impl_","set",0xe80667d0,"lime.math._BGRA.BGRA_Impl_.set","lime/math/BGRA.hx",122,0xa22a967d)
HX_LOCAL_STACK_FRAME(_hx_pos_48afddf114bf5522_130_unmultiplyAlpha,"lime.math._BGRA.BGRA_Impl_","unmultiplyAlpha",0xc9de21cf,"lime.math._BGRA.BGRA_Impl_.unmultiplyAlpha","lime/math/BGRA.hx",130,0xa22a967d)
HX_LOCAL_STACK_FRAME(_hx_pos_48afddf114bf5522_145_writeUInt8,"lime.math._BGRA.BGRA_Impl_","writeUInt8",0x274b7fb1,"lime.math._BGRA.BGRA_Impl_.writeUInt8","lime/math/BGRA.hx",145,0xa22a967d)
HX_LOCAL_STACK_FRAME(_hx_pos_48afddf114bf5522_175___fromARGB,"lime.math._BGRA.BGRA_Impl_","__fromARGB",0x4573a068,"lime.math._BGRA.BGRA_Impl_.__fromARGB","lime/math/BGRA.hx",175,0xa22a967d)
HX_LOCAL_STACK_FRAME(_hx_pos_48afddf114bf5522_180___fromRGBA,"lime.math._BGRA.BGRA_Impl_","__fromRGBA",0x50a7e3d0,"lime.math._BGRA.BGRA_Impl_.__fromRGBA","lime/math/BGRA.hx",180,0xa22a967d)
HX_LOCAL_STACK_FRAME(_hx_pos_48afddf114bf5522_186_get_a,"lime.math._BGRA.BGRA_Impl_","get_a",0xdb7d58e6,"lime.math._BGRA.BGRA_Impl_.get_a","lime/math/BGRA.hx",186,0xa22a967d)
HX_LOCAL_STACK_FRAME(_hx_pos_48afddf114bf5522_190_set_a,"lime.math._BGRA.BGRA_Impl_","set_a",0xc44c4ef2,"lime.math._BGRA.BGRA_Impl_.set_a","lime/math/BGRA.hx",190,0xa22a967d)
HX_LOCAL_STACK_FRAME(_hx_pos_48afddf114bf5522_197_get_b,"lime.math._BGRA.BGRA_Impl_","get_b",0xdb7d58e7,"lime.math._BGRA.BGRA_Impl_.get_b","lime/math/BGRA.hx",197,0xa22a967d)
HX_LOCAL_STACK_FRAME(_hx_pos_48afddf114bf5522_201_set_b,"lime.math._BGRA.BGRA_Impl_","set_b",0xc44c4ef3,"lime.math._BGRA.BGRA_Impl_.set_b","lime/math/BGRA.hx",201,0xa22a967d)
HX_LOCAL_STACK_FRAME(_hx_pos_48afddf114bf5522_208_get_g,"lime.math._BGRA.BGRA_Impl_","get_g",0xdb7d58ec,"lime.math._BGRA.BGRA_Impl_.get_g","lime/math/BGRA.hx",208,0xa22a967d)
HX_LOCAL_STACK_FRAME(_hx_pos_48afddf114bf5522_212_set_g,"lime.math._BGRA.BGRA_Impl_","set_g",0xc44c4ef8,"lime.math._BGRA.BGRA_Impl_.set_g","lime/math/BGRA.hx",212,0xa22a967d)
HX_LOCAL_STACK_FRAME(_hx_pos_48afddf114bf5522_219_get_r,"lime.math._BGRA.BGRA_Impl_","get_r",0xdb7d58f7,"lime.math._BGRA.BGRA_Impl_.get_r","lime/math/BGRA.hx",219,0xa22a967d)
HX_LOCAL_STACK_FRAME(_hx_pos_48afddf114bf5522_223_set_r,"lime.math._BGRA.BGRA_Impl_","set_r",0xc44c4f03,"lime.math._BGRA.BGRA_Impl_.set_r","lime/math/BGRA.hx",223,0xa22a967d)
namespace lime{
namespace math{
namespace _BGRA{

void BGRA_Impl__obj::__construct() { }

Dynamic BGRA_Impl__obj::__CreateEmpty() { return new BGRA_Impl__obj; }

void *BGRA_Impl__obj::_hx_vtable = 0;

Dynamic BGRA_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BGRA_Impl__obj > _hx_result = new BGRA_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BGRA_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7ecac4f2;
}

int BGRA_Impl__obj::a16;

Float BGRA_Impl__obj::unmult;

int BGRA_Impl__obj::_new(::hx::Null< int >  __o_bgra){
            		int bgra = __o_bgra.Default(0);
            	HX_STACKFRAME(&_hx_pos_48afddf114bf5522_50__new)
HXDLIN(  50)		int this1 = bgra;
HXDLIN(  50)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BGRA_Impl__obj,_new,return )

int BGRA_Impl__obj::create(int b,int g,int r,int a){
            	HX_STACKFRAME(&_hx_pos_48afddf114bf5522_64_create)
HXLINE(  65)		int this1 = 0;
HXDLIN(  65)		int bgra = this1;
HXLINE(  66)		bgra = (((((b & 255) << 24) | ((g & 255) << 16)) | ((r & 255) << 8)) | (a & 255));
HXLINE(  67)		return bgra;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(BGRA_Impl__obj,create,return )

void BGRA_Impl__obj::multiplyAlpha(int this1){
            	HX_STACKFRAME(&_hx_pos_48afddf114bf5522_75_multiplyAlpha)
HXDLIN(  75)		if (((this1 & 255) == 0)) {
HXLINE(  77)			this1 = 0;
            		}
            		else {
HXLINE(  79)			if (((this1 & 255) != 255)) {
HXLINE(  81)				 ::lime::utils::ArrayBufferView this2 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___alpha16;
HXDLIN(  81)				::lime::math::_BGRA::BGRA_Impl__obj::a16 = ( (int)( ::__hxcpp_memory_get_ui32(this2->buffer->b,(this2->byteOffset + ((this1 & 255) * 4)))) );
HXLINE(  82)				this1 = ((((((((::hx::UShr(this1,24) & 255) * ::lime::math::_BGRA::BGRA_Impl__obj::a16) >> 16) & 255) << 24) | (((((::hx::UShr(this1,16) & 255) * ::lime::math::_BGRA::BGRA_Impl__obj::a16) >> 16) & 255) << 16)) | (((((::hx::UShr(this1,8) & 255) * ::lime::math::_BGRA::BGRA_Impl__obj::a16) >> 16) & 255) << 8)) | ((this1 & 255) & 255));
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BGRA_Impl__obj,multiplyAlpha,(void))

void BGRA_Impl__obj::readUInt8(int this1, ::lime::utils::ArrayBufferView data,int offset,::hx::Null< int >  __o_format,::hx::Null< bool >  __o_premultiplied){
            		int format = __o_format.Default(0);
            		bool premultiplied = __o_premultiplied.Default(false);
            	HX_STACKFRAME(&_hx_pos_48afddf114bf5522_94_readUInt8)
HXLINE(  95)		switch((int)(format)){
            			case (int)0: {
HXLINE( 101)				int b = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 2))) & 255)) );
HXDLIN( 101)				int g = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 1))) & 255)) );
HXDLIN( 101)				int r = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset)) & 255)) );
HXDLIN( 101)				this1 = (((((b & 255) << 24) | ((g & 255) << 16)) | ((r & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 3))) & 255)) ) & 255));
            			}
            			break;
            			case (int)1: {
HXLINE( 104)				int b = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 3))) & 255)) );
HXDLIN( 104)				int g = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 2))) & 255)) );
HXDLIN( 104)				int r = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 1))) & 255)) );
HXDLIN( 104)				this1 = (((((b & 255) << 24) | ((g & 255) << 16)) | ((r & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset)) & 255)) ) & 255));
            			}
            			break;
            			case (int)2: {
HXLINE(  98)				int b = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset)) & 255)) );
HXDLIN(  98)				int g = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 1))) & 255)) );
HXDLIN(  98)				int r = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 2))) & 255)) );
HXDLIN(  98)				this1 = (((((b & 255) << 24) | ((g & 255) << 16)) | ((r & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 3))) & 255)) ) & 255));
            			}
            			break;
            		}
HXLINE( 107)		if (premultiplied) {
HXLINE( 109)			bool _hx_tmp;
HXDLIN( 109)			if (((this1 & 255) != 0)) {
HXLINE( 109)				_hx_tmp = ((this1 & 255) != 255);
            			}
            			else {
HXLINE( 109)				_hx_tmp = false;
            			}
HXDLIN( 109)			if (_hx_tmp) {
HXLINE( 109)				::lime::math::_BGRA::BGRA_Impl__obj::unmult = (((Float)255.0) / ( (Float)((this1 & 255)) ));
HXDLIN( 109)				{
HXLINE( 109)					 ::lime::utils::ArrayBufferView this2 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 109)					int b = ( (int)(( ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + ::Math_obj::floor((( (Float)((::hx::UShr(this1,24) & 255)) ) * ::lime::math::_BGRA::BGRA_Impl__obj::unmult)))) & 255)) );
HXDLIN( 109)					 ::lime::utils::ArrayBufferView this3 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 109)					int g = ( (int)(( ::__hxcpp_memory_get_byte(this3->buffer->b,(this3->byteOffset + ::Math_obj::floor((( (Float)((::hx::UShr(this1,16) & 255)) ) * ::lime::math::_BGRA::BGRA_Impl__obj::unmult)))) & 255)) );
HXDLIN( 109)					 ::lime::utils::ArrayBufferView this4 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 109)					this1 = (((((b & 255) << 24) | ((g & 255) << 16)) | ((( (int)(( ::__hxcpp_memory_get_byte(this4->buffer->b,(this4->byteOffset + ::Math_obj::floor((( (Float)((::hx::UShr(this1,8) & 255)) ) * ::lime::math::_BGRA::BGRA_Impl__obj::unmult)))) & 255)) ) & 255) << 8)) | ((this1 & 255) & 255));
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(BGRA_Impl__obj,readUInt8,(void))

void BGRA_Impl__obj::set(int this1,int b,int g,int r,int a){
            	HX_STACKFRAME(&_hx_pos_48afddf114bf5522_122_set)
HXDLIN( 122)		this1 = (((((b & 255) << 24) | ((g & 255) << 16)) | ((r & 255) << 8)) | (a & 255));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(BGRA_Impl__obj,set,(void))

void BGRA_Impl__obj::unmultiplyAlpha(int this1){
            	HX_STACKFRAME(&_hx_pos_48afddf114bf5522_130_unmultiplyAlpha)
HXDLIN( 130)		bool _hx_tmp;
HXDLIN( 130)		if (((this1 & 255) != 0)) {
HXDLIN( 130)			_hx_tmp = ((this1 & 255) != 255);
            		}
            		else {
HXDLIN( 130)			_hx_tmp = false;
            		}
HXDLIN( 130)		if (_hx_tmp) {
HXLINE( 132)			::lime::math::_BGRA::BGRA_Impl__obj::unmult = (((Float)255.0) / ( (Float)((this1 & 255)) ));
HXLINE( 133)			{
HXLINE( 133)				 ::lime::utils::ArrayBufferView this2 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 133)				int b = ( (int)(( ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + ::Math_obj::floor((( (Float)((::hx::UShr(this1,24) & 255)) ) * ::lime::math::_BGRA::BGRA_Impl__obj::unmult)))) & 255)) );
HXDLIN( 133)				 ::lime::utils::ArrayBufferView this3 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 133)				int g = ( (int)(( ::__hxcpp_memory_get_byte(this3->buffer->b,(this3->byteOffset + ::Math_obj::floor((( (Float)((::hx::UShr(this1,16) & 255)) ) * ::lime::math::_BGRA::BGRA_Impl__obj::unmult)))) & 255)) );
HXDLIN( 133)				 ::lime::utils::ArrayBufferView this4 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 133)				this1 = (((((b & 255) << 24) | ((g & 255) << 16)) | ((( (int)(( ::__hxcpp_memory_get_byte(this4->buffer->b,(this4->byteOffset + ::Math_obj::floor((( (Float)((::hx::UShr(this1,8) & 255)) ) * ::lime::math::_BGRA::BGRA_Impl__obj::unmult)))) & 255)) ) & 255) << 8)) | ((this1 & 255) & 255));
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BGRA_Impl__obj,unmultiplyAlpha,(void))

void BGRA_Impl__obj::writeUInt8(int this1, ::lime::utils::ArrayBufferView data,int offset,::hx::Null< int >  __o_format,::hx::Null< bool >  __o_premultiplied){
            		int format = __o_format.Default(0);
            		bool premultiplied = __o_premultiplied.Default(false);
            	HX_STACKFRAME(&_hx_pos_48afddf114bf5522_145_writeUInt8)
HXLINE( 146)		if (premultiplied) {
HXLINE( 148)			if (((this1 & 255) == 0)) {
HXLINE( 148)				this1 = 0;
            			}
            			else {
HXLINE( 148)				if (((this1 & 255) != 255)) {
HXLINE( 148)					 ::lime::utils::ArrayBufferView this2 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___alpha16;
HXDLIN( 148)					::lime::math::_BGRA::BGRA_Impl__obj::a16 = ( (int)( ::__hxcpp_memory_get_ui32(this2->buffer->b,(this2->byteOffset + ((this1 & 255) * 4)))) );
HXDLIN( 148)					this1 = ((((((((::hx::UShr(this1,24) & 255) * ::lime::math::_BGRA::BGRA_Impl__obj::a16) >> 16) & 255) << 24) | (((((::hx::UShr(this1,16) & 255) * ::lime::math::_BGRA::BGRA_Impl__obj::a16) >> 16) & 255) << 16)) | (((((::hx::UShr(this1,8) & 255) * ::lime::math::_BGRA::BGRA_Impl__obj::a16) >> 16) & 255) << 8)) | ((this1 & 255) & 255));
            				}
            			}
            		}
HXLINE( 151)		switch((int)(format)){
            			case (int)0: {
HXLINE( 160)				{
HXLINE( 160)					int val = (::hx::UShr(this1,8) & 255);
HXDLIN( 160)					 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
            				}
HXLINE( 161)				{
HXLINE( 161)					int val1 = (::hx::UShr(this1,16) & 255);
HXDLIN( 161)					 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 1)),val1);
            				}
HXLINE( 162)				{
HXLINE( 162)					int val2 = (::hx::UShr(this1,24) & 255);
HXDLIN( 162)					 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 2)),val2);
            				}
HXLINE( 163)				{
HXLINE( 163)					int val3 = (this1 & 255);
HXDLIN( 163)					 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 3)),val3);
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 166)				{
HXLINE( 166)					int val = (this1 & 255);
HXDLIN( 166)					 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
            				}
HXLINE( 167)				{
HXLINE( 167)					int val1 = (::hx::UShr(this1,8) & 255);
HXDLIN( 167)					 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 1)),val1);
            				}
HXLINE( 168)				{
HXLINE( 168)					int val2 = (::hx::UShr(this1,16) & 255);
HXDLIN( 168)					 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 2)),val2);
            				}
HXLINE( 169)				{
HXLINE( 169)					int val3 = (::hx::UShr(this1,24) & 255);
HXDLIN( 169)					 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 3)),val3);
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 154)				{
HXLINE( 154)					int val = (::hx::UShr(this1,24) & 255);
HXDLIN( 154)					 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
            				}
HXLINE( 155)				{
HXLINE( 155)					int val1 = (::hx::UShr(this1,16) & 255);
HXDLIN( 155)					 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 1)),val1);
            				}
HXLINE( 156)				{
HXLINE( 156)					int val2 = (::hx::UShr(this1,8) & 255);
HXDLIN( 156)					 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 2)),val2);
            				}
HXLINE( 157)				{
HXLINE( 157)					int val3 = (this1 & 255);
HXDLIN( 157)					 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 3)),val3);
            				}
            			}
            			break;
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(BGRA_Impl__obj,writeUInt8,(void))

int BGRA_Impl__obj::_hx___fromARGB(int argb){
            	HX_STACKFRAME(&_hx_pos_48afddf114bf5522_175___fromARGB)
HXDLIN( 175)		int this1 = 0;
HXDLIN( 175)		int bgra = this1;
HXDLIN( 175)		bgra = ((((((argb & 255) & 255) << 24) | (((::hx::UShr(argb,8) & 255) & 255) << 16)) | (((::hx::UShr(argb,16) & 255) & 255) << 8)) | ((::hx::UShr(argb,24) & 255) & 255));
HXDLIN( 175)		return bgra;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BGRA_Impl__obj,_hx___fromARGB,return )

int BGRA_Impl__obj::_hx___fromRGBA(int rgba){
            	HX_STACKFRAME(&_hx_pos_48afddf114bf5522_180___fromRGBA)
HXDLIN( 180)		int this1 = 0;
HXDLIN( 180)		int bgra = this1;
HXDLIN( 180)		bgra = ((((((::hx::UShr(rgba,8) & 255) & 255) << 24) | (((::hx::UShr(rgba,16) & 255) & 255) << 16)) | (((::hx::UShr(rgba,24) & 255) & 255) << 8)) | ((rgba & 255) & 255));
HXDLIN( 180)		return bgra;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BGRA_Impl__obj,_hx___fromRGBA,return )

int BGRA_Impl__obj::get_a(int this1){
            	HX_STACKFRAME(&_hx_pos_48afddf114bf5522_186_get_a)
HXDLIN( 186)		return (this1 & 255);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BGRA_Impl__obj,get_a,return )

int BGRA_Impl__obj::set_a(int this1,int value){
            	HX_STACKFRAME(&_hx_pos_48afddf114bf5522_190_set_a)
HXLINE( 191)		this1 = ((((((::hx::UShr(this1,24) & 255) & 255) << 24) | (((::hx::UShr(this1,16) & 255) & 255) << 16)) | (((::hx::UShr(this1,8) & 255) & 255) << 8)) | (value & 255));
HXLINE( 192)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BGRA_Impl__obj,set_a,return )

int BGRA_Impl__obj::get_b(int this1){
            	HX_STACKFRAME(&_hx_pos_48afddf114bf5522_197_get_b)
HXDLIN( 197)		return (::hx::UShr(this1,24) & 255);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BGRA_Impl__obj,get_b,return )

int BGRA_Impl__obj::set_b(int this1,int value){
            	HX_STACKFRAME(&_hx_pos_48afddf114bf5522_201_set_b)
HXLINE( 202)		this1 = (((((value & 255) << 24) | (((::hx::UShr(this1,16) & 255) & 255) << 16)) | (((::hx::UShr(this1,8) & 255) & 255) << 8)) | ((this1 & 255) & 255));
HXLINE( 203)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BGRA_Impl__obj,set_b,return )

int BGRA_Impl__obj::get_g(int this1){
            	HX_STACKFRAME(&_hx_pos_48afddf114bf5522_208_get_g)
HXDLIN( 208)		return (::hx::UShr(this1,16) & 255);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BGRA_Impl__obj,get_g,return )

int BGRA_Impl__obj::set_g(int this1,int value){
            	HX_STACKFRAME(&_hx_pos_48afddf114bf5522_212_set_g)
HXLINE( 213)		this1 = ((((((::hx::UShr(this1,24) & 255) & 255) << 24) | ((value & 255) << 16)) | (((::hx::UShr(this1,8) & 255) & 255) << 8)) | ((this1 & 255) & 255));
HXLINE( 214)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BGRA_Impl__obj,set_g,return )

int BGRA_Impl__obj::get_r(int this1){
            	HX_STACKFRAME(&_hx_pos_48afddf114bf5522_219_get_r)
HXDLIN( 219)		return (::hx::UShr(this1,8) & 255);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BGRA_Impl__obj,get_r,return )

int BGRA_Impl__obj::set_r(int this1,int value){
            	HX_STACKFRAME(&_hx_pos_48afddf114bf5522_223_set_r)
HXLINE( 224)		this1 = ((((((::hx::UShr(this1,24) & 255) & 255) << 24) | (((::hx::UShr(this1,16) & 255) & 255) << 16)) | ((value & 255) << 8)) | ((this1 & 255) & 255));
HXLINE( 225)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BGRA_Impl__obj,set_r,return )


BGRA_Impl__obj::BGRA_Impl__obj()
{
}

bool BGRA_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { outValue = set_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_a") ) { outValue = get_a_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_a") ) { outValue = set_a_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_b") ) { outValue = get_b_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_b") ) { outValue = set_b_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_g") ) { outValue = get_g_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_g") ) { outValue = set_g_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_r") ) { outValue = get_r_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_r") ) { outValue = set_r_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readUInt8") ) { outValue = readUInt8_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"writeUInt8") ) { outValue = writeUInt8_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"__fromARGB") ) { outValue = _hx___fromARGB_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"__fromRGBA") ) { outValue = _hx___fromRGBA_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"multiplyAlpha") ) { outValue = multiplyAlpha_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"unmultiplyAlpha") ) { outValue = unmultiplyAlpha_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *BGRA_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo BGRA_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &BGRA_Impl__obj::a16,HX_("a16",86,c5,49,00)},
	{::hx::fsFloat,(void *) &BGRA_Impl__obj::unmult,HX_("unmult",c9,6e,3a,66)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void BGRA_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BGRA_Impl__obj::a16,"a16");
	HX_MARK_MEMBER_NAME(BGRA_Impl__obj::unmult,"unmult");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BGRA_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BGRA_Impl__obj::a16,"a16");
	HX_VISIT_MEMBER_NAME(BGRA_Impl__obj::unmult,"unmult");
};

#endif

::hx::Class BGRA_Impl__obj::__mClass;

static ::String BGRA_Impl__obj_sStaticFields[] = {
	HX_("a16",86,c5,49,00),
	HX_("unmult",c9,6e,3a,66),
	HX_("_new",61,15,1f,3f),
	HX_("create",fc,66,0f,7c),
	HX_("multiplyAlpha",9a,f2,1c,6b),
	HX_("readUInt8",48,9c,5d,5f),
	HX_("set",a2,9b,57,00),
	HX_("unmultiplyAlpha",a1,c8,96,28),
	HX_("writeUInt8",1f,4a,38,23),
	HX_("__fromARGB",d6,6a,60,41),
	HX_("__fromRGBA",3e,ae,94,4c),
	HX_("get_a",38,a5,60,91),
	HX_("set_a",44,9b,2f,7a),
	HX_("get_b",39,a5,60,91),
	HX_("set_b",45,9b,2f,7a),
	HX_("get_g",3e,a5,60,91),
	HX_("set_g",4a,9b,2f,7a),
	HX_("get_r",49,a5,60,91),
	HX_("set_r",55,9b,2f,7a),
	::String(null())
};

void BGRA_Impl__obj::__register()
{
	BGRA_Impl__obj _hx_dummy;
	BGRA_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.math._BGRA.BGRA_Impl_",9c,fd,81,41);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BGRA_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = BGRA_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(BGRA_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< BGRA_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BGRA_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BGRA_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BGRA_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace math
} // end namespace _BGRA
