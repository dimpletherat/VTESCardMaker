package com.nbigot.vtescardmaker.vtes;


class Extension {
    
    public var name(default,null):EExtensionName;
    public var label(default,null):String;
    public var labelMin(default,null):String;
    public var iconFileName(default,null):String;



    public function new( name:EExtensionName )
    {
        this.name = name;
        switch (name)
        {
            case EExtensionName.JYHAD:
                label = "Jyhad";
                labelMin = "J";
                iconFileName = "";
            case EExtensionName.VTES:
                label = "V:TES";
                labelMin = "V";
                iconFileName = "";
            case EExtensionName.SABBAT:
                label = "Sabbat";
                labelMin = "S";
                iconFileName = "";
            case EExtensionName.SABBAT_WARS:
                label = "Sabbat Wars";
                labelMin = "SW";
                iconFileName = "";
            case EExtensionName.FINAL_NIGHTS:
                label = "Final Nights";
                labelMin = "FN";
                iconFileName = "";
        }
    }

}