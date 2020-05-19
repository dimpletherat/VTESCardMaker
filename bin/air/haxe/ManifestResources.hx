package;


import haxe.io.Bytes;
import lime.utils.AssetBundle;
import lime.utils.AssetLibrary;
import lime.utils.AssetManifest;
import lime.utils.Assets;

#if sys
import sys.FileSystem;
#end

@:access(lime.utils.Assets)


@:keep @:dox(hide) class ManifestResources {


	public static var preloadLibraries:Array<AssetLibrary>;
	public static var preloadLibraryNames:Array<String>;
	public static var rootPath:String;


	public static function init (config:Dynamic):Void {

		preloadLibraries = new Array ();
		preloadLibraryNames = new Array ();

		rootPath = null;

		if (config != null && Reflect.hasField (config, "rootPath")) {

			rootPath = Reflect.field (config, "rootPath");

		}

		if (rootPath == null) {

			#if (ios || tvos || emscripten)
			rootPath = "assets/";
			#elseif android
			rootPath = "";
			#elseif console
			rootPath = lime.system.System.applicationDirectory;
			#else
			rootPath = "./";
			#end

		}

		#if (openfl && !flash && !display)
		openfl.text.Font.registerFont (__ASSET__OPENFL__fonts_gilb___0_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__fonts_gilc_____ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__fonts_gili___0_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__fonts_gil______ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__fonts_glsnecb_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__fonts_quorbl___ttf);
		
		#end

		var data, manifest, library, bundle;

		#if kha

		null
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("null", library);

		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("null");

		#else

		data = '{"name":null,"assets":"aoy4:sizei976958y4:typey5:IMAGEy9:classNamey26:__ASSET__images_brujah_pngy2:idy19:images%2Fbrujah.pnggoR0i9642979R1y6:BINARYR3y35:__ASSET__images_brujah_isabella_psdR5y28:images%2FBrujah_isabella.psdgoR0i849348R1R2R3y27:__ASSET__images_gangrel_pngR5y20:images%2Fgangrel.pnggoR0i10052310R1R7R3y34:__ASSET__images_gangrel_claire_psdR5y27:images%2FGangrel_Claire.psdgoR0i988847R1R2R3y29:__ASSET__images_malkavian_pngR5y22:images%2Fmalkavian.pnggoR0i9705880R1R7R3y36:__ASSET__images_malkavian_alexia_psdR5y29:images%2FMalkavian_Alexia.psdgoR0i1036035R1R2R3y29:__ASSET__images_nosferatu_pngR5y22:images%2Fnosferatu.pnggoR0i9900211R1R7R3y34:__ASSET__images_nosferatu_hero_psdR5y27:images%2FNosferatu_hero.psdgoR0i999706R1R2R3y28:__ASSET__images_toreador_pngR5y21:images%2Ftoreador.pnggoR0i9733027R1R7R3y34:__ASSET__images_toreador_erkki_psdR5y27:images%2FToreador_Erkki.psdgoR0i959384R1R2R3y27:__ASSET__images_tremere_pngR5y20:images%2Ftremere.pnggoR0i9170117R1R7R3y34:__ASSET__images_tremere_martin_psdR5y27:images%2FTremere_Martin.psdgoR0i1009450R1R2R3y27:__ASSET__images_ventrue_pngR5y20:images%2Fventrue.pnggoR0i9319351R1R7R3y33:__ASSET__images_ventrue_adlai_psdR5y26:images%2FVentrue_Adlai.psdgoR0i60172R1y4:FONTR3y27:__ASSET__fonts_gilb___0_ttfR5y20:fonts%2FGILB___0.TTFgoR0i54376R1R34R3y27:__ASSET__fonts_gilc_____ttfR5y20:fonts%2FGILC____.TTFgoR0i61292R1R34R3y27:__ASSET__fonts_gili___0_ttfR5y20:fonts%2FGILI___0.TTFgoR0i59704R1R34R3y27:__ASSET__fonts_gil______ttfR5y20:fonts%2FGIL_____.TTFgoR0i78968R1R34R3y26:__ASSET__fonts_glsnecb_ttfR5y19:fonts%2Fglsnecb.ttfgoR0i42968R1R34R3y27:__ASSET__fonts_quorbl___ttfR5y20:fonts%2FQuorbl__.TTFgoR0i157788R1R7R3y30:__ASSET__icons_clansymbols_zipR5y23:icons%2FClanSymbols.zipgoR0i234628R1y4:TEXTR3y29:__ASSET__icons_disciplines_aiR5y22:icons%2Fdisciplines.aigoR0i125252R1R49R3y30:__ASSET__icons_disciplines2_aiR5y23:icons%2Fdisciplines2.aigh","rootPath":null,"version":2,"libraryArgs":[],"libraryType":null}';
		manifest = AssetManifest.parse (data, rootPath);
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("default", library);
		

		library = Assets.getLibrary ("default");
		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("default");
		

		#end

	}


}


