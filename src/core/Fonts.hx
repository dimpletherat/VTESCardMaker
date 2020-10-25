package core;

import openfl.text.Font;
import openfl.Assets;
 
class Fonts {
    public static var OPEN_SANS_I(default, null):String;
    public static var MATRIX_B(default, null):String;
    public static var GILL_SANS(default, null):String;
    public static var QUORUM(default, null):String;
    public static var CAMBRIA_I(default, null):String;
 
    public static function init():Void {
    #if js
        OPEN_SANS_I = Assets.getFont("fonts/OpenSans-Italic.ttf").fontName;
        MATRIX_B = Assets.getFont("fonts/MatrixExtraBold.ttf").fontName;
        GILL_SANS = Assets.getFont("fonts/GIL_____.TTF").fontName;
        QUORUM = Assets.getFont("fonts/Quorbl__.TTF").fontName;
        CAMBRIA_I = Assets.getFont("fonts/cambriai.ttf").fontName;
    #else
        Font.registerFont(OpenSansItalic);
        Font.registerFont(MatrixBold);
        Font.registerFont(GillSans);
        Font.registerFont(Quorum);
        Font.registerFont(CambriaItalic);
        OPEN_SANS_I = (new OpenSansItalic()).fontName;
        MATRIX_B = (new MatrixBold()).fontName;
        GILL_SANS = (new GillSans()).fontName;
        QUORUM = (new Quorum()).fontName;
        CAMBRIA_I = (new CambriaItalic()).fontName;
    #end
    }
}
 
@:font("assets/fonts/OpenSans-Italic.ttf")
private class OpenSansItalic extends Font {}
 
@:font("assets/fonts/MatrixExtraBold.ttf")
private class MatrixBold extends Font {}
 
@:font("assets/fonts/GIL_____.TTF")
private class GillSans extends Font {}
 
@:font("assets/fonts/Quorbl__.TTF")
private class Quorum extends Font {}
 
@:font("assets/fonts/cambriai.ttf")
private class CambriaItalic extends Font {}