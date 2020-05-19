// Generated by Haxe 4.1.0
#ifndef INCLUDED_openfl_utils_AGALMiniAssembler
#define INCLUDED_openfl_utils_AGALMiniAssembler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS2(openfl,display3D,Program3D)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,utils,AGALMiniAssembler)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)

namespace openfl{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES AGALMiniAssembler_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AGALMiniAssembler_obj OBJ_;
		AGALMiniAssembler_obj();

	public:
		enum { _hx_ClassId = 0x65c43237 };

		void __construct(::hx::Null< bool >  __o_debugging);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.utils.AGALMiniAssembler")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.utils.AGALMiniAssembler"); }
		static ::hx::ObjectPtr< AGALMiniAssembler_obj > __new(::hx::Null< bool >  __o_debugging);
		static ::hx::ObjectPtr< AGALMiniAssembler_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< bool >  __o_debugging);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AGALMiniAssembler_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AGALMiniAssembler",78,27,0e,a3); }

		static void __boot();
		static  ::Dynamic __meta__;
		static  ::haxe::ds::StringMap OPMAP;
		static  ::haxe::ds::StringMap REGMAP;
		static  ::haxe::ds::StringMap SAMPLEMAP;
		static int MAX_NESTING;
		static int MAX_OPCODES;
		static ::String FRAGMENT;
		static ::String VERTEX;
		static int SAMPLER_TYPE_SHIFT;
		static int SAMPLER_DIM_SHIFT;
		static int SAMPLER_SPECIAL_SHIFT;
		static int SAMPLER_REPEAT_SHIFT;
		static int SAMPLER_MIPMAP_SHIFT;
		static int SAMPLER_FILTER_SHIFT;
		static int REG_WRITE;
		static int REG_READ;
		static int REG_FRAG;
		static int REG_VERT;
		static int OP_SCALAR;
		static int OP_SPECIAL_TEX;
		static int OP_SPECIAL_MATRIX;
		static int OP_FRAG_ONLY;
		static int OP_VERT_ONLY;
		static int OP_NO_DEST;
		static int OP_VERSION2;
		static int OP_INCNEST;
		static int OP_DECNEST;
		static ::String MOV;
		static ::String ADD;
		static ::String SUB;
		static ::String MUL;
		static ::String DIV;
		static ::String RCP;
		static ::String MIN;
		static ::String MAX;
		static ::String FRC;
		static ::String SQT;
		static ::String RSQ;
		static ::String POW;
		static ::String LOG;
		static ::String EXP;
		static ::String NRM;
		static ::String SIN;
		static ::String COS;
		static ::String CRS;
		static ::String DP3;
		static ::String DP4;
		static ::String ABS;
		static ::String NEG;
		static ::String SAT;
		static ::String M33;
		static ::String M44;
		static ::String M34;
		static ::String DDX;
		static ::String DDY;
		static ::String IFE;
		static ::String INE;
		static ::String IFG;
		static ::String IFL;
		static ::String IEG;
		static ::String IEL;
		static ::String ELS;
		static ::String EIF;
		static ::String TED;
		static ::String KIL;
		static ::String TEX;
		static ::String SGE;
		static ::String SLT;
		static ::String SGN;
		static ::String SEQ;
		static ::String SNE;
		static ::String VA;
		static ::String VC;
		static ::String VT;
		static ::String VO;
		static ::String VI;
		static ::String FC;
		static ::String FT;
		static ::String FS;
		static ::String FO;
		static ::String FD;
		static ::String IID;
		static ::String D2;
		static ::String D3;
		static ::String CUBE;
		static ::String MIPNEAREST;
		static ::String MIPLINEAR;
		static ::String MIPNONE;
		static ::String NOMIP;
		static ::String NEAREST;
		static ::String LINEAR;
		static ::String ANISOTROPIC2X;
		static ::String ANISOTROPIC4X;
		static ::String ANISOTROPIC8X;
		static ::String ANISOTROPIC16X;
		static ::String CENTROID;
		static ::String SINGLE;
		static ::String IGNORESAMPLER;
		static ::String REPEAT;
		static ::String WRAP;
		static ::String CLAMP;
		static ::String REPEAT_U_CLAMP_V;
		static ::String CLAMP_U_REPEAT_V;
		static ::String RGBA;
		static ::String COMPRESSED;
		static ::String COMPRESSEDALPHA;
		static ::String DXT1;
		static ::String DXT5;
		static ::String VIDEO;
		static bool initialized;
		static void init();
		static ::Dynamic init_dyn();

		 ::openfl::utils::ByteArrayData agalcode;
		::String error;
		bool verbose;
		bool debugEnabled;
		 ::openfl::display3D::Program3D assemble2( ::openfl::display3D::Context3D context3D,int version,::String vertexSource,::String fragmentSource);
		::Dynamic assemble2_dyn();

		 ::openfl::utils::ByteArrayData assemble(::String mode,::String source,::hx::Null< int >  version,::hx::Null< bool >  ignoreLimits);
		::Dynamic assemble_dyn();

		void initregmap(int version,bool ignorelimits);
		::Dynamic initregmap_dyn();

		::Array< ::String > match(::String value, ::EReg reg);
		::Dynamic match_dyn();

};

} // end namespace openfl
} // end namespace utils

#endif /* INCLUDED_openfl_utils_AGALMiniAssembler */ 
