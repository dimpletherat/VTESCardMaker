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

		data = '{"name":null,"assets":"aoy4:pathy19:images%2Fbrujah.pngy4:sizei976958y4:typey5:IMAGEy2:idR1y7:preloadtgoR0y28:images%2FBrujah_isabella.psdR2i9642979R3y6:BINARYR5R7R6tgoR0y20:images%2Fgangrel.pngR2i849348R3R4R5R9R6tgoR0y27:images%2FGangrel_Claire.psdR2i10052310R3R8R5R10R6tgoR0y22:images%2Fmalkavian.pngR2i988847R3R4R5R11R6tgoR0y29:images%2FMalkavian_Alexia.psdR2i9705880R3R8R5R12R6tgoR0y22:images%2Fnosferatu.pngR2i1036035R3R4R5R13R6tgoR0y27:images%2FNosferatu_hero.psdR2i9900211R3R8R5R14R6tgoR0y21:images%2Ftoreador.pngR2i999706R3R4R5R15R6tgoR0y27:images%2FToreador_Erkki.psdR2i9733027R3R8R5R16R6tgoR0y20:images%2Ftremere.pngR2i959384R3R4R5R17R6tgoR0y27:images%2FTremere_Martin.psdR2i9170117R3R8R5R18R6tgoR0y20:images%2Fventrue.pngR2i1009450R3R4R5R19R6tgoR0y26:images%2FVentrue_Adlai.psdR2i9319351R3R8R5R20R6tgoR2i60172R3y4:FONTy9:classNamey27:__ASSET__fonts_gilb___0_ttfR5y20:fonts%2FGILB___0.TTFR6tgoR2i54376R3R21R22y27:__ASSET__fonts_gilc_____ttfR5y20:fonts%2FGILC____.TTFR6tgoR2i61292R3R21R22y27:__ASSET__fonts_gili___0_ttfR5y20:fonts%2FGILI___0.TTFR6tgoR2i59704R3R21R22y27:__ASSET__fonts_gil______ttfR5y20:fonts%2FGIL_____.TTFR6tgoR2i78968R3R21R22y26:__ASSET__fonts_glsnecb_ttfR5y19:fonts%2Fglsnecb.ttfR6tgoR2i42968R3R21R22y27:__ASSET__fonts_quorbl___ttfR5y20:fonts%2FQuorbl__.TTFR6tgoR0y23:icons%2FClanSymbols.zipR2i157788R3R8R5R35R6tgoR0y22:icons%2Fdisciplines.aiR2i234628R3y4:TEXTR5R36R6tgoR0y23:icons%2Fdisciplines2.aiR2i125252R3R37R5R38R6tgh","rootPath":null,"version":2,"libraryArgs":[],"libraryType":null}';
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
@:keep @:bind @:noCompletion #if display private #end class __ASSET__images_brujah_isabella_psd extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__images_gangrel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__images_gangrel_claire_psd extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__images_malkavian_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__images_malkavian_alexia_psd extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__images_nosferatu_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__images_nosferatu_hero_psd extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__images_toreador_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__images_toreador_erkki_psd extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__images_tremere_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__images_tremere_martin_psd extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__images_ventrue_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__images_ventrue_adlai_psd extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__fonts_gilb___0_ttf extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__fonts_gilc_____ttf extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__fonts_gili___0_ttf extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__fonts_gil______ttf extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__fonts_glsnecb_ttf extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__fonts_quorbl___ttf extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__icons_clansymbols_zip extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__icons_disciplines_ai extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__icons_disciplines2_ai extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__manifest_default_json extends null { }


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
@:keep @:font("bin/html5/obj/webfont/GILB___0.TTF") @:noCompletion #if display private #end class __ASSET__fonts_gilb___0_ttf extends lime.text.Font {}
@:keep @:font("bin/html5/obj/webfont/GILC____.TTF") @:noCompletion #if display private #end class __ASSET__fonts_gilc_____ttf extends lime.text.Font {}
@:keep @:font("bin/html5/obj/webfont/GILI___0.TTF") @:noCompletion #if display private #end class __ASSET__fonts_gili___0_ttf extends lime.text.Font {}
@:keep @:font("bin/html5/obj/webfont/GIL_____.TTF") @:noCompletion #if display private #end class __ASSET__fonts_gil______ttf extends lime.text.Font {}
@:keep @:font("bin/html5/obj/webfont/glsnecb.ttf") @:noCompletion #if display private #end class __ASSET__fonts_glsnecb_ttf extends lime.text.Font {}
@:keep @:font("bin/html5/obj/webfont/Quorbl__.TTF") @:noCompletion #if display private #end class __ASSET__fonts_quorbl___ttf extends lime.text.Font {}
@:keep @:file("assets/icons/ClanSymbols.zip") @:noCompletion #if display private #end class __ASSET__icons_clansymbols_zip extends haxe.io.Bytes {}
@:keep @:file("assets/icons/disciplines.ai") @:noCompletion #if display private #end class __ASSET__icons_disciplines_ai extends haxe.io.Bytes {}
@:keep @:file("assets/icons/disciplines2.ai") @:noCompletion #if display private #end class __ASSET__icons_disciplines2_ai extends haxe.io.Bytes {}
@:keep @:file("") @:noCompletion #if display private #end class __ASSET__manifest_default_json extends haxe.io.Bytes {}



