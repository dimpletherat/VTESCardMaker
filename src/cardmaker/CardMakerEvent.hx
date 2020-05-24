package cardmaker;

import openfl.events.Event;

class CardMakerEvent extends Event
{

    public var data(default, null):Any;


    public function new( type:String, data:Any = null, ?bubbles:Bool = false, ?cancelable:Bool = false ) {
        super( type, bubbles, cancelable);

        this.data = data;
    }
}