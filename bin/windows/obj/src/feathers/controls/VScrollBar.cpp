// Generated by Haxe 4.1.0
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_feathers_controls_IRange
#include <feathers/controls/IRange.h>
#endif
#ifndef INCLUDED_feathers_controls_IScrollBar
#include <feathers/controls/IScrollBar.h>
#endif
#ifndef INCLUDED_feathers_controls_VScrollBar
#include <feathers/controls/VScrollBar.h>
#endif
#ifndef INCLUDED_feathers_controls_supportClasses_BaseScrollBar
#include <feathers/controls/supportClasses/BaseScrollBar.h>
#endif
#ifndef INCLUDED_feathers_core_FeathersControl
#include <feathers/core/FeathersControl.h>
#endif
#ifndef INCLUDED_feathers_core_IDisplayObject
#include <feathers/core/IDisplayObject.h>
#endif
#ifndef INCLUDED_feathers_core_IMeasureObject
#include <feathers/core/IMeasureObject.h>
#endif
#ifndef INCLUDED_feathers_core_IUIControl
#include <feathers/core/IUIControl.h>
#endif
#ifndef INCLUDED_feathers_core_IValidating
#include <feathers/core/IValidating.h>
#endif
#ifndef INCLUDED_feathers_core_MeasureSprite
#include <feathers/core/MeasureSprite.h>
#endif
#ifndef INCLUDED_feathers_core_ValidatingSprite
#include <feathers/core/ValidatingSprite.h>
#endif
#ifndef INCLUDED_feathers_layout_ILayoutObject
#include <feathers/layout/ILayoutObject.h>
#endif
#ifndef INCLUDED_feathers_layout_Measurements
#include <feathers/layout/Measurements.h>
#endif
#ifndef INCLUDED_feathers_style_IDarkModeTheme
#include <feathers/style/IDarkModeTheme.h>
#endif
#ifndef INCLUDED_feathers_style_IStyleObject
#include <feathers/style/IStyleObject.h>
#endif
#ifndef INCLUDED_feathers_style_ITheme
#include <feathers/style/ITheme.h>
#endif
#ifndef INCLUDED_feathers_style_IVariantStyleObject
#include <feathers/style/IVariantStyleObject.h>
#endif
#ifndef INCLUDED_feathers_themes_ClassVariantTheme
#include <feathers/themes/ClassVariantTheme.h>
#endif
#ifndef INCLUDED_feathers_themes_steel_BaseSteelTheme
#include <feathers/themes/steel/BaseSteelTheme.h>
#endif
#ifndef INCLUDED_feathers_themes_steel_components_SteelVScrollBarStyles
#include <feathers/themes/steel/components/SteelVScrollBarStyles.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7c7510edb0f146a1_32_new,"feathers.controls.VScrollBar","new",0xe52df2fc,"feathers.controls.VScrollBar.new","feathers/controls/VScrollBar.hx",32,0xd3669c14)
HX_LOCAL_STACK_FRAME(_hx_pos_7c7510edb0f146a1_39_initializeVScrollBarTheme,"feathers.controls.VScrollBar","initializeVScrollBarTheme",0xeba9a7a5,"feathers.controls.VScrollBar.initializeVScrollBarTheme","feathers/controls/VScrollBar.hx",39,0xd3669c14)
HX_LOCAL_STACK_FRAME(_hx_pos_7c7510edb0f146a1_42_valueToLocation,"feathers.controls.VScrollBar","valueToLocation",0xe5003a3d,"feathers.controls.VScrollBar.valueToLocation","feathers/controls/VScrollBar.hx",42,0xd3669c14)
HX_LOCAL_STACK_FRAME(_hx_pos_7c7510edb0f146a1_52_locationToValue,"feathers.controls.VScrollBar","locationToValue",0x155482dd,"feathers.controls.VScrollBar.locationToValue","feathers/controls/VScrollBar.hx",52,0xd3669c14)
HX_LOCAL_STACK_FRAME(_hx_pos_7c7510edb0f146a1_61_saveThumbStart,"feathers.controls.VScrollBar","saveThumbStart",0x63cabaed,"feathers.controls.VScrollBar.saveThumbStart","feathers/controls/VScrollBar.hx",61,0xd3669c14)
HX_LOCAL_STACK_FRAME(_hx_pos_7c7510edb0f146a1_72_measure,"feathers.controls.VScrollBar","measure",0x08ff9bfa,"feathers.controls.VScrollBar.measure","feathers/controls/VScrollBar.hx",72,0xd3669c14)
HX_LOCAL_STACK_FRAME(_hx_pos_7c7510edb0f146a1_136_layoutSplitTrack,"feathers.controls.VScrollBar","layoutSplitTrack",0x4cf4547f,"feathers.controls.VScrollBar.layoutSplitTrack","feathers/controls/VScrollBar.hx",136,0xd3669c14)
HX_LOCAL_STACK_FRAME(_hx_pos_7c7510edb0f146a1_162_layoutSingleTrack,"feathers.controls.VScrollBar","layoutSingleTrack",0x3ee55bf5,"feathers.controls.VScrollBar.layoutSingleTrack","feathers/controls/VScrollBar.hx",162,0xd3669c14)
HX_LOCAL_STACK_FRAME(_hx_pos_7c7510edb0f146a1_177_layoutThumb,"feathers.controls.VScrollBar","layoutThumb",0xaa6419a8,"feathers.controls.VScrollBar.layoutThumb","feathers/controls/VScrollBar.hx",177,0xd3669c14)
HX_LOCAL_STACK_FRAME(_hx_pos_991a3714533c85f3_42_get_styleContext,"feathers.controls.VScrollBar","get_styleContext",0x8cb7e92b,"feathers.controls.VScrollBar.get_styleContext","feathers/macros/StyleContextMacro.hx",42,0xea61cbb9)
namespace feathers{
namespace controls{

void VScrollBar_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_7c7510edb0f146a1_32_new)
HXLINE(  33)		this->initializeVScrollBarTheme();
HXLINE(  35)		super::__construct();
            	}

