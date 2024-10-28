package com.nbigot.vtescardmaker.vtes;

class Clan {
    
    public var name(default,null):EClanName;
    public var label(default,null):String;
    public var backgroundFileName(get,null):String;
    function get_backgroundFileName():String
    {
        return label.toLowerCase() + ".png";
    }

    public function new( name:EClanName )
    {
        this.name = name;
        switch (name)
        {
            case EClanName.BRUJAH:
                //label = "Brujah";
                label = "tmp";
            case EClanName.GANGREL:
                label = "Gangrel";
            case EClanName.MALKAVIAN:
                label = "Malkavian";
            case EClanName.NOSFERATU:
                label = "Nosferatu";
            case EClanName.TREMERE:
                label = "Tremere";
            case EClanName.TOREADOR:
                label = "Toreador";
            case EClanName.VENTRUE:
                label = "Ventrue";
            case _:
                label = "Ventrue";
        }
    }

}