package entities;

class Clan {
    
    public var name(default,null):ClanName;
    public var label(default,null):String;
    public var backgroundFileName(get,null):String;
    function get_backgroundFileName():String
    {
        return label.toLowerCase() + ".png";
    }

    public function new( name:ClanName )
    {
        this.name = name;
        switch (name)
        {
            case ClanName.BRUJAH:
                label = "Brujah";
            case ClanName.GANGREL:
                label = "Gangrel";
            case ClanName.MALKAVIAN:
                label = "Malkavian";
            case ClanName.NOSFERATU:
                label = "Nosferatu";
            case ClanName.TREMERE:
                label = "Tremere";
            case ClanName.TOREADOR:
                label = "Toreador";
            case ClanName.VENTRUE:
                label = "Ventrue";
            case _:
                label = "Ventrue";
        }
    }

}