Dynamic VScrollBar_obj::__CreateEmpty() { return new VScrollBar_obj; }

void *VScrollBar_obj::_hx_vtable = 0;

Dynamic VScrollBar_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VScrollBar_obj > _hx_result = new VScrollBar_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VScrollBar_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x093ab78b) {
				if (inClassId<=(int)0x0330636f) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
				} else {
					return inClassId==(int)0x093ab78b;
				}
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x1c8e1d36 || inClassId==(int)0x1f4df417;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			if (inClassId<=(int)0x4033f4be) {
				return inClassId==(int)0x28846938 || inClassId==(int)0x4033f4be;
			} else {
				return inClassId==(int)0x4af7dd8e;
			}
		} else {
			return inClassId==(int)0x58123034 || inClassId==(int)0x6b353933;
		}
	}
}

void VScrollBar_obj::initializeVScrollBarTheme(){
            	HX_STACKFRAME(&_hx_pos_7c7510edb0f146a1_39_initializeVScrollBarTheme)
HXDLIN(  39)		::feathers::themes::steel::components::SteelVScrollBarStyles_obj::initialize(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(VScrollBar_obj,initializeVScrollBarTheme,(void))

Float VScrollBar_obj::valueToLocation(Float value){
            	HX_STACKFRAME(&_hx_pos_7c7510edb0f146a1_42_valueToLocation)
HXLINE(  44)		if (::Std_obj::isOfType(this->thumbSkin,( ( ::Dynamic)(::hx::ClassOf< ::feathers::core::IValidating >()) ))) {
HXLINE(  45)			::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->thumbSkin,0x64d4b3cd));
            		}
HXLINE(  47)		Float normalized = this->normalizeValue();
HXLINE(  48)		Float trackScrollableHeight = ((this->actualHeight - this->paddingTop) - this->paddingBottom);
HXDLIN(  48)		Float trackScrollableHeight1 = (trackScrollableHeight - this->thumbSkin->get_height());
HXLINE(  49)		return (this->paddingTop + (trackScrollableHeight1 * normalized));
            	}


Float VScrollBar_obj::locationToValue(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_7c7510edb0f146a1_52_locationToValue)
HXLINE(  53)		Float percentage = ((Float)0.0);
HXLINE(  54)		Float trackScrollableHeight = ((this->actualHeight - this->paddingTop) - this->paddingBottom);
HXDLIN(  54)		Float trackScrollableHeight1 = (trackScrollableHeight - this->thumbSkin->get_height());
HXLINE(  55)		Float yOffset = (y - this->_pointerStartY);
HXLINE(  56)		Float yPosition = ::Math_obj::min(::Math_obj::max(((Float)0.0),(this->_thumbStartY + yOffset)),trackScrollableHeight1);
HXLINE(  57)		percentage = (yPosition / trackScrollableHeight1);
HXLINE(  58)		Float _hx_tmp = this->get_minimum();
HXDLIN(  58)		Float _hx_tmp1 = this->get_maximum();
HXDLIN(  58)		return (_hx_tmp + (percentage * (_hx_tmp1 - this->get_minimum())));
            	}


