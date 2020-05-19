// Generated by Haxe 4.1.0
#ifndef INCLUDED_feathers_controls_supportClasses_BaseScrollContainer
#define INCLUDED_feathers_controls_supportClasses_BaseScrollContainer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_feathers_core_FeathersControl
#include <feathers/core/FeathersControl.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusObject
#include <feathers/core/IFocusObject.h>
#endif
HX_DECLARE_CLASS2(feathers,controls,IRange)
HX_DECLARE_CLASS2(feathers,controls,IScrollBar)
HX_DECLARE_CLASS2(feathers,controls,ScrollPolicy)
HX_DECLARE_CLASS3(feathers,controls,supportClasses,BaseScrollContainer)
HX_DECLARE_CLASS3(feathers,controls,supportClasses,IViewPort)
HX_DECLARE_CLASS2(feathers,core,FeathersControl)
HX_DECLARE_CLASS2(feathers,core,IDisplayObject)
HX_DECLARE_CLASS2(feathers,core,IFocusObject)
HX_DECLARE_CLASS2(feathers,core,IMeasureObject)
HX_DECLARE_CLASS2(feathers,core,IUIControl)
HX_DECLARE_CLASS2(feathers,core,IValidating)
HX_DECLARE_CLASS2(feathers,core,MeasureSprite)
HX_DECLARE_CLASS2(feathers,core,ValidatingSprite)
HX_DECLARE_CLASS2(feathers,events,ScrollEvent)
HX_DECLARE_CLASS2(feathers,layout,Direction)
HX_DECLARE_CLASS2(feathers,layout,ILayoutObject)
HX_DECLARE_CLASS2(feathers,layout,Measurements)
HX_DECLARE_CLASS2(feathers,layout,RelativePosition)
HX_DECLARE_CLASS2(feathers,style,IStyleObject)
HX_DECLARE_CLASS2(feathers,style,IVariantStyleObject)
HX_DECLARE_CLASS2(feathers,utils,Scroller)
HX_DECLARE_CLASS2(motion,actuators,GenericActuator)
HX_DECLARE_CLASS2(motion,actuators,IGenericActuator)
HX_DECLARE_CLASS2(motion,actuators,SimpleActuator)
HX_DECLARE_CLASS2(motion,easing,IEasing)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace feathers{
namespace controls{
namespace supportClasses{


class HXCPP_CLASS_ATTRIBUTES BaseScrollContainer_obj : public  ::feathers::core::FeathersControl_obj
{
	public:
		typedef  ::feathers::core::FeathersControl_obj super;
		typedef BaseScrollContainer_obj OBJ_;
		BaseScrollContainer_obj();

	public:
		enum { _hx_ClassId = 0x0498edf2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.controls.supportClasses.BaseScrollContainer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.controls.supportClasses.BaseScrollContainer"); }
		static ::hx::ObjectPtr< BaseScrollContainer_obj > __new();
		static ::hx::ObjectPtr< BaseScrollContainer_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BaseScrollContainer_obj();

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
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("BaseScrollContainer",43,e6,9e,b5); }

		static void __boot();
		static ::String INVALIDATION_FLAG_SCROLL_BAR_FACTORY;
		static ::Dynamic defaultScrollBarXFactory();
		static ::Dynamic defaultScrollBarXFactory_dyn();

		static ::Dynamic defaultScrollBarYFactory();
		static ::Dynamic defaultScrollBarYFactory_dyn();

		::Dynamic viewPort;
		::Dynamic set_viewPort(::Dynamic value);
		::Dynamic set_viewPort_dyn();

		 ::feathers::utils::Scroller scroller;
		bool _scrollerDraggingX;
		bool _scrollerDraggingY;
		bool _scrollBarXHover;
		bool _scrollBarYHover;
		 ::openfl::display::DisplayObject _currentBackgroundSkin;
		 ::feathers::layout::Measurements _backgroundSkinMeasurements;
		Float topViewPortOffset;
		Float rightViewPortOffset;
		Float bottomViewPortOffset;
		Float leftViewPortOffset;
		Float chromeMeasuredWidth;
		Float chromeMeasuredMinWidth;
		Float chromeMeasuredMaxWidth;
		Float chromeMeasuredHeight;
		Float chromeMeasuredMinHeight;
		Float chromeMeasuredMaxHeight;
		Float paddingTop;
		Float paddingRight;
		Float paddingBottom;
		Float paddingLeft;
		 ::openfl::display::DisplayObject backgroundSkin;
		 ::openfl::display::DisplayObject disabledBackgroundSkin;
		::Dynamic scrollBarX;
		::Dynamic scrollBarY;
		bool fixedScrollBars;
		bool autoHideScrollBars;
		bool showScrollBarX;
		bool showScrollBarY;
		 ::Dynamic scrollBarXFactory;
		Dynamic scrollBarXFactory_dyn() { return scrollBarXFactory;}
		 ::Dynamic set_scrollBarXFactory( ::Dynamic value);
		::Dynamic set_scrollBarXFactory_dyn();

		 ::Dynamic scrollBarYFactory;
		Dynamic scrollBarYFactory_dyn() { return scrollBarYFactory;}
		 ::Dynamic set_scrollBarYFactory( ::Dynamic value);
		::Dynamic set_scrollBarYFactory_dyn();

		Float get_scrollX();
		::Dynamic get_scrollX_dyn();

		Float set_scrollX(Float value);
		::Dynamic set_scrollX_dyn();

		Float get_scrollY();
		::Dynamic get_scrollY_dyn();

		Float set_scrollY(Float value);
		::Dynamic set_scrollY_dyn();

		Float get_minScrollX();
		::Dynamic get_minScrollX_dyn();

		Float get_minScrollY();
		::Dynamic get_minScrollY_dyn();

		Float get_maxScrollX();
		::Dynamic get_maxScrollX_dyn();

		Float get_maxScrollY();
		::Dynamic get_maxScrollY_dyn();

		 ::feathers::controls::ScrollPolicy scrollPolicyX;
		 ::feathers::controls::ScrollPolicy set_scrollPolicyX( ::feathers::controls::ScrollPolicy value);
		::Dynamic set_scrollPolicyX_dyn();

		 ::feathers::controls::ScrollPolicy scrollPolicyY;
		 ::feathers::controls::ScrollPolicy set_scrollPolicyY( ::feathers::controls::ScrollPolicy value);
		::Dynamic set_scrollPolicyY_dyn();

		bool simulateTouch;
		bool elasticEdges;
		 ::feathers::layout::RelativePosition scrollBarXPosition;
		 ::feathers::layout::RelativePosition scrollBarYPosition;
		 ::motion::actuators::SimpleActuator _hideScrollBarX;
		 ::motion::actuators::SimpleActuator _hideScrollBarY;
		Float hideScrollBarDuration;
		::Dynamic hideScrollBarEase;
		 ::openfl::geom::Rectangle _currentScrollRect;
		 ::openfl::geom::Rectangle _scrollRect1;
		 ::openfl::geom::Rectangle _scrollRect2;
		bool _ignoreScrollerChanges;
		bool _viewPortBoundsChanged;
		bool _ignoreViewPortResizing;
		Float _previousViewPortWidth;
		Float _previousViewPortHeight;
		bool get_measureViewPort();
		::Dynamic get_measureViewPort_dyn();

		virtual  ::feathers::layout::Direction get_primaryDirection();
		::Dynamic get_primaryDirection_dyn();

		void initialize();

		virtual void update();

		bool needsMeasurement();
		::Dynamic needsMeasurement_dyn();

		void createScrollBars();
		::Dynamic createScrollBars_dyn();

		void refreshEnabled();
		::Dynamic refreshEnabled_dyn();

		void refreshViewPort();
		::Dynamic refreshViewPort_dyn();

		void calculateViewPortOffsets(::hx::Null< bool >  forceScrollBars,::hx::Null< bool >  useActualBounds);
		::Dynamic calculateViewPortOffsets_dyn();

		void calculateViewPortOffsetsForFixedScrollBarX(::hx::Null< bool >  forceScrollBars,::hx::Null< bool >  useActualBounds);
		::Dynamic calculateViewPortOffsetsForFixedScrollBarX_dyn();

		void calculateViewPortOffsetsForFixedScrollBarY(::hx::Null< bool >  forceScrollBars,::hx::Null< bool >  useActualBounds);
		::Dynamic calculateViewPortOffsetsForFixedScrollBarY_dyn();

		void refreshViewPortBoundsForMeasurement();
		::Dynamic refreshViewPortBoundsForMeasurement_dyn();

		void refreshViewPortBoundsForLayout();
		::Dynamic refreshViewPortBoundsForLayout_dyn();

		void refreshScrollerValues();
		::Dynamic refreshScrollerValues_dyn();

		void refreshScrollBarValues();
		::Dynamic refreshScrollBarValues_dyn();

		bool measure();
		::Dynamic measure_dyn();

		void refreshBackgroundSkin();
		::Dynamic refreshBackgroundSkin_dyn();

		 ::openfl::display::DisplayObject getCurrentBackgroundSkin();
		::Dynamic getCurrentBackgroundSkin_dyn();

		void removeCurrentBackgroundSkin( ::openfl::display::DisplayObject skin);
		::Dynamic removeCurrentBackgroundSkin_dyn();

		void layoutChildren();
		::Dynamic layoutChildren_dyn();

		void layoutBackgroundSkin();
		::Dynamic layoutBackgroundSkin_dyn();

		void layoutScrollBars();
		::Dynamic layoutScrollBars_dyn();

		void refreshScrollRect();
		::Dynamic refreshScrollRect_dyn();

		void revealScrollBarX();
		::Dynamic revealScrollBarX_dyn();

		void revealScrollBarY();
		::Dynamic revealScrollBarY_dyn();

		void hideScrollBarX();
		::Dynamic hideScrollBarX_dyn();

		void hideScrollBarY();
		::Dynamic hideScrollBarY_dyn();

		void checkForRevealScrollBars();
		::Dynamic checkForRevealScrollBars_dyn();

		void scroller_scrollStartHandler( ::feathers::events::ScrollEvent event);
		::Dynamic scroller_scrollStartHandler_dyn();

		void scroller_scrollHandler( ::openfl::events::Event event);
		::Dynamic scroller_scrollHandler_dyn();

		void scroller_scrollCompleteHandler( ::feathers::events::ScrollEvent event);
		::Dynamic scroller_scrollCompleteHandler_dyn();

		void scrollBarX_changeHandler( ::openfl::events::Event event);
		::Dynamic scrollBarX_changeHandler_dyn();

		void scrollBarY_changeHandler( ::openfl::events::Event event);
		::Dynamic scrollBarY_changeHandler_dyn();

		void scrollBarX_rollOverHandler( ::openfl::events::MouseEvent event);
		::Dynamic scrollBarX_rollOverHandler_dyn();

		void scrollBarX_rollOutHandler( ::openfl::events::MouseEvent event);
		::Dynamic scrollBarX_rollOutHandler_dyn();

		void scrollBarY_rollOverHandler( ::openfl::events::MouseEvent event);
		::Dynamic scrollBarY_rollOverHandler_dyn();

		void scrollBarY_rollOutHandler( ::openfl::events::MouseEvent event);
		::Dynamic scrollBarY_rollOutHandler_dyn();

		void scrollBarX_scrollStartHandler( ::feathers::events::ScrollEvent event);
		::Dynamic scrollBarX_scrollStartHandler_dyn();

		void scrollBarX_scrollCompleteHandler( ::feathers::events::ScrollEvent event);
		::Dynamic scrollBarX_scrollCompleteHandler_dyn();

		void scrollBarY_scrollStartHandler( ::feathers::events::ScrollEvent event);
		::Dynamic scrollBarY_scrollStartHandler_dyn();

		void scrollBarY_scrollCompleteHandler( ::feathers::events::ScrollEvent event);
		::Dynamic scrollBarY_scrollCompleteHandler_dyn();

		void hideScrollBarX_onComplete();
		::Dynamic hideScrollBarX_onComplete_dyn();

		void hideScrollBarY_onComplete();
		::Dynamic hideScrollBarY_onComplete_dyn();

		void viewPort_resizeHandler( ::openfl::events::Event event);
		::Dynamic viewPort_resizeHandler_dyn();

		Float set_paddingTop(Float value);
		::Dynamic set_paddingTop_dyn();

		Float clearStyle_paddingTop();
		::Dynamic clearStyle_paddingTop_dyn();

		Float set_paddingRight(Float value);
		::Dynamic set_paddingRight_dyn();

		Float clearStyle_paddingRight();
		::Dynamic clearStyle_paddingRight_dyn();

		Float set_paddingBottom(Float value);
		::Dynamic set_paddingBottom_dyn();

		Float clearStyle_paddingBottom();
		::Dynamic clearStyle_paddingBottom_dyn();

		Float set_paddingLeft(Float value);
		::Dynamic set_paddingLeft_dyn();

		Float clearStyle_paddingLeft();
		::Dynamic clearStyle_paddingLeft_dyn();

		 ::openfl::display::DisplayObject set_backgroundSkin( ::openfl::display::DisplayObject value);
		::Dynamic set_backgroundSkin_dyn();

		 ::openfl::display::DisplayObject clearStyle_backgroundSkin();
		::Dynamic clearStyle_backgroundSkin_dyn();

		 ::openfl::display::DisplayObject set_disabledBackgroundSkin( ::openfl::display::DisplayObject value);
		::Dynamic set_disabledBackgroundSkin_dyn();

		 ::openfl::display::DisplayObject clearStyle_disabledBackgroundSkin();
		::Dynamic clearStyle_disabledBackgroundSkin_dyn();

		bool set_fixedScrollBars(bool value);
		::Dynamic set_fixedScrollBars_dyn();

		bool clearStyle_fixedScrollBars();
		::Dynamic clearStyle_fixedScrollBars_dyn();

		bool set_autoHideScrollBars(bool value);
		::Dynamic set_autoHideScrollBars_dyn();

		bool clearStyle_autoHideScrollBars();
		::Dynamic clearStyle_autoHideScrollBars_dyn();

		bool set_simulateTouch(bool value);
		::Dynamic set_simulateTouch_dyn();

		bool clearStyle_simulateTouch();
		::Dynamic clearStyle_simulateTouch_dyn();

		bool set_elasticEdges(bool value);
		::Dynamic set_elasticEdges_dyn();

		bool clearStyle_elasticEdges();
		::Dynamic clearStyle_elasticEdges_dyn();

		 ::feathers::layout::RelativePosition set_scrollBarXPosition( ::feathers::layout::RelativePosition value);
		::Dynamic set_scrollBarXPosition_dyn();

		 ::feathers::layout::RelativePosition clearStyle_scrollBarXPosition();
		::Dynamic clearStyle_scrollBarXPosition_dyn();

		 ::feathers::layout::RelativePosition set_scrollBarYPosition( ::feathers::layout::RelativePosition value);
		::Dynamic set_scrollBarYPosition_dyn();

		 ::feathers::layout::RelativePosition clearStyle_scrollBarYPosition();
		::Dynamic clearStyle_scrollBarYPosition_dyn();

		Float set_hideScrollBarDuration(Float value);
		::Dynamic set_hideScrollBarDuration_dyn();

		Float clearStyle_hideScrollBarDuration();
		::Dynamic clearStyle_hideScrollBarDuration_dyn();

		::Dynamic set_hideScrollBarEase(::Dynamic value);
		::Dynamic set_hideScrollBarEase_dyn();

		::Dynamic clearStyle_hideScrollBarEase();
		::Dynamic clearStyle_hideScrollBarEase_dyn();

};

} // end namespace feathers
} // end namespace controls
} // end namespace supportClasses

#endif /* INCLUDED_feathers_controls_supportClasses_BaseScrollContainer */ 
