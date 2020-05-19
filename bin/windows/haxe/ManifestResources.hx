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

		Assets.libraryPaths["default"] = rootPath + "manifest/default.json";
		

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


@:keep @:noCompletion #if display private #end class __ASSET__fonts_gilb___0_ttf extends lime.text.Font { public function new () { __fontPath = ManifestResources.rootPath + "fonts/GILB___0.TTF"; name = "Gill Sans MT Bold"; super (); }}
@:keep @:noCompletion #if display private #end class __ASSET__fonts_gilc_____ttf extends lime.text.Font { public function new () { __fontPath = ManifestResources.rootPath + "fonts/GILC____.TTF"; name = "Gill Sans MT Condensed"; super (); }}
@:keep @:noCompletion #if display private #end class __ASSET__fonts_gili___0_ttf extends lime.text.Font { public function new () { __fontPath = ManifestResources.rootPath + "fonts/GILI___0.TTF"; name = "Gill Sans MT Italic"; super (); }}
@:keep @:noCompletion #if display private #end class __ASSET__fonts_gil______ttf extends lime.text.Font { public function new () { __fontPath = ManifestResources.rootPath + "fonts/GIL_____.TTF"; name = "Gill Sans MT"; super (); }}
@:keep @:noCompletion #if display private #end class __ASSET__fonts_glsnecb_ttf extends lime.text.Font { public function new () { __fontPath = ManifestResources.rootPath + "fonts/glsnecb.ttf"; name = "Gill Sans MT Ext Condensed Bold"; super (); }}
@:keep @:noCompletion #if display private #end class __ASSET__fonts_quorbl___ttf extends lime.text.Font { public function new () { __fontPath = ManifestResources.rootPath + "fonts/Quorbl__.TTF"; name = "Quorum Black"; super (); }}


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
@:keep @:expose('__ASSET__OPENFL__fonts_gilb___0_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__fonts_gilb___0_ttf extends openfl.text.Font { public function new () { name = "Gill Sans MT Bold"; super (); }}
@:keep @:expose('__ASSET__OPENFL__fonts_gilc_____ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__fonts_gilc_____ttf extends openfl.text.Font { public function new () { name = "Gill Sans MT Condensed"; super (); }}
@:keep @:expose('__ASSET__OPENFL__fonts_gili___0_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__fonts_gili___0_ttf extends openfl.text.Font { public function new () { name = "Gill Sans MT Italic"; super (); }}
@:keep @:expose('__ASSET__OPENFL__fonts_gil______ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__fonts_gil______ttf extends openfl.text.Font { public function new () { name = "Gill Sans MT"; super (); }}
@:keep @:expose('__ASSET__OPENFL__fonts_glsnecb_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__fonts_glsnecb_ttf extends openfl.text.Font { public function new () { name = "Gill Sans MT Ext Condensed Bold"; super (); }}
@:keep @:expose('__ASSET__OPENFL__fonts_quorbl___ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__fonts_quorbl___ttf extends openfl.text.Font { public function new () { name = "Quorum Black"; super (); }}

#else
@:keep @:expose('__ASSET__OPENFL__fonts_gilb___0_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__fonts_gilb___0_ttf extends openfl.text.Font { public function new () { __fontPath = ManifestResources.rootPath + "fonts/GILB___0.TTF"; name = "Gill Sans MT Bold"; super (); }}
@:keep @:expose('__ASSET__OPENFL__fonts_gilc_____ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__fonts_gilc_____ttf extends openfl.text.Font { public function new () { __fontPath = ManifestResources.rootPath + "fonts/GILC____.TTF"; name = "Gill Sans MT Condensed"; super (); }}
@:keep @:expose('__ASSET__OPENFL__fonts_gili___0_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__fonts_gili___0_ttf extends openfl.text.Font { public function new () { __fontPath = ManifestResources.rootPath + "fonts/GILI___0.TTF"; name = "Gill Sans MT Italic"; super (); }}
@:keep @:expose('__ASSET__OPENFL__fonts_gil______ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__fonts_gil______ttf extends openfl.text.Font { public function new () { __fontPath = ManifestResources.rootPath + "fonts/GIL_____.TTF"; name = "Gill Sans MT"; super (); }}
@:keep @:expose('__ASSET__OPENFL__fonts_glsnecb_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__fonts_glsnecb_ttf extends openfl.text.Font { public function new () { __fontPath = ManifestResources.rootPath + "fonts/glsnecb.ttf"; name = "Gill Sans MT Ext Condensed Bold"; super (); }}
@:keep @:expose('__ASSET__OPENFL__fonts_quorbl___ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__fonts_quorbl___ttf extends openfl.text.Font { public function new () { __fontPath = ManifestResources.rootPath + "fonts/Quorbl__.TTF"; name = "Quorum Black"; super (); }}

#end

#end
#end

#end
