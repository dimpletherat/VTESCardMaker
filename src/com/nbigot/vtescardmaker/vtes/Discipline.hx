package com.nbigot.vtescardmaker.vtes;

import com.nbigot.vtescardmaker.vtes.EDisciplineName;

class Discipline {
    
    public var name(default,null):EDisciplineName;
    public var label(default,null):String;
    public var code(default,null):String;
    public var level(default,null):EDisciplineLevel;
    public var iconFileName(get,null):String;
    public function get_iconFileName():String
    {
        iconFileName = code.toLowerCase();
        if ( level == SUPERIOR ) iconFileName += "-sup";
        iconFileName += ".svg";
        return iconFileName;
    }

    public function new( name:EDisciplineName, level:EDisciplineLevel = SUPERIOR )
    {
        this.name = name;
        this.level = level;

        switch (name)
        {
            case EDisciplineName.ANIMALISM:
                label = "Animalism";
                code = "ANI";
            case EDisciplineName.AUSPEX:
                label = "Auspex";
                code = "AUS";
            case EDisciplineName.CELERITY:
                label = "Celerity";
                code = "CEL";
            case EDisciplineName.DOMINATE:
                label = "Dominate";
                code = "DOM";
            case EDisciplineName.FORTITUDE:
                label = "Fortitude";
                code = "FOR";
            case EDisciplineName.OBFUSCATE:
                label = "Obfuscate";
                code = "OBF";
            case EDisciplineName.POTENCE:
                label = "Potence";
                code = "POT";
            case EDisciplineName.PRESENCE:
                label = "Presence";
                code = "PRE";
            case EDisciplineName.PROTEAN:
                label = "Protean";
                code = "PRO";
            case EDisciplineName.THAUMATURGY:
                label = "Thaumaturgy";
                code = "THA";
        }
    }

}