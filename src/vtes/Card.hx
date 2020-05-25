package vtes;

import openfl.geom.Point;


class Card 
{
    public var category:CardCategory;
    public var types:Array<CardType>;
    public var name:String;
    public var clan:Clan;
    public var capacity:Int;
    public var poolCost:Int;
    public var bloodCost:Int;
    public var text:String;
    public var group:Int;
    public var extension:Extension;
    public var advanced:Bool;
    public var disciplines:Array<Discipline>;
    public var credits:String;
    public var copyright:String;
    public var illustration:String;
    public var illustrationScale:Float;
    public var illustrationPosition:Point;

    public function new( category:CardCategory, ?sourceArray:Array<String> = null)
    {
        this.category = category;

        // TODO 
        /*
        if(sourceArray != null)
        {
            name = sourceArray[1];
            
            clan = sourceArray[4];
            capacity = sourceArray[7];
        }
        */
    }

    public function toString():String {
        return "[CARD] " + name ;
    }
}