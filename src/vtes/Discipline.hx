package entities;

class Discipline {
    
    public var name(default,null):DisciplineName;
    public var label(default,null):String;
    public var iconFileName(default,null):String;
    public var isSuperior(default, null):Bool;

    public function new( name:DisciplineName )
    {
        this.name = name;
        switch (name)
        {
            case DisciplineName.ANIMALISM:
                label = "Animalism Inf.";
                iconFileName = "ani.svg";
                isSuperior = false;
            case DisciplineName.ANIMALISM_SUP:
                label = "Animalism Sup.";
                iconFileName = "ani-sup.svg";
                isSuperior = true;
            case DisciplineName.AUSPEX:
                label = "Auspex Inf.";
                iconFileName = "aus.svg";
                isSuperior = false;
            case DisciplineName.AUSPEX_SUP:
                label = "Auspex Sup.";
                iconFileName = "aus-sup.svg";
                isSuperior = true;
            case DisciplineName.CELERITY:
                label = "Celerity Inf.";
                iconFileName = "cel.svg";
                isSuperior = false;
            case DisciplineName.CELERITY_SUP:
                label = "Celerity Sup.";
                iconFileName = "cel-sup.svg";
                isSuperior = true;
            case DisciplineName.DOMINATE:
                label = "Dominate Inf.";
                iconFileName = "dom.svg";
                isSuperior = false;
            case DisciplineName.DOMINATE_SUP:
                label = "Dominate Sup.";
                iconFileName = "dom-sup.svg";
                isSuperior = true;
            case DisciplineName.FORTITUDE:
                label = "Fortitude Inf.";
                iconFileName = "for.svg";
                isSuperior = false;
            case DisciplineName.FORTITUDE_SUP:
                label = "Fortitude Sup.";
                iconFileName = "for-sup.svg";
                isSuperior = true;
            case DisciplineName.OBFUSCATE:
                label = "Obfuscate Inf.";
                iconFileName = "obf.svg";
                isSuperior = false;
            case DisciplineName.OBFUSCATE_SUP:
                label = "Obfuscate Sup.";
                iconFileName = "obf-sup.svg";
                isSuperior = true;
            case DisciplineName.POTENCE:
                label = "Potence Inf.";
                iconFileName = "pot.svg";
                isSuperior = false;
            case DisciplineName.POTENCE_SUP:
                label = "Potence Sup.";
                iconFileName = "pot-sup.svg";
                isSuperior = true;
            case DisciplineName.PRESENCE:
                label = "Presence Inf.";
                iconFileName = "pre.svg";
                isSuperior = false;
            case DisciplineName.PRESENCE_SUP:
                label = "Presence Sup.";
                iconFileName = "pre-sup.svg";
                isSuperior = true;
            case DisciplineName.PROTEAN:
                label = "Protean Inf.";
                iconFileName = "pro.svg";
                isSuperior = false;
            case DisciplineName.PROTEAN_SUP:
                label = "Protean Sup.";
                iconFileName = "pro-sup.svg";
                isSuperior = true;
            case DisciplineName.THAUMATURGY:
                label = "Thaumaturgy Inf.";
                iconFileName = "tha.svg";
                isSuperior = false;
            case DisciplineName.THAUMATURGY_SUP:
                label = "Thaumaturgy Sup.";
                iconFileName = "tha-sup.svg";
                isSuperior = true;
        }
    }

}