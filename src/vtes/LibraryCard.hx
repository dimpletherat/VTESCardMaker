package vtes;


class LibraryCard extends Card
{

    public function new(?sourceArray:Array<String> = null )
    {
        super( sourceArray);
        category = CardCategory.LIBRARY;
        if(sourceArray != null )
        {
            
        }
    }
}