void VScrollBar_obj::saveThumbStart( ::openfl::geom::Point location){
            	HX_STACKFRAME(&_hx_pos_7c7510edb0f146a1_61_saveThumbStart)
HXLINE(  62)		Float trackHeightMinusThumbHeight = this->actualHeight;
HXLINE(  63)		Float locationMinusHalfThumbHeight = location->y;
HXLINE(  64)		if (::hx::IsNotNull( this->thumbSkin )) {
HXLINE(  65)			trackHeightMinusThumbHeight = (trackHeightMinusThumbHeight - this->thumbSkin->get_height());
HXLINE(  66)			locationMinusHalfThumbHeight = (locationMinusHalfThumbHeight - (this->thumbSkin->get_height() / ((Float)2.0)));
            		}
HXLINE(  68)		this->_thumbStartX = location->x;
HXLINE(  69)		this->_thumbStartY = ::Math_obj::min(trackHeightMinusThumbHeight,locationMinusHalfThumbHeight);
            	}


bool VScrollBar_obj::measure(){
            	HX_STACKFRAME(&_hx_pos_7c7510edb0f146a1_72_measure)
HXLINE(  73)		bool needsWidth = ::hx::IsNull( this->get_explicitWidth() );
HXLINE(  74)		bool needsHeight = ::hx::IsNull( this->get_explicitHeight() );
HXLINE(  75)		bool needsMinWidth = ::hx::IsNull( this->get_explicitMinWidth() );
HXLINE(  76)		bool needsMinHeight = ::hx::IsNull( this->get_explicitMinHeight() );
HXLINE(  77)		bool needsMaxWidth = ::hx::IsNull( this->get_explicitMaxWidth() );
HXLINE(  78)		bool needsMaxHeight = ::hx::IsNull( this->get_explicitMaxHeight() );
HXLINE(  79)		bool _hx_tmp;
HXDLIN(  79)		bool _hx_tmp1;
HXDLIN(  79)		bool _hx_tmp2;
HXDLIN(  79)		bool _hx_tmp3;
HXDLIN(  79)		bool _hx_tmp4;
HXDLIN(  79)		if (!(needsWidth)) {
HXLINE(  79)			_hx_tmp4 = !(needsHeight);
            		}
            		else {
HXLINE(  79)			_hx_tmp4 = false;
            		}
HXDLIN(  79)		if (_hx_tmp4) {
HXLINE(  79)			_hx_tmp3 = !(needsMinWidth);
            		}
            		else {
HXLINE(  79)			_hx_tmp3 = false;
            		}
HXDLIN(  79)		if (_hx_tmp3) {
HXLINE(  79)			_hx_tmp2 = !(needsMinHeight);
            		}
            		else {
HXLINE(  79)			_hx_tmp2 = false;
            		}
HXDLIN(  79)		if (_hx_tmp2) {
HXLINE(  79)			_hx_tmp1 = !(needsMaxWidth);
            		}
            		else {
HXLINE(  79)			_hx_tmp1 = false;
            		}
HXDLIN(  79)		if (_hx_tmp1) {
HXLINE(  79)			_hx_tmp = !(needsMaxHeight);
            		}
            		else {
HXLINE(  79)			_hx_tmp = false;
            		}
HXDLIN(  79)		if (_hx_tmp) {
HXLINE(  80)			return false;
            		}
HXLINE(  83)		this->_thumbSkinMeasurements->restore(this->thumbSkin);
HXLINE(  84)		if (::Std_obj::isOfType(this->thumbSkin,( ( ::Dynamic)(::hx::ClassOf< ::feathers::core::IValidating >()) ))) {
HXLINE(  85)			::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->thumbSkin,0x64d4b3cd));
            		}
HXLINE(  87)		if (::hx::IsNotNull( this->trackSkin )) {
HXLINE(  88)			this->_trackSkinMeasurements->restore(this->trackSkin);
HXLINE(  89)			if (::Std_obj::isOfType(this->trackSkin,( ( ::Dynamic)(::hx::ClassOf< ::feathers::core::IValidating >()) ))) {
HXLINE(  90)				::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->trackSkin,0x64d4b3cd));
            			}
            		}
