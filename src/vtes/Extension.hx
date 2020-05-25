package vtes;


class Extension {
    
    public var name(default,null):ExtensionName;
    public var label(default,null):String;
    public var labelMin(default,null):String;
    public var iconFileName(default,null):String;



    public function new( name:ExtensionName )
    {
        this.name = name;
        switch (name)
        {
            case ExtensionName.JYHAD:
                label = "Jyhad";
                labelMin = "J";
                iconFileName = "";
            case ExtensionName.VTES:
                label = "V:TES";
                labelMin = "V";
                iconFileName = "";
            case ExtensionName.SABBAT:
                label = "Sabbat";
                labelMin = "S";
                iconFileName = "";
            case ExtensionName.SABBAT_WARS:
                label = "Sabbat Wars";
                labelMin = "SW";
                iconFileName = "";
            case ExtensionName.FINAL_NIGHTS:
                label = "Final Nights";
                labelMin = "FN";
                iconFileName = "";
        }
    }

}