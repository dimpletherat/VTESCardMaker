package vtes;


class CryptCard extends Card
{
    public var clan:String;
    public var capacity:String;
    
    public function new(?sourceArray:Array<String> = null)
    {
        super(sourceArray);
        category = CardCategory.CRYPT;
        if(sourceArray != null)
        {
            name = sourceArray[1];
            
            clan = sourceArray[4];
            capacity = sourceArray[7];
        }
    }

    public function toString():String {
        return "[CRYPT] " + name +" - " + capacity+" - " + clan;
    }
}