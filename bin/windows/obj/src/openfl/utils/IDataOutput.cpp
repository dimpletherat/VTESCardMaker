// Generated by Haxe 4.1.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif

namespace openfl{
namespace utils{


static ::String IDataOutput_obj_sMemberFields[] = {
	HX_("get_endian",64,08,10,eb),
	HX_("set_endian",d8,a6,8d,ee),
	HX_("objectEncoding",b2,1e,15,2a),
	HX_("writeBoolean",89,8f,2d,43),
	HX_("writeByte",87,13,d7,49),
	HX_("writeBytes",0c,03,5a,52),
	HX_("writeDouble",50,7d,c4,c7),
	HX_("writeFloat",3d,c0,58,97),
	HX_("writeInt",50,6d,f0,23),
	HX_("writeMultiByte",42,65,25,ec),
	HX_("writeObject",fe,d0,38,aa),
	HX_("writeShort",1d,7f,e9,10),
	HX_("writeUnsignedInt",5b,d4,70,16),
	HX_("writeUTF",88,71,f9,23),
	HX_("writeUTFBytes",c3,79,7b,da),
	::String(null()) };

::hx::Class IDataOutput_obj::__mClass;

void IDataOutput_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.utils.IDataOutput",59,44,6d,76);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IDataOutput_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x948d2d33 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace utils