#else

@:keep @:expose('__ASSET__fonts_gilb___0_ttf') @:noCompletion #if display private #end class __ASSET__fonts_gilb___0_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "fonts/GILB___0"; #else ascender = 1903; descender = -472; height = 2375; numGlyphs = 298; underlinePosition = -205; underlineThickness = 102; unitsPerEM = 2048; #end name = "Gill Sans MT Bold"; super (); }}
@:keep @:expose('__ASSET__fonts_gilc_____ttf') @:noCompletion #if display private #end class __ASSET__fonts_gilc_____ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "fonts/GILC____"; #else ascender = 1913; descender = -553; height = 2466; numGlyphs = 295; underlinePosition = -205; underlineThickness = 102; unitsPerEM = 2048; #end name = "Gill Sans MT Condensed"; super (); }}
@:keep @:expose('__ASSET__fonts_gili___0_ttf') @:noCompletion #if display private #end class __ASSET__fonts_gili___0_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "fonts/GILI___0"; #else ascender = 1903; descender = -472; height = 2375; numGlyphs = 299; underlinePosition = -205; underlineThickness = 102; unitsPerEM = 2048; #end name = "Gill Sans MT Italic"; super (); }}
@:keep @:expose('__ASSET__fonts_gil______ttf') @:noCompletion #if display private #end class __ASSET__fonts_gil______ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "fonts/GIL_____"; #else ascender = 1903; descender = -472; height = 2375; numGlyphs = 299; underlinePosition = -205; underlineThickness = 102; unitsPerEM = 2048; #end name = "Gill Sans MT"; super (); }}
@:keep @:expose('__ASSET__fonts_glsnecb_ttf') @:noCompletion #if display private #end class __ASSET__fonts_glsnecb_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "fonts/glsnecb"; #else ascender = 2045; descender = -407; height = 2452; numGlyphs = 296; underlinePosition = -342; underlineThickness = 130; unitsPerEM = 2048; #end name = "Gill Sans MT Ext Condensed Bold"; super (); }}
@:keep @:expose('__ASSET__fonts_quorbl___ttf') @:noCompletion #if display private #end class __ASSET__fonts_quorbl___ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "fonts/Quorbl__"; #else ascender = 967; descender = -232; height = 1199; numGlyphs = 232; underlinePosition = -125; underlineThickness = 50; unitsPerEM = 1000; #end name = "Quorum Black"; super (); }}


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
