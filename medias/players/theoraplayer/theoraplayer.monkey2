
Namespace sdk.medias.theoraplayer

' iDkP from GaragePixel:
'	We can pre-compile-time set up the number of threads 
'	theoraplayer can uses, following this path from here:	
'		native/theoraplayer/src/WorkerThread.cpp
'	pre-cached frame setting: TODO

#If __TARGET__<>"emscripten"

#Import "../../../api/sounds/openal/openal"

#Import "makefile.monkey2"

#Import "native/ogg/include/*.h"

#Import "native/vorbis/lib/*.h"
#Import "native/vorbis/include/*.h"

#Import "native/theora/include/*.h"

#Import "native/theoraplayer/include/*.h"
#Import "native/theoraplayer/include/theoraplayer/*.h"
#Import "native/theoraplayer/src/*.h"
#Import "native/theoraplayer/src/formats/*.h"
#Import "native/theoraplayer/src/YUV/*.h"
#Import "native/theoraplayer/src/YUV/libyuv/include/*.h"

#Import "<theoraplayer.h>"
#Import "<theoraplayer/Manager.h>"
#Import "<theoraplayer/VideoClip.h>"
#Import "<theoraplayer/VideoFrame.h>"

#Import "native/OpenAL_AudioInterface.cpp"
#Import "native/OpenAL_AudioInterface.h"

#Import "native/monkey2_glue.cpp"
#Import "native/monkey2_glue.h"

Extern

Enum OutputMode="theoraplayer::OutputMode"
End

Class VideoManager Extends Void="theoraplayer::Manager" 

	Method setAudioInterfaceFactory( audioFactory:AudioInterfaceFactory )
	Method getAudioInterfaceFactory:AudioInterfaceFactory()

	Method createVideoClip:VideoClip( filename:CString ) Extension="bb_theoraplayer_createVideoClip"
	Method createVideoClip:VideoClip( data:Void Ptr,length:Int ) Extension="bb_theoraplayer_createVideoClip"
	Method destroyVideoClip( clip:VideoClip )
 
 	Method update( time_increase:Float )
 	
 	Function getInstance:VideoManager()="bb_theoraplayer_getManager"
 	
End

Class VideoClip Extends Void="theoraplayer::VideoClip"

	Method getWidth:Int()
	Method getHeight:Int()
	
	Method hasAlphaChannel:Bool()
	
	Method getSubFrameX:Int()
	Method getSubFrameY:Int()
	Method getSubFrameWidth:Int()
	Method getSubFrameHeight:Int()
	
	Method getStride:Int()
	
	Method getTimePosition:Float()
	
	Method getDuration:Float()
	
	Method getFps:Float()
	
	Method getFramesCount:Int()

	Method getAudioGain:Float()
	Method setAudioGain( gain:Float )

	Method getPlaybackSpeed:Float()
	Method setPlaybackSpeed( speed:Float )

	Method getOutputMode:OutputMode()
	Method setOutputMode( mode:OutputMode )
	
	Method isAutoRestart:Bool()
	Method setAutoRestart( value:Bool )

	Method getPriority:Float()
	Method setPriority( priority:Float )

	Method getPriorityIndex:Int()

	Method getPrecachedFramesCount:Int()
	Method setPrecachedFramesCount( count:Int )
	Method getReadyFramesCount:Int()
	Method getDisplayedFramesCount:Int()
	Method getDroppedFramesCount:Int()

	Method isDone:Bool()
	Method isPaused:Bool()

	Method updateTimerToNextFrame:Float()
	Method fetchNextFrame:VideoFrame()
	Method popFrame()

	Method play()
	Method pause()
	Method stop()
	Method restart()

	Method seek( time:Float )
	Method seekToFrame( frame:Int )
	Method waitForCache:Float( desiredCacheFactor:Float=0.5,maxWaitTime:Float=1.0 )

End

Class VideoFrame Extends Void="theoraplayer::VideoFrame" 

	Method getBuffer:UByte Ptr()
	Method getFrameNumber:Int()

End

Class AudioInterfaceFactory Extends Void="theoraplayer::AudioInterfaceFactory"

End

Class OpenAL_AudioInterfaceFactory Extends AudioInterfaceFactory

End

#End