#if kha

null

#else

#if !display
#if flash

@:keep @:bind @:noCompletion #if display private #end class __ASSET__images_brujah_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__images_brujah_isabella_psd extends flash.utils.ByteArray { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__images_gangrel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__images_gangrel_claire_psd extends flash.utils.ByteArray { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__images_malkavian_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__images_malkavian_alexia_psd extends flash.utils.ByteArray { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__images_nosferatu_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__images_nosferatu_hero_psd extends flash.utils.ByteArray { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__images_toreador_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__images_toreador_erkki_psd extends flash.utils.ByteArray { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__images_tremere_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__images_tremere_martin_psd extends flash.utils.ByteArray { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__images_ventrue_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__images_ventrue_adlai_psd extends flash.utils.ByteArray { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__fonts_gilb___0_ttf extends flash.text.Font { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__fonts_gilc_____ttf extends flash.text.Font { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__fonts_gili___0_ttf extends flash.text.Font { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__fonts_gil______ttf extends flash.text.Font { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__fonts_glsnecb_ttf extends flash.text.Font { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__fonts_quorbl___ttf extends flash.text.Font { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__icons_clansymbols_zip extends flash.utils.ByteArray { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__icons_disciplines_ai extends flash.utils.ByteArray { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__icons_disciplines2_ai extends flash.utils.ByteArray { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__manifest_default_json extends flash.utils.ByteArray { }


#elseif (desktop || cpp)

@:keep @:image("assets/images/brujah.png") @:noCompletion #if display private #end class __ASSET__images_brujah_png extends lime.graphics.Image {}
@:keep @:file("assets/images/Brujah_isabella.psd") @:noCompletion #if display private #end class __ASSET__images_brujah_isabella_psd extends haxe.io.Bytes {}
@:keep @:image("assets/images/gangrel.png") @:noCompletion #if display private #end class __ASSET__images_gangrel_png extends lime.graphics.Image {}
@:keep @:file("assets/images/Gangrel_Claire.psd") @:noCompletion #if display private #end class __ASSET__images_gangrel_claire_psd extends haxe.io.Bytes {}
@:keep @:image("assets/images/malkavian.png") @:noCompletion #if display private #end class __ASSET__images_malkavian_png extends lime.graphics.Image {}
@:keep @:file("assets/images/Malkavian_Alexia.psd") @:noCompletion #if display private #end class __ASSET__images_malkavian_alexia_psd extends haxe.io.Bytes {}
@:keep @:image("assets/images/nosferatu.png") @:noCompletion #if display private #end class __ASSET__images_nosferatu_png extends lime.graphics.Image {}
@:keep @:file("assets/images/Nosferatu_hero.psd") @:noCompletion #if display private #end class __ASSET__images_nosferatu_hero_psd extends haxe.io.Bytes {}
@:keep @:image("assets/images/toreador.png") @:noCompletion #if display private #end class __ASSET__images_toreador_png extends lime.graphics.Image {}
@:keep @:file("assets/images/Toreador_Erkki.psd") @:noCompletion #if display private #end class __ASSET__images_toreador_erkki_psd extends haxe.io.Bytes {}
@:keep @:image("assets/images/tremere.png") @:noCompletion #if display private #end class __ASSET__images_tremere_png extends lime.graphics.Image {}
@:keep @:file("assets/images/Tremere_Martin.psd") @:noCompletion #if display private #end class __ASSET__images_tremere_martin_psd extends haxe.io.Bytes {}
@:keep @:image("assets/images/ventrue.png") @:noCompletion #if display private #end class __ASSET__images_ventrue_png extends lime.graphics.Image {}
@:keep @:file("assets/images/Ventrue_Adlai.psd") @:noCompletion #if display private #end class __ASSET__images_ventrue_adlai_psd extends haxe.io.Bytes {}
@:keep @:font("assets/fonts/GILB___0.TTF") @:noCompletion #if display private #end class __ASSET__fonts_gilb___0_ttf extends lime.text.Font {}
@:keep @:font("assets/fonts/GILC____.TTF") @:noCompletion #if display private #end class __ASSET__fonts_gilc_____ttf extends lime.text.Font {}
@:keep @:font("assets/fonts/GILI___0.TTF") @:noCompletion #if display private #end class __ASSET__fonts_gili___0_ttf extends lime.text.Font {}
@:keep @:font("assets/fonts/GIL_____.TTF") @:noCompletion #if display private #end class __ASSET__fonts_gil______ttf extends lime.text.Font {}
@:keep @:font("assets/fonts/glsnecb.ttf") @:noCompletion #if display private #end class __ASSET__fonts_glsnecb_ttf extends lime.text.Font {}
@:keep @:font("assets/fonts/Quorbl__.TTF") @:noCompletion #if display private #end class __ASSET__fonts_quorbl___ttf extends lime.text.Font {}
@:keep @:file("assets/icons/ClanSymbols.zip") @:noCompletion #if display private #end class __ASSET__icons_clansymbols_zip extends haxe.io.Bytes {}
@:keep @:file("assets/icons/disciplines.ai") @:noCompletion #if display private #end class __ASSET__icons_disciplines_ai extends haxe.io.Bytes {}
@:keep @:file("assets/icons/disciplines2.ai") @:noCompletion #if display private #end class __ASSET__icons_disciplines2_ai extends haxe.io.Bytes {}
@:keep @:file("") @:noCompletion #if display private #end class __ASSET__manifest_default_json extends haxe.io.Bytes {}



