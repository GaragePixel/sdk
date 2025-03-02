namespace glfw.samples

#import "<stdlib>"
#import "<glad>"
#import "<glfw>"

Using stdlib.plugins.libc
using glad..
using glfw..
using stdlib.system.memory..
Using stdlib.plugins.emscripten..

Global c:Float = 0.0
Global window:GLFWwindow ptr

' Main loop
Function loop()
        ' Check if any events have been activated (key pressed, mouse moved etc.) and call corresponding response functions
        glfwPollEvents()

        ' render
        local width:int, height:int
        glfwGetFramebufferSize(window, varptr width, varptr height)

        glViewport(0, 0, width, height)
        c+=0.01
        c = c >= 1.0 ? 0.0 else c
        glClearColor(1, c, 0, 1)
        glClear(GL_COLOR_BUFFER_BIT)

        ' swap the screen buffers
        glfwSwapBuffers(window)
End

function Main()
    glfwSetErrorCallback(error_callback)

    if not glfwInit() exit_(-1)

#If __TARGET__="emscripten"
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 2)
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0)
#else
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3)
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2)
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE)
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE)
    glfwWindowHint(GLFW_RESIZABLE, GL_TRUE)
#endif
    window = glfwCreateWindow(640,480, CStr("glfw window example"), null, null)
    if not window
        print "Failed to create GLFW window"
        glfwTerminate()
        exit_(-1)
    end
    glfwMakeContextCurrent(window)

    ' set the required callback functions
    glfwSetKeyCallback(window, key_callback)

    if not gladLoadGLLoaderGLFW()
        print "Failed to initialize OpenGL context"
        exit_(-1)
    End

    glfwShowWindow(window)
    glfwSwapInterval(1)


#If __TARGET__="emscripten"
	emscripten_set_main_loop(loop,0,True)
#else
    while not glfwWindowShouldClose(window)
		loop()
    wend
#endif
    ' destroy window created
    glfwDestroyWindow(window)

    ' terminates GLFW, clearing any resources allocated by GLFW
    glfwTerminate()

    exit_(0)

end

function error_callback(error:int, description:const_char_t ptr)
    print "glfw: error["+error+"]:  "+String.FromCString(description)
end

function key_callback(window:GLFWwindow ptr, key:int, scancode:int, action:int, mode:int)
    if action <> GLFW_PRESS return

    select key
    case GLFW_KEY_SPACE
        local xpos:int, ypos:int
        glfwGetWindowPos(window, varptr xpos, varptr ypos)
        glfwSetWindowPos(window, xpos, ypos)
    
    case GLFW_KEY_ESCAPE
        glfwSetWindowShouldClose(window, GLFW_TRUE)
    end
end

'// Convert wonkey 'string' to C/C++ 'const char*'
function CStr:stdlib.plugins.libcconst_char_t Ptr( str:string )
	local cstr:= new DataBuffer(str.Length+1)
	str.ToCString(cstr.Data, cstr.Length)
	local cstrptr:= cast<stdlib.plugins.libcconst_char_t ptr>(cstr.Data) 'mem leak?
	return cstrptr
end