HXLINE(  93)		if (::hx::IsNotNull( this->secondaryTrackSkin )) {
HXLINE(  94)			this->_secondaryTrackSkinMeasurements->restore(this->secondaryTrackSkin);
HXLINE(  95)			if (::Std_obj::isOfType(this->secondaryTrackSkin,( ( ::Dynamic)(::hx::ClassOf< ::feathers::core::IValidating >()) ))) {
HXLINE(  96)				::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->secondaryTrackSkin,0x64d4b3cd));
            			}
            		}
HXLINE( 100)		 ::Dynamic newWidth = this->get_explicitWidth();
HXLINE( 101)		if (needsWidth) {
HXLINE( 102)			Float newWidth1 = this->thumbSkin->get_width();
HXDLIN( 102)			newWidth = ((newWidth1 + this->paddingLeft) + this->paddingRight);
HXLINE( 103)			if (::hx::IsNotNull( this->trackSkin )) {
HXLINE( 104)				if (::hx::IsLess( newWidth,this->trackSkin->get_width() )) {
HXLINE( 105)					newWidth = this->trackSkin->get_width();
            				}
HXLINE( 107)				bool _hx_tmp;
HXDLIN( 107)				if (::hx::IsNotNull( this->secondaryTrackSkin )) {
HXLINE( 107)					_hx_tmp = ::hx::IsLess( newWidth,this->secondaryTrackSkin->get_width() );
            				}
            				else {
HXLINE( 107)					_hx_tmp = false;
            				}
HXDLIN( 107)				if (_hx_tmp) {
HXLINE( 108)					newWidth = this->secondaryTrackSkin->get_width();
            				}
            			}
            		}
HXLINE( 113)		 ::Dynamic newHeight = this->get_explicitHeight();
HXLINE( 114)		if (needsHeight) {
HXLINE( 115)			newHeight = ((Float)0.0);
HXLINE( 116)			if (::hx::IsNotNull( this->trackSkin )) {
HXLINE( 117)				newHeight = (newHeight + this->trackSkin->get_height());
HXLINE( 118)				if (::hx::IsNotNull( this->secondaryTrackSkin )) {
HXLINE( 119)					newHeight = (newHeight + this->secondaryTrackSkin->get_height());
            				}
            			}
HXLINE( 122)			Float thumbHeight = this->thumbSkin->get_height();
HXDLIN( 122)			Float thumbHeight1 = ((thumbHeight + this->paddingTop) + this->paddingBottom);
HXLINE( 123)			if (::hx::IsLess( newHeight,thumbHeight1 )) {
HXLINE( 124)				newHeight = thumbHeight1;
            			}
            		}
HXLINE( 129)		 ::Dynamic newMinWidth = newWidth;
HXLINE( 130)		 ::Dynamic newMinHeight = newHeight;
HXLINE( 131)		 ::Dynamic newMaxWidth = newWidth;
HXLINE( 133)		return this->saveMeasurements(( (Float)(newWidth) ),( (Float)(newHeight) ),newMinWidth,newMinHeight,newMaxWidth,::Math_obj::POSITIVE_INFINITY);
            	}


void VScrollBar_obj::layoutSplitTrack(){
            	HX_STACKFRAME(&_hx_pos_7c7510edb0f146a1_136_layoutSplitTrack)
HXLINE( 137)		Float location = this->valueToLocation(this->get_value());
HXLINE( 138)		if (::hx::IsNotNull( this->thumbSkin )) {
HXLINE( 139)			if (::Std_obj::isOfType(this->thumbSkin,( ( ::Dynamic)(::hx::ClassOf< ::feathers::core::IValidating >()) ))) {
HXLINE( 140)				::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->thumbSkin,0x64d4b3cd));
            			}
HXLINE( 142)			location = (location + ::Math_obj::round((this->thumbSkin->get_height() / ((Float)2.0))));
            		}
HXLINE( 145)		this->secondaryTrackSkin->set_y(((Float)0.0));
HXLINE( 146)		this->secondaryTrackSkin->set_height(location);
HXLINE( 148)		this->trackSkin->set_y(location);
HXLINE( 149)		this->trackSkin->set_height((this->actualHeight - location));
HXLINE( 151)		if (::Std_obj::isOfType(this->secondaryTrackSkin,( ( ::Dynamic)(::hx::ClassOf< ::feathers::core::IValidating >()) ))) {
HXLINE( 152)			::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->secondaryTrackSkin,0x64d4b3cd));
            		}
