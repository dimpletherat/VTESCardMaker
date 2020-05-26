package vtes;

class Discipline {
    
    public var name(default,null):DisciplineName;
    public var label(default,null):String;
    public var code(default,null):String;
    public var level(default,null):DisciplineLevel;
    public var iconFileName(get,null):String;
    public function get_iconFileName():String
    {
        iconFileName = code.toLowerCase();
        if ( level == SUPERIOR ) iconFileName += "-sup";
        iconFileName += ".svg";
        return iconFileName;
    }

    public function new( name:DisciplineName, level:DisciplineLevel = SUPERIOR )
    {
        this.name = name;
        this.level = level;

        switch (name)
        {
            case DisciplineName.ANIMALISM:
                label = "Animalism";
                code = "ANI";
            case DisciplineName.AUSPEX:
                label = "Auspex";
                code = "AUS";
            case DisciplineName.CELERITY:
                label = "Celerity";
                code = "CEL";
            case DisciplineName.DOMINATE:
                label = "Dominate";
                code = "DOM";
            case DisciplineName.FORTITUDE:
                label = "Fortitude";
                code = "FOR";
            case DisciplineName.OBFUSCATE:
                label = "Obfuscate";
                code = "OBF";
            case DisciplineName.POTENCE:
                label = "Potence";
                code = "POT";
            case DisciplineName.PRESENCE:
                label = "Presence";
                code = "PRE";
            case DisciplineName.PROTEAN:
                label = "Protean";
                code = "PRO";
            case DisciplineName.THAUMATURGY:
                label = "Thaumaturgy";
                code = "THA";
        }
    }

}