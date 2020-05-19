package entities;

class Discipline {
    
    public var name(default,null):DisciplineName;
    public var label(default,null):String;
    public var iconFileName(default,null):String;

    public function new( name:DisciplineName )
    {
        this.name = name;
        switch (name)
        {
            case DisciplineName.ANIMALISM:
                label = "Animalism Inf.";
                iconFileName = "ani.svg";
            case DisciplineName.ANIMALISM_SUP:
                label = "Animalism Sup.";
                iconFileName = "ani-sup.svg";
            case DisciplineName.AUSPEX:
                label = "Auspex Inf.";
                iconFileName = "aus.svg";
            case DisciplineName.AUSPEX_SUP:
                label = "Auspex Sup.";
                iconFileName = "aus-sup.svg";
            case DisciplineName.CELERITY:
                label = "Celerity Inf.";
                iconFileName = "cel.svg";
            case DisciplineName.CELERITY_SUP:
                label = "Celerity Sup.";
                iconFileName = "cel-sup.svg";
            case DisciplineName.DOMINATE:
                label = "Dominate Inf.";
                iconFileName = "dom.svg";
            case DisciplineName.DOMINATE_SUP:
                label = "Dominate Sup.";
                iconFileName = "dom-sup.svg";
            case DisciplineName.FORTITUDE:
                label = "Fortitude Inf.";
                iconFileName = "for.svg";
            case DisciplineName.FORTITUDE_SUP:
                label = "Fortitude Sup.";
                iconFileName = "for-sup.svg";
            case DisciplineName.OBFUSCATE:
                label = "Obfuscate Inf.";
                iconFileName = "obf.svg";
            case DisciplineName.OBFUSCATE_SUP:
                label = "Obfuscate Sup.";
                iconFileName = "obf-sup.svg";
            case DisciplineName.POTENCE:
                label = "Potence Inf.";
                iconFileName = "pot.svg";
            case DisciplineName.POTENCE_SUP:
                label = "Potence Sup.";
                iconFileName = "pot-sup.svg";
            case DisciplineName.PRESENCE:
                label = "Presence Inf.";
                iconFileName = "pre.svg";
            case DisciplineName.PRESENCE_SUP:
                label = "Presence Sup.";
                iconFileName = "pre-sup.svg";
            case DisciplineName.PROTEAN:
                label = "Protean Inf.";
                iconFileName = "pro.svg";
            case DisciplineName.PROTEAN_SUP:
                label = "Protean Sup.";
                iconFileName = "pro-sup.svg";
            case DisciplineName.THAUMATURGY:
                label = "Thaumaturgy Inf.";
                iconFileName = "tha.svg";
            case DisciplineName.THAUMATURGY_SUP:
                label = "Thaumaturgy Sup.";
                iconFileName = "tha-sup.svg";
        }
    }

}