HXLINE( 154)		if (::Std_obj::isOfType(this->trackSkin,( ( ::Dynamic)(::hx::ClassOf< ::feathers::core::IValidating >()) ))) {
HXLINE( 155)			::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->trackSkin,0x64d4b3cd));
            		}
HXLINE( 158)		 ::openfl::display::DisplayObject _hx_tmp = this->secondaryTrackSkin;
HXDLIN( 158)		Float _hx_tmp1 = this->actualWidth;
HXDLIN( 158)		_hx_tmp->set_x(((_hx_tmp1 - this->secondaryTrackSkin->get_width()) / ((Float)2.0)));
HXLINE( 159)		 ::openfl::display::DisplayObject _hx_tmp2 = this->trackSkin;
HXDLIN( 159)		Float _hx_tmp3 = this->actualWidth;
HXDLIN( 159)		_hx_tmp2->set_x(((_hx_tmp3 - this->trackSkin->get_width()) / ((Float)2.0)));
            	}


void VScrollBar_obj::layoutSingleTrack(){
            	HX_STACKFRAME(&_hx_pos_7c7510edb0f146a1_162_layoutSingleTrack)
HXLINE( 163)		if (::hx::IsNull( this->trackSkin )) {
HXLINE( 164)			return;
            		}
HXLINE( 167)		this->trackSkin->set_y(((Float)0.0));
HXLINE( 168)		this->trackSkin->set_height(this->actualHeight);
HXLINE( 170)		if (::Std_obj::isOfType(this->trackSkin,( ( ::Dynamic)(::hx::ClassOf< ::feathers::core::IValidating >()) ))) {
HXLINE( 171)			::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->trackSkin,0x64d4b3cd));
            		}
HXLINE( 174)		 ::openfl::display::DisplayObject _hx_tmp = this->trackSkin;
HXDLIN( 174)		Float _hx_tmp1 = this->actualWidth;
HXDLIN( 174)		_hx_tmp->set_x(((_hx_tmp1 - this->trackSkin->get_width()) / ((Float)2.0)));
            	}


void VScrollBar_obj::layoutThumb(){
            	HX_STACKFRAME(&_hx_pos_7c7510edb0f146a1_177_layoutThumb)
HXLINE( 178)		if (::hx::IsNull( this->thumbSkin )) {
HXLINE( 179)			return;
            		}
HXLINE( 182)		Float range = this->get_maximum();
HXDLIN( 182)		Float range1 = (range - this->get_minimum());
HXLINE( 183)		this->thumbSkin->set_visible((range1 > ((Float)0.0)));
HXLINE( 184)		if (!(this->thumbSkin->get_visible())) {
HXLINE( 185)			return;
            		}
HXLINE( 188)		if (::Std_obj::isOfType(this->thumbSkin,( ( ::Dynamic)(::hx::ClassOf< ::feathers::core::IValidating >()) ))) {
HXLINE( 189)			::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->thumbSkin,0x64d4b3cd));
            		}
HXLINE( 192)		Float valueOffset = ((Float)0.0);
HXLINE( 193)		Float _hx_tmp = this->get_value();
HXDLIN( 193)		if ((_hx_tmp < this->get_minimum())) {
HXLINE( 194)			Float valueOffset1 = this->get_minimum();
HXDLIN( 194)			valueOffset = (valueOffset1 - this->get_value());
            		}
            		else {
HXLINE( 195)			Float _hx_tmp = this->get_value();
HXDLIN( 195)			if ((_hx_tmp > this->get_maximum())) {
HXLINE( 196)				Float valueOffset1 = this->get_value();
HXDLIN( 196)				valueOffset = (valueOffset1 - this->get_maximum());
            			}
            		}