#else

@:keep @:expose('__ASSET__fonts_gilb___0_ttf') @:noCompletion #if display private #end class __ASSET__fonts_gilb___0_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "fonts/GILB___0.TTF"; #else ascender = null; descender = null; height = null; numGlyphs = null; underlinePosition = null; underlineThickness = null; unitsPerEM = null; #end name = "Gill Sans MT Bold"; super (); }}
@:keep @:expose('__ASSET__fonts_gilc_____ttf') @:noCompletion #if display private #end class __ASSET__fonts_gilc_____ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "fonts/GILC____.TTF"; #else ascender = null; descender = null; height = null; numGlyphs = null; underlinePosition = null; underlineThickness = null; unitsPerEM = null; #end name = "Gill Sans MT Condensed"; super (); }}
@:keep @:expose('__ASSET__fonts_gili___0_ttf') @:noCompletion #if display private #end class __ASSET__fonts_gili___0_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "fonts/GILI___0.TTF"; #else ascender = null; descender = null; height = null; numGlyphs = null; underlinePosition = null; underlineThickness = null; unitsPerEM = null; #end name = "Gill Sans MT Italic"; super (); }}
@:keep @:expose('__ASSET__fonts_gil______ttf') @:noCompletion #if display private #end class __ASSET__fonts_gil______ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "fonts/GIL_____.TTF"; #else ascender = null; descender = null; height = null; numGlyphs = null; underlinePosition = null; underlineThickness = null; unitsPerEM = null; #end name = "Gill Sans MT"; super (); }}
@:keep @:expose('__ASSET__fonts_glsnecb_ttf') @:noCompletion #if display private #end class __ASSET__fonts_glsnecb_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "fonts/glsnecb.ttf"; #else ascender = null; descender = null; height = null; numGlyphs = null; underlinePosition = null; underlineThickness = null; unitsPerEM = null; #end name = "Gill Sans MT Ext Condensed Bold"; super (); }}
@:keep @:expose('__ASSET__fonts_quorbl___ttf') @:noCompletion #if display private #end class __ASSET__fonts_quorbl___ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "fonts/Quorbl__.TTF"; #else ascender = null; descender = null; height = null; numGlyphs = null; underlinePosition = null; underlineThickness = null; unitsPerEM = null; #end name = "Quorum Black"; super (); }}


#end

#if (openfl && !flash)

#if html5
@:keep @:expose('__ASSET__OPENFL__fonts_gilb___0_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__fonts_gilb___0_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__fonts_gilb___0_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__fonts_gilc_____ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__fonts_gilc_____ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__fonts_gilc_____ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__fonts_gili___0_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__fonts_gili___0_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__fonts_gili___0_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__fonts_gil______ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__fonts_gil______ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__fonts_gil______ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__fonts_glsnecb_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__fonts_glsnecb_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__fonts_glsnecb_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__fonts_quorbl___ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__fonts_quorbl___ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__fonts_quorbl___ttf ()); super (); }}

#else
@:keep @:expose('__ASSET__OPENFL__fonts_gilb___0_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__fonts_gilb___0_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__fonts_gilb___0_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__fonts_gilc_____ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__fonts_gilc_____ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__fonts_gilc_____ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__fonts_gili___0_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__fonts_gili___0_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__fonts_gili___0_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__fonts_gil______ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__fonts_gil______ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__fonts_gil______ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__fonts_glsnecb_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__fonts_glsnecb_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__fonts_glsnecb_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__fonts_quorbl___ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__fonts_quorbl___ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__fonts_quorbl___ttf ()); super (); }}

#end

#end
#end

#end
