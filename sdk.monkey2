Namespace sdk

'The library shoulds compile in 4 minutes 58 seconds for the release mode
'and 4 minutes 31 seconds for the debug mode.

#rem 
#end 

'Generators

#Import "generators/html/hoedown/hoedown"							'Html generator

'Engines

#Import "engines/fonts/freetype/freetype" 							'Font engine

#Import "engines/parsers/html/litehtml/litehtml"					'HTML5/CSS parser
																	'depends:
																	'	libc
																	'	bbmonkey

#Import "engines/databases/sqlite/sqlite"							'SQLite wrap
																	'depends:
																	'	libc

'toolkits

'Wonkey module, deactivated for now
'#Import "toolkits/windowing/glfw/glfw"								'Windowing
																	'depends:
																	'	libc
#Import "toolkits/syntax/tinyregex/tinyregex"						'c regex wrap
																	'depends:
																	'	libc

'Api

'Note: Maybe Android platform will not works
'Note: stdlib must has already be precompiled for the debug mode or the
'precompilation of sdk.protocoles.httprequest for the debug mode will fails.
#Import "api/protocoles/httprequest/httprequest" 					'httprequest
																	'depends:
																	'	std
																	'	jni
																	'	std
																	'	mojo 'iDkP: why?
																	'	sdl2

#Import "api/protocoles/websocket/html-ws/html-ws" 					'Websocket
																	'depends:
																	'	emscripten.h
																	'	bbmonkey.h

#Import "api/graphics/opengl/opengl"								'GraphicsApi
																	'depends:
																	'	libc
'Can't works until the glfw is activated.
'TODO: David hasn't implemented the windows platform (yet? ).
'#Import "api/graphics/glad/glad"									'GraphicsApi
																	'depends:
																	'	libc
																	'	glfw

#Import "api/sounds/openal/openal"									'SoundApi
																	'depends:
																	'	libc
																	
#Import "api/sounds/sdl2-mixer/sdl2-mixer"							'SoundApi
																	'depends:
																	'	sdl2

'Note: stdlib must has already be precompiled for the debug mode or the
'precompilation of sdk.api.portmidi for the debug mode will fails.
#Import "api/sounds/portmidi/portmidi"								'SoundApi
																	'depends:
																	'	stdlib

#Import "api/physics/bullet/bullet"									'Physic3dApi
																	'depends:
																	'	stdlib

#Import "api/physics/box2d/box2d"									'Physic2dApi
																	'depends:
																	'	stdlib

#Import "api/physics/chipmunk/chipmunk"								'Physic2dApi
																	'depends:
																	'	stdlib.plugins.libc

'Medias

#Import "medias/players/theoraplayer/theoraplayer"					'MediaPlayerApi
																	'depends:
																	'	openal

'With the preset of Sibly, Assimp needs for itself 2 minutes to precompile!
'If you deactive it, keep it mind that sdk_mojo.mojo3d-loader needs it...
'iDkP from GaragePixel:
'	I've configurated a very minimal preset of available formats
'	to avoid too excessive precompile time and build size. 
'	Until you really need some other formats in your project, assimps
'	can load 3ds, md2, b3d and blender files for educational purpose.
#Import "medias/loaders/meshes/assimp/assimp"						'LoadersMeshes
																	'depends:
																	'	libc
																	'	zlib

Function Main()
	Print "sdk version 1.0 - 2025-02-26"
End