HXLINE( 199)		Float contentWidth = ((this->actualWidth - this->paddingLeft) - this->paddingRight);
HXLINE( 200)		Float contentHeight = ((this->actualHeight - this->paddingTop) - this->paddingBottom);
HXLINE( 202)		if (this->fixedThumbSize) {
HXLINE( 203)			this->thumbSkin->set_height(( (Float)(this->_thumbSkinMeasurements->height) ));
            		}
            		else {
HXLINE( 205)			Float thumbHeight = ((contentHeight * this->getAdjustedPage()) / range1);
HXLINE( 206)			if ((thumbHeight > ((Float)0.0))) {
HXLINE( 207)				Float heightOffset = (contentHeight - thumbHeight);
HXLINE( 208)				if ((heightOffset > thumbHeight)) {
HXLINE( 209)					heightOffset = thumbHeight;
            				}
HXLINE( 211)				heightOffset = (heightOffset * (valueOffset / ((range1 * thumbHeight) / contentHeight)));
HXLINE( 212)				thumbHeight = (thumbHeight - heightOffset);
            			}
HXLINE( 214)			bool _hx_tmp;
HXDLIN( 214)			if (::hx::IsNotNull( this->_thumbSkinMeasurements->minHeight )) {
HXLINE( 214)				_hx_tmp = ::hx::IsLess( thumbHeight,this->_thumbSkinMeasurements->minHeight );
            			}
            			else {
HXLINE( 214)				_hx_tmp = false;
            			}
HXDLIN( 214)			if (_hx_tmp) {
HXLINE( 215)				thumbHeight = ( (Float)(this->_thumbSkinMeasurements->minHeight) );
            			}
HXLINE( 217)			if ((thumbHeight < ((Float)0.0))) {
HXLINE( 218)				thumbHeight = ((Float)0.0);
            			}
HXLINE( 220)			this->thumbSkin->set_height(thumbHeight);
            		}
HXLINE( 222)		 ::openfl::display::DisplayObject _hx_tmp1 = this->thumbSkin;
HXDLIN( 222)		Float _hx_tmp2 = this->paddingLeft;
HXDLIN( 222)		_hx_tmp1->set_x((_hx_tmp2 + ((contentWidth - this->thumbSkin->get_width()) / ((Float)2.0))));
HXLINE( 223)		 ::openfl::display::DisplayObject _hx_tmp3 = this->thumbSkin;
HXDLIN( 223)		_hx_tmp3->set_y(this->valueToLocation(this->get_value()));
            	}


::hx::Class VScrollBar_obj::get_styleContext(){
            	HX_STACKFRAME(&_hx_pos_991a3714533c85f3_42_get_styleContext)
HXDLIN(  42)		return ::hx::ClassOf< ::feathers::controls::VScrollBar >();
            	}



::hx::ObjectPtr< VScrollBar_obj > VScrollBar_obj::__new() {
	::hx::ObjectPtr< VScrollBar_obj > __this = new VScrollBar_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< VScrollBar_obj > VScrollBar_obj::__alloc(::hx::Ctx *_hx_ctx) {
	VScrollBar_obj *__this = (VScrollBar_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VScrollBar_obj), true, "feathers.controls.VScrollBar"));
	*(void **)__this = VScrollBar_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

VScrollBar_obj::VScrollBar_obj()
{
}

::hx::Val VScrollBar_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"measure") ) { return ::hx::Val( measure_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"layoutThumb") ) { return ::hx::Val( layoutThumb_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"saveThumbStart") ) { return ::hx::Val( saveThumbStart_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"valueToLocation") ) { return ::hx::Val( valueToLocation_dyn() ); }
		if (HX_FIELD_EQ(inName,"locationToValue") ) { return ::hx::Val( locationToValue_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"layoutSplitTrack") ) { return ::hx::Val( layoutSplitTrack_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_styleContext") ) { return ::hx::Val( get_styleContext_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"layoutSingleTrack") ) { return ::hx::Val( layoutSingleTrack_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"initializeVScrollBarTheme") ) { return ::hx::Val( initializeVScrollBarTheme_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *VScrollBar_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *VScrollBar_obj_sStaticStorageInfo = 0;
#endif

static ::String VScrollBar_obj_sMemberFields[] = {
	HX_("initializeVScrollBarTheme",09,b0,b3,35),
	HX_("valueToLocation",a1,9d,2e,0f),
	HX_("locationToValue",41,e6,82,3f),
	HX_("saveThumbStart",09,d0,2e,f1),
	HX_("measure",5e,fb,e9,3c),
	HX_("layoutSplitTrack",9b,e8,5c,0b),
	HX_("layoutSingleTrack",59,60,fe,1b),
	HX_("layoutThumb",0c,fb,7b,c0),
	HX_("get_styleContext",47,7d,20,4b),
	::String(null()) };

::hx::Class VScrollBar_obj::__mClass;

void VScrollBar_obj::__register()
{
	VScrollBar_obj _hx_dummy;
	VScrollBar_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.controls.VScrollBar",0a,05,8a,f6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VScrollBar_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VScrollBar_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VScrollBar_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VScrollBar_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace controls
