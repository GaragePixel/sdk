namespace sdk.api.glad

#if __TARGET__ = "raspbian" or __TARGET__ = "ios" or __TARGET__ = "android"
	'Exclude targets
#else

#import "stdlib"
#Import "../../../../toolkits/windowing/glfw/glfw"

using stdlib.plugins.libc..
using sdk.toolkits.glfw..

#import "native/include/*.h"

#if __TARGET__<>"emscripten"
#import "<glad/glad.h>"
#endif

#import "native/src/glad.c"

#import "native/glad_glue.h"
#import "native/glad_glue.cpp"

#if __TARGET__="windows"
    '// TODO
#else if __TARGET__="linux"
    '// TODO
#else if __TARGET__="macos"
    #import "<OpenGL.framework>"
#Elseif __TARGET__="emscripten"
    #Import "assets/"
#end

extern

'glad_glue
function gladLoadGLLoaderGLFW:int()

alias GLvoid:void
alias GLenum:uint
alias GLboolean:bool
alias GLbitfield:uint
alias GLbyte:byte
alias GLshort:short
alias GLint:int
alias GLsizei:int
alias GLubyte:ubyte
alias GLushort:ushort
alias GLuint:uint
alias GLfloat:float
alias GLclampf:float
alias GLdouble:double
alias GLclampd:double
alias GLfixed:int
alias GLclampx:int
alias GLintptr:long
alias GLsizeiptr:long
alias GLint64:long
alias GLuint64:ulong

#if __TARGET__="macos"
    alias GLhandleARB:void ptr
#else
    alias GLhandleARB:uint
#end

alias khronos_int8_t:GLbyte
alias khronos_uint8_t:GLubyte
alias khronos_int16_t:GLshort
alias khronos_uint16_t:GLushort
alias khronos_int32_t:GLclampx
alias khronos_float_t:GLfloat
alias khronos_intptr_t:GLintptr
alias khronos_ssize_t:GLsizeiptr
alias khronos_int64_t:GLint64
alias khronos_uint64_t:GLuint64

struct GLchar="GLchar"
end

struct GLcchar="const GLchar"
end

struct GLsync
end

struct gladGLversionStruct
    field major:int
    field minor:int
end

alias GLADloadproc:void ptr(name:const_char_t ptr)

'// Defs

const GL_DEPTH_BUFFER_BIT:int
const GL_STENCIL_BUFFER_BIT:int
const GL_COLOR_BUFFER_BIT:int
const GL_FALSE:int
const GL_TRUE:int
const GL_POINTS:int
const GL_LINES:int
const GL_LINE_LOOP:int
const GL_LINE_STRIP:int
const GL_TRIANGLES:int
const GL_TRIANGLE_STRIP:int
const GL_TRIANGLE_FAN:int
const GL_NEVER:int
const GL_LESS:int
const GL_EQUAL:int
const GL_LEQUAL:int
const GL_GREATER:int
const GL_NOTEQUAL:int
const GL_GEQUAL:int
const GL_ALWAYS:int
const GL_ZERO:int
const GL_ONE:int
const GL_SRC_COLOR:int
const GL_ONE_MINUS_SRC_COLOR:int
const GL_SRC_ALPHA:int
const GL_ONE_MINUS_SRC_ALPHA:int
const GL_DST_ALPHA:int
const GL_ONE_MINUS_DST_ALPHA:int
const GL_DST_COLOR:int
const GL_ONE_MINUS_DST_COLOR:int
const GL_SRC_ALPHA_SATURATE:int
const GL_NONE:int
const GL_FRONT_LEFT:int
const GL_FRONT_RIGHT:int
const GL_BACK_LEFT:int
const GL_BACK_RIGHT:int
const GL_FRONT:int
const GL_BACK:int
const GL_LEFT:int
const GL_RIGHT:int
const GL_FRONT_AND_BACK:int
const GL_NO_ERROR:int
const GL_INVALID_ENUM:int
const GL_INVALID_VALUE:int
const GL_INVALID_OPERATION:int
const GL_OUT_OF_MEMORY:int
const GL_CW:int
const GL_CCW:int
const GL_POINT_SIZE:int
const GL_POINT_SIZE_RANGE:int
const GL_POINT_SIZE_GRANULARITY:int
const GL_LINE_SMOOTH:int
const GL_LINE_WIDTH:int
const GL_LINE_WIDTH_RANGE:int
const GL_LINE_WIDTH_GRANULARITY:int
const GL_POLYGON_MODE:int
const GL_POLYGON_SMOOTH:int
const GL_CULL_FACE:int
const GL_CULL_FACE_MODE:int
const GL_FRONT_FACE:int
const GL_DEPTH_RANGE:int
const GL_DEPTH_TEST:int
const GL_DEPTH_WRITEMASK:int
const GL_DEPTH_CLEAR_VALUE:int
const GL_DEPTH_FUNC:int
const GL_STENCIL_TEST:int
const GL_STENCIL_CLEAR_VALUE:int
const GL_STENCIL_FUNC:int
const GL_STENCIL_VALUE_MASK:int
const GL_STENCIL_FAIL:int
const GL_STENCIL_PASS_DEPTH_FAIL:int
const GL_STENCIL_PASS_DEPTH_PASS:int
const GL_STENCIL_REF:int
const GL_STENCIL_WRITEMASK:int
const GL_VIEWPORT:int
const GL_DITHER:int
const GL_BLEND_DST:int
const GL_BLEND_SRC:int
const GL_BLEND:int
const GL_LOGIC_OP_MODE:int
const GL_DRAW_BUFFER:int
const GL_READ_BUFFER:int
const GL_SCISSOR_BOX:int
const GL_SCISSOR_TEST:int
const GL_COLOR_CLEAR_VALUE:int
const GL_COLOR_WRITEMASK:int
const GL_DOUBLEBUFFER:int
const GL_STEREO:int
const GL_LINE_SMOOTH_HINT:int
const GL_POLYGON_SMOOTH_HINT:int
const GL_UNPACK_SWAP_BYTES:int
const GL_UNPACK_LSB_FIRST:int
const GL_UNPACK_ROW_LENGTH:int
const GL_UNPACK_SKIP_ROWS:int
const GL_UNPACK_SKIP_PIXELS:int
const GL_UNPACK_ALIGNMENT:int
const GL_PACK_SWAP_BYTES:int
const GL_PACK_LSB_FIRST:int
const GL_PACK_ROW_LENGTH:int
const GL_PACK_SKIP_ROWS:int
const GL_PACK_SKIP_PIXELS:int
const GL_PACK_ALIGNMENT:int
const GL_MAX_TEXTURE_SIZE:int
const GL_MAX_VIEWPORT_DIMS:int
const GL_SUBPIXEL_BITS:int
const GL_TEXTURE_1D:int
const GL_TEXTURE_2D:int
const GL_TEXTURE_WIDTH:int
const GL_TEXTURE_HEIGHT:int
const GL_TEXTURE_BORDER_COLOR:int
const GL_DONT_CARE:int
const GL_FASTEST:int
const GL_NICEST:int
const GL_BYTE:int
const GL_UNSIGNED_BYTE:int
const GL_SHORT:int
const GL_UNSIGNED_SHORT:int
const GL_INT:int
const GL_UNSIGNED_INT:int
const GL_FLOAT:int
const GL_CLEAR:int
const GL_AND:int
const GL_AND_REVERSE:int
const GL_COPY:int
const GL_AND_INVERTED:int
const GL_NOOP:int
const GL_XOR:int
const GL_OR:int
const GL_NOR:int
const GL_EQUIV:int
const GL_INVERT:int
const GL_OR_REVERSE:int
const GL_COPY_INVERTED:int
const GL_OR_INVERTED:int
const GL_NAND:int
const GL_SET:int
const GL_TEXTURE:int
const GL_COLOR:int
const GL_DEPTH:int
const GL_STENCIL:int
const GL_STENCIL_INDEX:int
const GL_DEPTH_COMPONENT:int
const GL_RED:int
const GL_GREEN:int
const GL_BLUE:int
const GL_ALPHA:int
const GL_RGB:int
const GL_RGBA:int
const GL_POINT:int
const GL_LINE:int
const GL_FILL:int
const GL_KEEP:int
const GL_REPLACE:int
const GL_INCR:int
const GL_DECR:int
const GL_VENDOR:int
const GL_RENDERER:int
const GL_VERSION:int
const GL_EXTENSIONS:int
const GL_NEAREST:int
const GL_LINEAR:int
const GL_NEAREST_MIPMAP_NEAREST:int
const GL_LINEAR_MIPMAP_NEAREST:int
const GL_NEAREST_MIPMAP_LINEAR:int
const GL_LINEAR_MIPMAP_LINEAR:int
const GL_TEXTURE_MAG_FILTER:int
const GL_TEXTURE_MIN_FILTER:int
const GL_TEXTURE_WRAP_S:int
const GL_TEXTURE_WRAP_T:int
const GL_REPEAT:int
const GL_COLOR_LOGIC_OP:int
const GL_POLYGON_OFFSET_UNITS:int
const GL_POLYGON_OFFSET_POINT:int
const GL_POLYGON_OFFSET_LINE:int
const GL_POLYGON_OFFSET_FILL:int
const GL_POLYGON_OFFSET_FACTOR:int
const GL_TEXTURE_BINDING_1D:int
const GL_TEXTURE_BINDING_2D:int
const GL_TEXTURE_INTERNAL_FORMAT:int
const GL_TEXTURE_RED_SIZE:int
const GL_TEXTURE_GREEN_SIZE:int
const GL_TEXTURE_BLUE_SIZE:int
const GL_TEXTURE_ALPHA_SIZE:int
const GL_DOUBLE:int
const GL_PROXY_TEXTURE_1D:int
const GL_PROXY_TEXTURE_2D:int
const GL_R3_G3_B2:int
const GL_RGB4:int
const GL_RGB5:int
const GL_RGB8:int
const GL_RGB10:int
const GL_RGB12:int
const GL_RGB16:int
const GL_RGBA2:int
const GL_RGBA4:int
const GL_RGB5_A1:int
const GL_RGBA8:int
const GL_RGB10_A2:int
const GL_RGBA12:int
const GL_RGBA16:int
const GL_UNSIGNED_BYTE_3_3_2:int
const GL_UNSIGNED_SHORT_4_4_4_4:int
const GL_UNSIGNED_SHORT_5_5_5_1:int
const GL_UNSIGNED_INT_8_8_8_8:int
const GL_UNSIGNED_INT_10_10_10_2:int
const GL_TEXTURE_BINDING_3D:int
const GL_PACK_SKIP_IMAGES:int
const GL_PACK_IMAGE_HEIGHT:int
const GL_UNPACK_SKIP_IMAGES:int
const GL_UNPACK_IMAGE_HEIGHT:int
const GL_TEXTURE_3D:int
const GL_PROXY_TEXTURE_3D:int
const GL_TEXTURE_DEPTH:int
const GL_TEXTURE_WRAP_R:int
const GL_MAX_3D_TEXTURE_SIZE:int
const GL_UNSIGNED_BYTE_2_3_3_REV:int
const GL_UNSIGNED_SHORT_5_6_5:int
const GL_UNSIGNED_SHORT_5_6_5_REV:int
const GL_UNSIGNED_SHORT_4_4_4_4_REV:int
const GL_UNSIGNED_SHORT_1_5_5_5_REV:int
const GL_UNSIGNED_INT_8_8_8_8_REV:int
const GL_UNSIGNED_INT_2_10_10_10_REV:int
const GL_BGR:int
const GL_BGRA:int
const GL_MAX_ELEMENTS_VERTICES:int
const GL_MAX_ELEMENTS_INDICES:int
const GL_CLAMP_TO_EDGE:int
const GL_TEXTURE_MIN_LOD:int
const GL_TEXTURE_MAX_LOD:int
const GL_TEXTURE_BASE_LEVEL:int
const GL_TEXTURE_MAX_LEVEL:int
const GL_SMOOTH_POINT_SIZE_RANGE:int
const GL_SMOOTH_POINT_SIZE_GRANULARITY:int
const GL_SMOOTH_LINE_WIDTH_RANGE:int
const GL_SMOOTH_LINE_WIDTH_GRANULARITY:int
const GL_ALIASED_LINE_WIDTH_RANGE:int
const GL_TEXTURE0:int
const GL_TEXTURE1:int
const GL_TEXTURE2:int
const GL_TEXTURE3:int
const GL_TEXTURE4:int
const GL_TEXTURE5:int
const GL_TEXTURE6:int
const GL_TEXTURE7:int
const GL_TEXTURE8:int
const GL_TEXTURE9:int
const GL_TEXTURE10:int
const GL_TEXTURE11:int
const GL_TEXTURE12:int
const GL_TEXTURE13:int
const GL_TEXTURE14:int
const GL_TEXTURE15:int
const GL_TEXTURE16:int
const GL_TEXTURE17:int
const GL_TEXTURE18:int
const GL_TEXTURE19:int
const GL_TEXTURE20:int
const GL_TEXTURE21:int
const GL_TEXTURE22:int
const GL_TEXTURE23:int
const GL_TEXTURE24:int
const GL_TEXTURE25:int
const GL_TEXTURE26:int
const GL_TEXTURE27:int
const GL_TEXTURE28:int
const GL_TEXTURE29:int
const GL_TEXTURE30:int
const GL_TEXTURE31:int
const GL_ACTIVE_TEXTURE:int
const GL_MULTISAMPLE:int
const GL_SAMPLE_ALPHA_TO_COVERAGE:int
const GL_SAMPLE_ALPHA_TO_ONE:int
const GL_SAMPLE_COVERAGE:int
const GL_SAMPLE_BUFFERS:int
const GL_SAMPLES:int
const GL_SAMPLE_COVERAGE_VALUE:int
const GL_SAMPLE_COVERAGE_INVERT:int
const GL_TEXTURE_CUBE_MAP:int
const GL_TEXTURE_BINDING_CUBE_MAP:int
const GL_TEXTURE_CUBE_MAP_POSITIVE_X:int
const GL_TEXTURE_CUBE_MAP_NEGATIVE_X:int
const GL_TEXTURE_CUBE_MAP_POSITIVE_Y:int
const GL_TEXTURE_CUBE_MAP_NEGATIVE_Y:int
const GL_TEXTURE_CUBE_MAP_POSITIVE_Z:int
const GL_TEXTURE_CUBE_MAP_NEGATIVE_Z:int
const GL_PROXY_TEXTURE_CUBE_MAP:int
const GL_MAX_CUBE_MAP_TEXTURE_SIZE:int
const GL_COMPRESSED_RGB:int
const GL_COMPRESSED_RGBA:int
const GL_TEXTURE_COMPRESSION_HINT:int
const GL_TEXTURE_COMPRESSED_IMAGE_SIZE:int
const GL_TEXTURE_COMPRESSED:int
const GL_NUM_COMPRESSED_TEXTURE_FORMATS:int
const GL_COMPRESSED_TEXTURE_FORMATS:int
const GL_CLAMP_TO_BORDER:int
const GL_BLEND_DST_RGB:int
const GL_BLEND_SRC_RGB:int
const GL_BLEND_DST_ALPHA:int
const GL_BLEND_SRC_ALPHA:int
const GL_POINT_FADE_THRESHOLD_SIZE:int
const GL_DEPTH_COMPONENT16:int
const GL_DEPTH_COMPONENT24:int
const GL_DEPTH_COMPONENT32:int
const GL_MIRRORED_REPEAT:int
const GL_MAX_TEXTURE_LOD_BIAS:int
const GL_TEXTURE_LOD_BIAS:int
const GL_INCR_WRAP:int
const GL_DECR_WRAP:int
const GL_TEXTURE_DEPTH_SIZE:int
const GL_TEXTURE_COMPARE_MODE:int
const GL_TEXTURE_COMPARE_FUNC:int
const GL_BLEND_COLOR:int
const GL_BLEND_EQUATION:int
const GL_CONSTANT_COLOR:int
const GL_ONE_MINUS_CONSTANT_COLOR:int
const GL_CONSTANT_ALPHA:int
const GL_ONE_MINUS_CONSTANT_ALPHA:int
const GL_FUNC_ADD:int
const GL_FUNC_REVERSE_SUBTRACT:int
const GL_FUNC_SUBTRACT:int
const GL_MIN:int
const GL_MAX:int
const GL_BUFFER_SIZE:int
const GL_BUFFER_USAGE:int
const GL_QUERY_COUNTER_BITS:int
const GL_CURRENT_QUERY:int
const GL_QUERY_RESULT:int
const GL_QUERY_RESULT_AVAILABLE:int
const GL_ARRAY_BUFFER:int
const GL_ELEMENT_ARRAY_BUFFER:int
const GL_ARRAY_BUFFER_BINDING:int
const GL_ELEMENT_ARRAY_BUFFER_BINDING:int
const GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING:int
const GL_READ_ONLY:int
const GL_WRITE_ONLY:int
const GL_READ_WRITE:int
const GL_BUFFER_ACCESS:int
const GL_BUFFER_MAPPED:int
const GL_BUFFER_MAP_POINTER:int
const GL_STREAM_DRAW:int
const GL_STREAM_READ:int
const GL_STREAM_COPY:int
const GL_STATIC_DRAW:int
const GL_STATIC_READ:int
const GL_STATIC_COPY:int
const GL_DYNAMIC_DRAW:int
const GL_DYNAMIC_READ:int
const GL_DYNAMIC_COPY:int
const GL_SAMPLES_PASSED:int
const GL_SRC1_ALPHA:int
const GL_BLEND_EQUATION_RGB:int
const GL_VERTEX_ATTRIB_ARRAY_ENABLED:int
const GL_VERTEX_ATTRIB_ARRAY_SIZE:int
const GL_VERTEX_ATTRIB_ARRAY_STRIDE:int
const GL_VERTEX_ATTRIB_ARRAY_TYPE:int
const GL_CURRENT_VERTEX_ATTRIB:int
const GL_VERTEX_PROGRAM_POINT_SIZE:int
const GL_VERTEX_ATTRIB_ARRAY_POINTER:int
const GL_STENCIL_BACK_FUNC:int
const GL_STENCIL_BACK_FAIL:int
const GL_STENCIL_BACK_PASS_DEPTH_FAIL:int
const GL_STENCIL_BACK_PASS_DEPTH_PASS:int
const GL_MAX_DRAW_BUFFERS:int
const GL_DRAW_BUFFER0:int
const GL_DRAW_BUFFER1:int
const GL_DRAW_BUFFER2:int
const GL_DRAW_BUFFER3:int
const GL_DRAW_BUFFER4:int
const GL_DRAW_BUFFER5:int
const GL_DRAW_BUFFER6:int
const GL_DRAW_BUFFER7:int
const GL_DRAW_BUFFER8:int
const GL_DRAW_BUFFER9:int
const GL_DRAW_BUFFER10:int
const GL_DRAW_BUFFER11:int
const GL_DRAW_BUFFER12:int
const GL_DRAW_BUFFER13:int
const GL_DRAW_BUFFER14:int
const GL_DRAW_BUFFER15:int
const GL_BLEND_EQUATION_ALPHA:int
const GL_MAX_VERTEX_ATTRIBS:int
const GL_VERTEX_ATTRIB_ARRAY_NORMALIZED:int
const GL_MAX_TEXTURE_IMAGE_UNITS:int
const GL_FRAGMENT_SHADER:int
const GL_VERTEX_SHADER:int
const GL_MAX_FRAGMENT_UNIFORM_COMPONENTS:int
const GL_MAX_VERTEX_UNIFORM_COMPONENTS:int
const GL_MAX_VARYING_FLOATS:int
const GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS:int
const GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS:int
const GL_SHADER_TYPE:int
const GL_FLOAT_VEC2:int
const GL_FLOAT_VEC3:int
const GL_FLOAT_VEC4:int
const GL_INT_VEC2:int
const GL_INT_VEC3:int
const GL_INT_VEC4:int
const GL_BOOL:int
const GL_BOOL_VEC2:int
const GL_BOOL_VEC3:int
const GL_BOOL_VEC4:int
const GL_FLOAT_MAT2:int
const GL_FLOAT_MAT3:int
const GL_FLOAT_MAT4:int
const GL_SAMPLER_1D:int
const GL_SAMPLER_2D:int
const GL_SAMPLER_3D:int
const GL_SAMPLER_CUBE:int
const GL_SAMPLER_1D_SHADOW:int
const GL_SAMPLER_2D_SHADOW:int
const GL_DELETE_STATUS:int
const GL_COMPILE_STATUS:int
const GL_LINK_STATUS:int
const GL_VALIDATE_STATUS:int
const GL_INFO_LOG_LENGTH:int
const GL_ATTACHED_SHADERS:int
const GL_ACTIVE_UNIFORMS:int
const GL_ACTIVE_UNIFORM_MAX_LENGTH:int
const GL_SHADER_SOURCE_LENGTH:int
const GL_ACTIVE_ATTRIBUTES:int
const GL_ACTIVE_ATTRIBUTE_MAX_LENGTH:int
const GL_FRAGMENT_SHADER_DERIVATIVE_HINT:int
const GL_SHADING_LANGUAGE_VERSION:int
const GL_CURRENT_PROGRAM:int
const GL_POINT_SPRITE_COORD_ORIGIN:int
const GL_LOWER_LEFT:int
const GL_UPPER_LEFT:int
const GL_STENCIL_BACK_REF:int
const GL_STENCIL_BACK_VALUE_MASK:int
const GL_STENCIL_BACK_WRITEMASK:int
const GL_PIXEL_PACK_BUFFER:int
const GL_PIXEL_UNPACK_BUFFER:int
const GL_PIXEL_PACK_BUFFER_BINDING:int
const GL_PIXEL_UNPACK_BUFFER_BINDING:int
const GL_FLOAT_MAT2x3:int
const GL_FLOAT_MAT2x4:int
const GL_FLOAT_MAT3x2:int
const GL_FLOAT_MAT3x4:int
const GL_FLOAT_MAT4x2:int
const GL_FLOAT_MAT4x3:int
const GL_SRGB:int
const GL_SRGB8:int
const GL_SRGB_ALPHA:int
const GL_SRGB8_ALPHA8:int
const GL_COMPRESSED_SRGB:int
const GL_COMPRESSED_SRGB_ALPHA:int
const GL_COMPARE_REF_TO_TEXTURE:int
const GL_CLIP_DISTANCE0:int
const GL_CLIP_DISTANCE1:int
const GL_CLIP_DISTANCE2:int
const GL_CLIP_DISTANCE3:int
const GL_CLIP_DISTANCE4:int
const GL_CLIP_DISTANCE5:int
const GL_CLIP_DISTANCE6:int
const GL_CLIP_DISTANCE7:int
const GL_MAX_CLIP_DISTANCES:int
const GL_MAJOR_VERSION:int
const GL_MINOR_VERSION:int
const GL_NUM_EXTENSIONS:int
const GL_CONTEXT_FLAGS:int
const GL_COMPRESSED_RED:int
const GL_COMPRESSED_RG:int
const GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT:int
const GL_RGBA32F:int
const GL_RGB32F:int
const GL_RGBA16F:int
const GL_RGB16F:int
const GL_VERTEX_ATTRIB_ARRAY_INTEGER:int
const GL_MAX_ARRAY_TEXTURE_LAYERS:int
const GL_MIN_PROGRAM_TEXEL_OFFSET:int
const GL_MAX_PROGRAM_TEXEL_OFFSET:int
const GL_CLAMP_READ_COLOR:int
const GL_FIXED_ONLY:int
const GL_MAX_VARYING_COMPONENTS:int
const GL_TEXTURE_1D_ARRAY:int
const GL_PROXY_TEXTURE_1D_ARRAY:int
const GL_TEXTURE_2D_ARRAY:int
const GL_PROXY_TEXTURE_2D_ARRAY:int
const GL_TEXTURE_BINDING_1D_ARRAY:int
const GL_TEXTURE_BINDING_2D_ARRAY:int
const GL_R11F_G11F_B10F:int
const GL_UNSIGNED_INT_10F_11F_11F_REV:int
const GL_RGB9_E5:int
const GL_UNSIGNED_INT_5_9_9_9_REV:int
const GL_TEXTURE_SHARED_SIZE:int
const GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH:int
const GL_TRANSFORM_FEEDBACK_BUFFER_MODE:int
const GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS:int
const GL_TRANSFORM_FEEDBACK_VARYINGS:int
const GL_TRANSFORM_FEEDBACK_BUFFER_START:int
const GL_TRANSFORM_FEEDBACK_BUFFER_SIZE:int
const GL_PRIMITIVES_GENERATED:int
const GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN:int
const GL_RASTERIZER_DISCARD:int
const GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS:int
const GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS:int
const GL_INTERLEAVED_ATTRIBS:int
const GL_SEPARATE_ATTRIBS:int
const GL_TRANSFORM_FEEDBACK_BUFFER:int
const GL_TRANSFORM_FEEDBACK_BUFFER_BINDING:int
const GL_RGBA32UI:int
const GL_RGB32UI:int
const GL_RGBA16UI:int
const GL_RGB16UI:int
const GL_RGBA8UI:int
const GL_RGB8UI:int
const GL_RGBA32I:int
const GL_RGB32I:int
const GL_RGBA16I:int
const GL_RGB16I:int
const GL_RGBA8I:int
const GL_RGB8I:int
const GL_RED_INTEGER:int
const GL_GREEN_INTEGER:int
const GL_BLUE_INTEGER:int
const GL_RGB_INTEGER:int
const GL_RGBA_INTEGER:int
const GL_BGR_INTEGER:int
const GL_BGRA_INTEGER:int
const GL_SAMPLER_1D_ARRAY:int
const GL_SAMPLER_2D_ARRAY:int
const GL_SAMPLER_1D_ARRAY_SHADOW:int
const GL_SAMPLER_2D_ARRAY_SHADOW:int
const GL_SAMPLER_CUBE_SHADOW:int
const GL_UNSIGNED_INT_VEC2:int
const GL_UNSIGNED_INT_VEC3:int
const GL_UNSIGNED_INT_VEC4:int
const GL_INT_SAMPLER_1D:int
const GL_INT_SAMPLER_2D:int
const GL_INT_SAMPLER_3D:int
const GL_INT_SAMPLER_CUBE:int
const GL_INT_SAMPLER_1D_ARRAY:int
const GL_INT_SAMPLER_2D_ARRAY:int
const GL_UNSIGNED_INT_SAMPLER_1D:int
const GL_UNSIGNED_INT_SAMPLER_2D:int
const GL_UNSIGNED_INT_SAMPLER_3D:int
const GL_UNSIGNED_INT_SAMPLER_CUBE:int
const GL_UNSIGNED_INT_SAMPLER_1D_ARRAY:int
const GL_UNSIGNED_INT_SAMPLER_2D_ARRAY:int
const GL_QUERY_WAIT:int
const GL_QUERY_NO_WAIT:int
const GL_QUERY_BY_REGION_WAIT:int
const GL_QUERY_BY_REGION_NO_WAIT:int
const GL_BUFFER_ACCESS_FLAGS:int
const GL_BUFFER_MAP_LENGTH:int
const GL_BUFFER_MAP_OFFSET:int
const GL_DEPTH_COMPONENT32F:int
const GL_DEPTH32F_STENCIL8:int
const GL_FLOAT_32_UNSIGNED_INT_24_8_REV:int
const GL_INVALID_FRAMEBUFFER_OPERATION:int
const GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING:int
const GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE:int
const GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE:int
const GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE:int
const GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE:int
const GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE:int
const GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE:int
const GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE:int
const GL_FRAMEBUFFER_DEFAULT:int
const GL_FRAMEBUFFER_UNDEFINED:int
const GL_DEPTH_STENCIL_ATTACHMENT:int
const GL_MAX_RENDERBUFFER_SIZE:int
const GL_DEPTH_STENCIL:int
const GL_UNSIGNED_INT_24_8:int
const GL_DEPTH24_STENCIL8:int
const GL_TEXTURE_STENCIL_SIZE:int
const GL_TEXTURE_RED_TYPE:int
const GL_TEXTURE_GREEN_TYPE:int
const GL_TEXTURE_BLUE_TYPE:int
const GL_TEXTURE_ALPHA_TYPE:int
const GL_TEXTURE_DEPTH_TYPE:int
const GL_UNSIGNED_NORMALIZED:int
const GL_FRAMEBUFFER_BINDING:int
const GL_DRAW_FRAMEBUFFER_BINDING:int
const GL_RENDERBUFFER_BINDING:int
const GL_READ_FRAMEBUFFER:int
const GL_DRAW_FRAMEBUFFER:int
const GL_READ_FRAMEBUFFER_BINDING:int
const GL_RENDERBUFFER_SAMPLES:int
const GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE:int
const GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME:int
const GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL:int
const GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE:int
const GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER:int
const GL_FRAMEBUFFER_COMPLETE:int
const GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT:int
const GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT:int
const GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER:int
const GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER:int
const GL_FRAMEBUFFER_UNSUPPORTED:int
const GL_MAX_COLOR_ATTACHMENTS:int
const GL_COLOR_ATTACHMENT0:int
const GL_COLOR_ATTACHMENT1:int
const GL_COLOR_ATTACHMENT2:int
const GL_COLOR_ATTACHMENT3:int
const GL_COLOR_ATTACHMENT4:int
const GL_COLOR_ATTACHMENT5:int
const GL_COLOR_ATTACHMENT6:int
const GL_COLOR_ATTACHMENT7:int
const GL_COLOR_ATTACHMENT8:int
const GL_COLOR_ATTACHMENT9:int
const GL_COLOR_ATTACHMENT10:int
const GL_COLOR_ATTACHMENT11:int
const GL_COLOR_ATTACHMENT12:int
const GL_COLOR_ATTACHMENT13:int
const GL_COLOR_ATTACHMENT14:int
const GL_COLOR_ATTACHMENT15:int
const GL_COLOR_ATTACHMENT16:int
const GL_COLOR_ATTACHMENT17:int
const GL_COLOR_ATTACHMENT18:int
const GL_COLOR_ATTACHMENT19:int
const GL_COLOR_ATTACHMENT20:int
const GL_COLOR_ATTACHMENT21:int
const GL_COLOR_ATTACHMENT22:int
const GL_COLOR_ATTACHMENT23:int
const GL_COLOR_ATTACHMENT24:int
const GL_COLOR_ATTACHMENT25:int
const GL_COLOR_ATTACHMENT26:int
const GL_COLOR_ATTACHMENT27:int
const GL_COLOR_ATTACHMENT28:int
const GL_COLOR_ATTACHMENT29:int
const GL_COLOR_ATTACHMENT30:int
const GL_COLOR_ATTACHMENT31:int
const GL_DEPTH_ATTACHMENT:int
const GL_STENCIL_ATTACHMENT:int
const GL_FRAMEBUFFER:int
const GL_RENDERBUFFER:int
const GL_RENDERBUFFER_WIDTH:int
const GL_RENDERBUFFER_HEIGHT:int
const GL_RENDERBUFFER_INTERNAL_FORMAT:int
const GL_STENCIL_INDEX1:int
const GL_STENCIL_INDEX4:int
const GL_STENCIL_INDEX8:int
const GL_STENCIL_INDEX16:int
const GL_RENDERBUFFER_RED_SIZE:int
const GL_RENDERBUFFER_GREEN_SIZE:int
const GL_RENDERBUFFER_BLUE_SIZE:int
const GL_RENDERBUFFER_ALPHA_SIZE:int
const GL_RENDERBUFFER_DEPTH_SIZE:int
const GL_RENDERBUFFER_STENCIL_SIZE:int
const GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE:int
const GL_MAX_SAMPLES:int
const GL_FRAMEBUFFER_SRGB:int
const GL_HALF_FLOAT:int
const GL_MAP_READ_BIT:int
const GL_MAP_WRITE_BIT:int
const GL_MAP_INVALIDATE_RANGE_BIT:int
const GL_MAP_INVALIDATE_BUFFER_BIT:int
const GL_MAP_FLUSH_EXPLICIT_BIT:int
const GL_MAP_UNSYNCHRONIZED_BIT:int
const GL_COMPRESSED_RED_RGTC1:int
const GL_COMPRESSED_SIGNED_RED_RGTC1:int
const GL_COMPRESSED_RG_RGTC2:int
const GL_COMPRESSED_SIGNED_RG_RGTC2:int
const GL_RG:int
const GL_RG_INTEGER:int
const GL_R8:int
const GL_R16:int
const GL_RG8:int
const GL_RG16:int
const GL_R16F:int
const GL_R32F:int
const GL_RG16F:int
const GL_RG32F:int
const GL_R8I:int
const GL_R8UI:int
const GL_R16I:int
const GL_R16UI:int
const GL_R32I:int
const GL_R32UI:int
const GL_RG8I:int
const GL_RG8UI:int
const GL_RG16I:int
const GL_RG16UI:int
const GL_RG32I:int
const GL_RG32UI:int
const GL_VERTEX_ARRAY_BINDING:int
const GL_SAMPLER_2D_RECT:int
const GL_SAMPLER_2D_RECT_SHADOW:int
const GL_SAMPLER_BUFFER:int
const GL_INT_SAMPLER_2D_RECT:int
const GL_INT_SAMPLER_BUFFER:int
const GL_UNSIGNED_INT_SAMPLER_2D_RECT:int
const GL_UNSIGNED_INT_SAMPLER_BUFFER:int
const GL_TEXTURE_BUFFER:int
const GL_MAX_TEXTURE_BUFFER_SIZE:int
const GL_TEXTURE_BINDING_BUFFER:int
const GL_TEXTURE_BUFFER_DATA_STORE_BINDING:int
const GL_TEXTURE_RECTANGLE:int
const GL_TEXTURE_BINDING_RECTANGLE:int
const GL_PROXY_TEXTURE_RECTANGLE:int
const GL_MAX_RECTANGLE_TEXTURE_SIZE:int
const GL_R8_SNORM:int
const GL_RG8_SNORM:int
const GL_RGB8_SNORM:int
const GL_RGBA8_SNORM:int
const GL_R16_SNORM:int
const GL_RG16_SNORM:int
const GL_RGB16_SNORM:int
const GL_RGBA16_SNORM:int
const GL_SIGNED_NORMALIZED:int
const GL_PRIMITIVE_RESTART:int
const GL_PRIMITIVE_RESTART_INDEX:int
const GL_COPY_READ_BUFFER:int
const GL_COPY_WRITE_BUFFER:int
const GL_UNIFORM_BUFFER:int
const GL_UNIFORM_BUFFER_BINDING:int
const GL_UNIFORM_BUFFER_START:int
const GL_UNIFORM_BUFFER_SIZE:int
const GL_MAX_VERTEX_UNIFORM_BLOCKS:int
const GL_MAX_GEOMETRY_UNIFORM_BLOCKS:int
const GL_MAX_FRAGMENT_UNIFORM_BLOCKS:int
const GL_MAX_COMBINED_UNIFORM_BLOCKS:int
const GL_MAX_UNIFORM_BUFFER_BINDINGS:int
const GL_MAX_UNIFORM_BLOCK_SIZE:int
const GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS:int
const GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS:int
const GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS:int
const GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT:int
const GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH:int
const GL_ACTIVE_UNIFORM_BLOCKS:int
const GL_UNIFORM_TYPE:int
const GL_UNIFORM_SIZE:int
const GL_UNIFORM_NAME_LENGTH:int
const GL_UNIFORM_BLOCK_INDEX:int
const GL_UNIFORM_OFFSET:int
const GL_UNIFORM_ARRAY_STRIDE:int
const GL_UNIFORM_MATRIX_STRIDE:int
const GL_UNIFORM_IS_ROW_MAJOR:int
const GL_UNIFORM_BLOCK_BINDING:int
const GL_UNIFORM_BLOCK_DATA_SIZE:int
const GL_UNIFORM_BLOCK_NAME_LENGTH:int
const GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS:int
const GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES:int
const GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER:int
const GL_UNIFORM_BLOCK_REFERENCED_BY_GEOMETRY_SHADER:int
const GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER:int
const GL_INVALID_INDEX:int
const GL_CONTEXT_CORE_PROFILE_BIT:int
const GL_CONTEXT_COMPATIBILITY_PROFILE_BIT:int
const GL_LINES_ADJACENCY:int
const GL_LINE_STRIP_ADJACENCY:int
const GL_TRIANGLES_ADJACENCY:int
const GL_TRIANGLE_STRIP_ADJACENCY:int
const GL_PROGRAM_POINT_SIZE:int
const GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS:int
const GL_FRAMEBUFFER_ATTACHMENT_LAYERED:int
const GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS:int
const GL_GEOMETRY_SHADER:int
const GL_GEOMETRY_VERTICES_OUT:int
const GL_GEOMETRY_INPUT_TYPE:int
const GL_GEOMETRY_OUTPUT_TYPE:int
const GL_MAX_GEOMETRY_UNIFORM_COMPONENTS:int
const GL_MAX_GEOMETRY_OUTPUT_VERTICES:int
const GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS:int
const GL_MAX_VERTEX_OUTPUT_COMPONENTS:int
const GL_MAX_GEOMETRY_INPUT_COMPONENTS:int
const GL_MAX_GEOMETRY_OUTPUT_COMPONENTS:int
const GL_MAX_FRAGMENT_INPUT_COMPONENTS:int
const GL_CONTEXT_PROFILE_MASK:int
const GL_DEPTH_CLAMP:int
const GL_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION:int
const GL_FIRST_VERTEX_CONVENTION:int
const GL_LAST_VERTEX_CONVENTION:int
const GL_PROVOKING_VERTEX:int
const GL_TEXTURE_CUBE_MAP_SEAMLESS:int
const GL_MAX_SERVER_WAIT_TIMEOUT:int
const GL_OBJECT_TYPE:int
const GL_SYNC_CONDITION:int
const GL_SYNC_STATUS:int
const GL_SYNC_FLAGS:int
const GL_SYNC_FENCE:int
const GL_SYNC_GPU_COMMANDS_COMPLETE:int
const GL_UNSIGNALED:int
const GL_SIGNALED:int
const GL_ALREADY_SIGNALED:int
const GL_TIMEOUT_EXPIRED:int
const GL_CONDITION_SATISFIED:int
const GL_WAIT_FAILED:int
const GL_TIMEOUT_IGNORED:int
const GL_SYNC_FLUSH_COMMANDS_BIT:int
const GL_SAMPLE_POSITION:int
const GL_SAMPLE_MASK:int
const GL_SAMPLE_MASK_VALUE:int
const GL_MAX_SAMPLE_MASK_WORDS:int
const GL_TEXTURE_2D_MULTISAMPLE:int
const GL_PROXY_TEXTURE_2D_MULTISAMPLE:int
const GL_TEXTURE_2D_MULTISAMPLE_ARRAY:int
const GL_PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY:int
const GL_TEXTURE_BINDING_2D_MULTISAMPLE:int
const GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY:int
const GL_TEXTURE_SAMPLES:int
const GL_TEXTURE_FIXED_SAMPLE_LOCATIONS:int
const GL_SAMPLER_2D_MULTISAMPLE:int
const GL_INT_SAMPLER_2D_MULTISAMPLE:int
const GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE:int
const GL_SAMPLER_2D_MULTISAMPLE_ARRAY:int
const GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY:int
const GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY:int
const GL_MAX_COLOR_TEXTURE_SAMPLES:int
const GL_MAX_DEPTH_TEXTURE_SAMPLES:int
const GL_MAX_INTEGER_SAMPLES:int
const GL_VERTEX_ATTRIB_ARRAY_DIVISOR:int
const GL_SRC1_COLOR:int
const GL_ONE_MINUS_SRC1_COLOR:int
const GL_ONE_MINUS_SRC1_ALPHA:int
const GL_MAX_DUAL_SOURCE_DRAW_BUFFERS:int
const GL_ANY_SAMPLES_PASSED:int
const GL_SAMPLER_BINDING:int
const GL_RGB10_A2UI:int
const GL_TEXTURE_SWIZZLE_R:int
const GL_TEXTURE_SWIZZLE_G:int
const GL_TEXTURE_SWIZZLE_B:int
const GL_TEXTURE_SWIZZLE_A:int
const GL_TEXTURE_SWIZZLE_RGBA:int
const GL_TIME_ELAPSED:int
const GL_TIMESTAMP:int
const GL_INT_2_10_10_10_REV:int
const GL_VERSION_1_0:int
const GL_VERSION_1_1:int
const GL_VERSION_1_2:int
const GL_VERSION_1_3:int
const GL_VERSION_1_4:int
const GL_VERSION_1_5:int
const GL_VERSION_2_0:int
const GL_VERSION_2_1:int
const GL_VERSION_3_0:int
const GL_VERSION_3_1:int
const GL_VERSION_3_2:int
const GL_VERSION_3_3:int

'// Decls

function GLVersion:gladGLversionStruct()
function gladLoadGL:int()
function gladLoadGLLoader:int(GLADloadproc)

function glCullFace:void(mode:GLenum)
function glFrontFace:void(mode:GLenum)
function glHint:void(target:GLenum,mode:GLenum)
function glLineWidth:void(width:GLfloat)
function glPointSize:void(size:GLfloat)
function glPolygonMode:void(face:GLenum,mode:GLenum)
function glScissor:void(x:GLint,y:GLint,width:GLsizei,height:GLsizei)
function glTexParameterf:void(target:GLenum,pname:GLenum,param:GLfloat)
function glTexParameterfv:void(target:GLenum,pname:GLenum,params:GLfloat ptr)
function glTexParameteri:void(target:GLenum,pname:GLenum,param:GLint)
function glTexParameteriv:void(target:GLenum,pname:GLenum,params:GLint ptr)
function glTexImage1D:void(target:GLenum,level:GLint,internalformat:GLint,width:GLsizei,border:GLint,format:GLenum,type:GLenum,pixels:void ptr)
function glTexImage2D:void(target:GLenum,level:GLint,internalformat:GLint,width:GLsizei,height:GLsizei,border:GLint,format:GLenum,type:GLenum,pixels:void ptr)
function glDrawBuffer:void(buf:GLenum)
function glClear:void(mask:GLbitfield)
function glClearColor:void(red:GLfloat,green:GLfloat,blue:GLfloat,alpha:GLfloat)
function glClearStencil:void(s:GLint)
function glClearDepth:void(depth:GLdouble)
function glStencilMask:void(mask:GLuint)
function glColorMask:void(red:GLboolean,green:GLboolean,blue:GLboolean,alpha:GLboolean)
function glDepthMask:void(flag:GLboolean)
function glDisable:void(cap:GLenum)
function glEnable:void(cap:GLenum)
function glFinish:void()
function glFlush:void()
function glBlendFunc:void(sfactor:GLenum,dfactor:GLenum)
function glLogicOp:void(opcode:GLenum)
function glStencilFunc:void(func:GLenum,ref:GLint,mask:GLuint)
function glStencilOp:void(fail:GLenum,zfail:GLenum,zpass:GLenum)
function glDepthFunc:void(func:GLenum)
function glPixelStoref:void(pname:GLenum,param:GLfloat)
function glPixelStorei:void(pname:GLenum,param:GLint)
function glReadBuffer:void(src:GLenum)
function glReadPixels:void(x:GLint,y:GLint,width:GLsizei,height:GLsizei,format:GLenum,type:GLenum,pixels:void ptr)
function glGetBooleanv:void(pname:GLenum,data:GLboolean ptr)
function glGetDoublev:void(pname:GLenum,data:GLdouble ptr)
function glGetError:GLenum()
function glGetFloatv:void(pname:GLenum,data:GLfloat ptr)
function glGetIntegerv:void(pname:GLenum,data:GLint ptr)
function glGetString:CString(name:GLenum)
function glGetTexImage:void(target:GLenum,level:GLint,format:GLenum,type:GLenum,pixels:void ptr)
function glGetTexParameterfv:void(target:GLenum,pname:GLenum,params:GLfloat ptr)
function glGetTexParameteriv:void(target:GLenum,pname:GLenum,params:GLint ptr)
function glGetTexLevelParameterfv:void(target:GLenum,level:GLint,pname:GLenum,params:GLfloat ptr)
function glGetTexLevelParameteriv:void(target:GLenum,level:GLint,pname:GLenum,params:GLint ptr)
function glIsEnabled:GLboolean(cap:GLenum)
function glDepthRange:void(n:GLdouble,f:GLdouble)
function glViewport:void(x:GLint,y:GLint,width:GLsizei,height:GLsizei)
function glDrawArrays:void(mode:GLenum,first:GLint,count:GLsizei)
function glDrawElements:void(mode:GLenum,count:GLsizei,type:GLenum,indices:void ptr)
function glPolygonOffset:void(factor:GLfloat,units:GLfloat)
function glCopyTexImage1D:void(target:GLenum,level:GLint,internalformat:GLenum,x:GLint,y:GLint,width:GLsizei,border:GLint)
function glCopyTexImage2D:void(target:GLenum,level:GLint,internalformat:GLenum,x:GLint,y:GLint,width:GLsizei,height:GLsizei,border:GLint)
function glCopyTexSubImage1D:void(target:GLenum,level:GLint,xoffset:GLint,x:GLint,y:GLint,width:GLsizei)
function glCopyTexSubImage2D:void(target:GLenum,level:GLint,xoffset:GLint,yoffset:GLint,x:GLint,y:GLint,width:GLsizei,height:GLsizei)
function glTexSubImage1D:void(target:GLenum,level:GLint,xoffset:GLint,width:GLsizei,format:GLenum,type:GLenum,pixels:void ptr)
function glTexSubImage2D:void(target:GLenum,level:GLint,xoffset:GLint,yoffset:GLint,width:GLsizei,height:GLsizei,format:GLenum,type:GLenum,pixels:void ptr)
function glBindTexture:void(target:GLenum,texture:GLuint)
function glDeleteTextures:void(n:GLsizei,textures:GLuint ptr)
function glGenTextures:void(n:GLsizei,textures:GLuint ptr)
function glIsTexture:GLboolean(texture:GLuint)
function glDrawRangeElements:void(mode:GLenum,start:GLuint,e:GLuint,count:GLsizei,type:GLenum,indices:void ptr)
function glTexImage3D:void(target:GLenum,level:GLint,internalformat:GLint,width:GLsizei,height:GLsizei,depth:GLsizei,border:GLint,format:GLenum,type:GLenum,pixels:void ptr)
function glTexSubImage3D:void(target:GLenum,level:GLint,xoffset:GLint,yoffset:GLint,zoffset:GLint,width:GLsizei,height:GLsizei,depth:GLsizei,format:GLenum,type:GLenum,pixels:void ptr)
function glCopyTexSubImage3D:void(target:GLenum,level:GLint,xoffset:GLint,yoffset:GLint,zoffset:GLint,x:GLint,y:GLint,width:GLsizei,height:GLsizei)
function glActiveTexture:void(texture:GLenum)
function glSampleCoverage:void(value:GLfloat,invert:GLboolean)
function glCompressedTexImage3D:void(target:GLenum,level:GLint,internalformat:GLenum,width:GLsizei,height:GLsizei,depth:GLsizei,border:GLint,imageSize:GLsizei,data:void ptr)
function glCompressedTexImage2D:void(target:GLenum,level:GLint,internalformat:GLenum,width:GLsizei,height:GLsizei,border:GLint,imageSize:GLsizei,data:void ptr)
function glCompressedTexImage1D:void(target:GLenum,level:GLint,internalformat:GLenum,width:GLsizei,border:GLint,imageSize:GLsizei,data:void ptr)
function glCompressedTexSubImage3D:void(target:GLenum,level:GLint,xoffset:GLint,yoffset:GLint,zoffset:GLint,width:GLsizei,height:GLsizei,depth:GLsizei,format:GLenum,imageSize:GLsizei,data:void ptr)
function glCompressedTexSubImage2D:void(target:GLenum,level:GLint,xoffset:GLint,yoffset:GLint,width:GLsizei,height:GLsizei,format:GLenum,imageSize:GLsizei,data:void ptr)
function glCompressedTexSubImage1D:void(target:GLenum,level:GLint,xoffset:GLint,width:GLsizei,format:GLenum,imageSize:GLsizei,data:void ptr)
function glGetCompressedTexImage:void(target:GLenum,level:GLint,img:void ptr)
function glBlendFuncSeparate:void(sfactorRGB:GLenum,dfactorRGB:GLenum,sfactorAlpha:GLenum,dfactorAlpha:GLenum)
function glMultiDrawArrays:void(mode:GLenum,first:GLint ptr,count:GLsizei ptr,drawcount:GLsizei)
function glMultiDrawElements:void(mode:GLenum,count:GLsizei ptr,type:GLenum,indices:void ptr ptr,drawcount:GLsizei)
function glPointParameterf:void(pname:GLenum,param:GLfloat)
function glPointParameterfv:void(pname:GLenum,params:GLfloat ptr)
function glPointParameteri:void(pname:GLenum,param:GLint)
function glPointParameteriv:void(pname:GLenum,params:GLint ptr)
function glBlendColor:void(red:GLfloat,green:GLfloat,blue:GLfloat,alpha:GLfloat)
function glBlendEquation:void(mode:GLenum)
function glGenQueries:void(n:GLsizei,ids:GLuint ptr)
function glDeleteQueries:void(n:GLsizei,ids:GLuint ptr)
function glIsQuery:GLboolean(id:GLuint)
function glBeginQuery:void(target:GLenum,id:GLuint)
function glEndQuery:void(target:GLenum)
function glGetQueryiv:void(target:GLenum,pname:GLenum,params:GLint ptr)
function glGetQueryObjectiv:void(id:GLuint,pname:GLenum,params:GLint ptr)
function glGetQueryObjectuiv:void(id:GLuint,pname:GLenum,params:GLuint ptr)
function glBindBuffer:void(target:GLenum,buffer:GLuint)
function glDeleteBuffers:void(n:GLsizei,buffers:GLuint ptr)
function glGenBuffers:void(n:GLsizei,buffers:GLuint ptr)
function glIsBuffer:GLboolean(buffer:GLuint)
function glBufferData:void(target:GLenum,size:GLsizeiptr,data:void ptr,usage:GLenum)
function glBufferSubData:void(target:GLenum,offset:GLintptr,size:GLsizeiptr,data:void ptr)
function glGetBufferSubData:void(target:GLenum,offset:GLintptr,size:GLsizeiptr,data:void ptr)
function glMapBuffer:void ptr(target:GLenum,access:GLenum)
function glUnmapBuffer:GLboolean(target:GLenum)
function glGetBufferParameteriv:void(target:GLenum,pname:GLenum,params:GLint ptr)
function glGetBufferPointerv:void(target:GLenum,pname:GLenum,params:void ptr ptr)
function glBlendEquationSeparate:void(modeRGB:GLenum,modeAlpha:GLenum)
function glDrawBuffers:void(n:GLsizei,bufs:GLenum ptr)
function glStencilOpSeparate:void(face:GLenum,sfail:GLenum,dpfail:GLenum,dppass:GLenum)
function glStencilFuncSeparate:void(face:GLenum,func:GLenum,ref:GLint,mask:GLuint)
function glStencilMaskSeparate:void(face:GLenum,mask:GLuint)
function glAttachShader:void(program:GLuint,shader:GLuint)
function glBindAttribLocation:void(program:GLuint,index:GLuint,name:CString)
function glCompileShader:void(shader:GLuint)
function glCreateProgram:GLuint()
function glCreateShader:GLuint(type:GLenum)
function glDeleteProgram:void(program:GLuint)
function glDeleteShader:void(shader:GLuint)
function glDetachShader:void(program:GLuint,shader:GLuint)
function glDisableVertexAttribArray:void(index:GLuint)
function glEnableVertexAttribArray:void(index:GLuint)
function glGetActiveAttrib:void(program:GLuint,index:GLuint,bufSize:GLsizei,length:GLsizei ptr,size:GLint ptr,type:GLenum ptr,name:GLchar ptr)
function glGetActiveUniform:void(program:GLuint,index:GLuint,bufSize:GLsizei,length:GLsizei ptr,size:GLint ptr,type:GLenum ptr,name:GLchar ptr)
function glGetAttachedShaders:void(program:GLuint,maxCount:GLsizei,count:GLsizei ptr,shaders:GLuint ptr)
function glGetAttribLocation:GLint(program:GLuint,name:CString)
function glGetProgramiv:void(program:GLuint,pname:GLenum,params:GLint ptr)
function glGetProgramInfoLog:void(program:GLuint,bufSize:GLsizei,length:GLsizei ptr,infoLog:GLchar ptr)
function glGetShaderiv:void(shader:GLuint,pname:GLenum,params:GLint ptr)
function glGetShaderInfoLog:void(shader:GLuint,bufSize:GLsizei,length:GLsizei ptr,infoLog:GLchar ptr)
function glGetShaderSource:void(shader:GLuint,bufSize:GLsizei,length:GLsizei ptr,source:GLchar ptr)
function glGetUniformLocation:GLint(program:GLuint,name:CString)
function glGetUniformfv:void(program:GLuint,location:GLint,params:GLfloat ptr)
function glGetUniformiv:void(program:GLuint,location:GLint,params:GLint ptr)
function glGetVertexAttribdv:void(index:GLuint,pname:GLenum,params:GLdouble ptr)
function glGetVertexAttribfv:void(index:GLuint,pname:GLenum,params:GLfloat ptr)
function glGetVertexAttribiv:void(index:GLuint,pname:GLenum,params:GLint ptr)
function glGetVertexAttribPointerv:void(index:GLuint,pname:GLenum,pointer:void ptr ptr)
function glIsProgram:GLboolean(program:GLuint)
function glIsShader:GLboolean(shader:GLuint)
function glLinkProgram:void(program:GLuint)
function glShaderSource:void(shader:GLuint,count:GLsizei,s:GLcchar ptr ptr,length:GLint ptr)
function glUseProgram:void(program:GLuint)
function glUniform1f:void(location:GLint,v0:GLfloat)
function glUniform2f:void(location:GLint,v0:GLfloat,v1:GLfloat)
function glUniform3f:void(location:GLint,v0:GLfloat,v1:GLfloat,v2:GLfloat)
function glUniform4f:void(location:GLint,v0:GLfloat,v1:GLfloat,v2:GLfloat,v3:GLfloat)
function glUniform1i:void(location:GLint,v0:GLint)
function glUniform2i:void(location:GLint,v0:GLint,v1:GLint)
function glUniform3i:void(location:GLint,v0:GLint,v1:GLint,v2:GLint)
function glUniform4i:void(location:GLint,v0:GLint,v1:GLint,v2:GLint,v3:GLint)
function glUniform1fv:void(location:GLint,count:GLsizei,value:GLfloat ptr)
function glUniform2fv:void(location:GLint,count:GLsizei,value:GLfloat ptr)
function glUniform3fv:void(location:GLint,count:GLsizei,value:GLfloat ptr)
function glUniform4fv:void(location:GLint,count:GLsizei,value:GLfloat ptr)
function glUniform1iv:void(location:GLint,count:GLsizei,value:GLint ptr)
function glUniform2iv:void(location:GLint,count:GLsizei,value:GLint ptr)
function glUniform3iv:void(location:GLint,count:GLsizei,value:GLint ptr)
function glUniform4iv:void(location:GLint,count:GLsizei,value:GLint ptr)
function glUniformMatrix2fv:void(location:GLint,count:GLsizei,transpose:GLboolean,value:GLfloat ptr)
function glUniformMatrix3fv:void(location:GLint,count:GLsizei,transpose:GLboolean,value:GLfloat ptr)
function glUniformMatrix4fv:void(location:GLint,count:GLsizei,transpose:GLboolean,value:GLfloat ptr)
function glValidateProgram:void(program:GLuint)
function glVertexAttrib1d:void(index:GLuint,x:GLdouble)
function glVertexAttrib1dv:void(index:GLuint,v:GLdouble ptr)
function glVertexAttrib1f:void(index:GLuint,x:GLfloat)
function glVertexAttrib1fv:void(index:GLuint,v:GLfloat ptr)
function glVertexAttrib1s:void(index:GLuint,x:GLshort)
function glVertexAttrib1sv:void(index:GLuint,v:GLshort ptr)
function glVertexAttrib2d:void(index:GLuint,x:GLdouble,y:GLdouble)
function glVertexAttrib2dv:void(index:GLuint,v:GLdouble ptr)
function glVertexAttrib2f:void(index:GLuint,x:GLfloat,y:GLfloat)
function glVertexAttrib2fv:void(index:GLuint,v:GLfloat ptr)
function glVertexAttrib2s:void(index:GLuint,x:GLshort,y:GLshort)
function glVertexAttrib2sv:void(index:GLuint,v:GLshort ptr)
function glVertexAttrib3d:void(index:GLuint,x:GLdouble,y:GLdouble,z:GLdouble)
function glVertexAttrib3dv:void(index:GLuint,v:GLdouble ptr)
function glVertexAttrib3f:void(index:GLuint,x:GLfloat,y:GLfloat,z:GLfloat)
function glVertexAttrib3fv:void(index:GLuint,v:GLfloat ptr)
function glVertexAttrib3s:void(index:GLuint,x:GLshort,y:GLshort,z:GLshort)
function glVertexAttrib3sv:void(index:GLuint,v:GLshort ptr)
function glVertexAttrib4Nbv:void(index:GLuint,v:GLbyte ptr)
function glVertexAttrib4Niv:void(index:GLuint,v:GLint ptr)
function glVertexAttrib4Nsv:void(index:GLuint,v:GLshort ptr)
function glVertexAttrib4Nub:void(index:GLuint,x:GLubyte,y:GLubyte,z:GLubyte,w:GLubyte)
function glVertexAttrib4Nubv:void(index:GLuint,v:CString)
function glVertexAttrib4Nuiv:void(index:GLuint,v:GLuint ptr)
function glVertexAttrib4Nusv:void(index:GLuint,v:GLushort ptr)
function glVertexAttrib4bv:void(index:GLuint,v:GLbyte ptr)
function glVertexAttrib4d:void(index:GLuint,x:GLdouble,y:GLdouble,z:GLdouble,w:GLdouble)
function glVertexAttrib4dv:void(index:GLuint,v:GLdouble ptr)
function glVertexAttrib4f:void(index:GLuint,x:GLfloat,y:GLfloat,z:GLfloat,w:GLfloat)
function glVertexAttrib4fv:void(index:GLuint,v:GLfloat ptr)
function glVertexAttrib4iv:void(index:GLuint,v:GLint ptr)
function glVertexAttrib4s:void(index:GLuint,x:GLshort,y:GLshort,z:GLshort,w:GLshort)
function glVertexAttrib4sv:void(index:GLuint,v:GLshort ptr)
function glVertexAttrib4ubv:void(index:GLuint,v:CString)
function glVertexAttrib4uiv:void(index:GLuint,v:GLuint ptr)
function glVertexAttrib4usv:void(index:GLuint,v:GLushort ptr)
function glVertexAttribPointer:void(index:GLuint,size:GLint,type:GLenum,normalized:GLboolean,stride:GLsizei,pointer:void ptr)
function glUniformMatrix2x3fv:void(location:GLint,count:GLsizei,transpose:GLboolean,value:GLfloat ptr)
function glUniformMatrix3x2fv:void(location:GLint,count:GLsizei,transpose:GLboolean,value:GLfloat ptr)
function glUniformMatrix2x4fv:void(location:GLint,count:GLsizei,transpose:GLboolean,value:GLfloat ptr)
function glUniformMatrix4x2fv:void(location:GLint,count:GLsizei,transpose:GLboolean,value:GLfloat ptr)
function glUniformMatrix3x4fv:void(location:GLint,count:GLsizei,transpose:GLboolean,value:GLfloat ptr)
function glUniformMatrix4x3fv:void(location:GLint,count:GLsizei,transpose:GLboolean,value:GLfloat ptr)
function glColorMaski:void(index:GLuint,r:GLboolean,g:GLboolean,b:GLboolean,a:GLboolean)
function glGetBooleani_v:void(target:GLenum,index:GLuint,data:GLboolean ptr)
function glGetIntegeri_v:void(target:GLenum,index:GLuint,data:GLint ptr)
function glEnablei:void(target:GLenum,index:GLuint)
function glDisablei:void(target:GLenum,index:GLuint)
function glIsEnabledi:GLboolean(target:GLenum,index:GLuint)
function glBeginTransformFeedback:void(primitiveMode:GLenum)
function glEndTransformFeedback:void()
function glBindBufferRange:void(target:GLenum,index:GLuint,buffer:GLuint,offset:GLintptr,size:GLsizeiptr)
function glBindBufferBase:void(target:GLenum,index:GLuint,buffer:GLuint)
function glTransformFeedbackVaryings:void(program:GLuint,count:GLsizei,varyings:GLcchar ptr ptr,bufferMode:GLenum)
function glGetTransformFeedbackVarying:void(program:GLuint,index:GLuint,bufSize:GLsizei,length:GLsizei ptr,size:GLsizei ptr,type:GLenum ptr,name:GLchar ptr)
function glClampColor:void(target:GLenum,clamp:GLenum)
function glBeginConditionalRender:void(id:GLuint,mode:GLenum)
function glEndConditionalRender:void()
function glVertexAttribIPointer:void(index:GLuint,size:GLint,type:GLenum,stride:GLsizei,pointer:void ptr)
function glGetVertexAttribIiv:void(index:GLuint,pname:GLenum,params:GLint ptr)
function glGetVertexAttribIuiv:void(index:GLuint,pname:GLenum,params:GLuint ptr)
function glVertexAttribI1i:void(index:GLuint,x:GLint)
function glVertexAttribI2i:void(index:GLuint,x:GLint,y:GLint)
function glVertexAttribI3i:void(index:GLuint,x:GLint,y:GLint,z:GLint)
function glVertexAttribI4i:void(index:GLuint,x:GLint,y:GLint,z:GLint,w:GLint)
function glVertexAttribI1ui:void(index:GLuint,x:GLuint)
function glVertexAttribI2ui:void(index:GLuint,x:GLuint,y:GLuint)
function glVertexAttribI3ui:void(index:GLuint,x:GLuint,y:GLuint,z:GLuint)
function glVertexAttribI4ui:void(index:GLuint,x:GLuint,y:GLuint,z:GLuint,w:GLuint)
function glVertexAttribI1iv:void(index:GLuint,v:GLint ptr)
function glVertexAttribI2iv:void(index:GLuint,v:GLint ptr)
function glVertexAttribI3iv:void(index:GLuint,v:GLint ptr)
function glVertexAttribI4iv:void(index:GLuint,v:GLint ptr)
function glVertexAttribI1uiv:void(index:GLuint,v:GLuint ptr)
function glVertexAttribI2uiv:void(index:GLuint,v:GLuint ptr)
function glVertexAttribI3uiv:void(index:GLuint,v:GLuint ptr)
function glVertexAttribI4uiv:void(index:GLuint,v:GLuint ptr)
function glVertexAttribI4bv:void(index:GLuint,v:GLbyte ptr)
function glVertexAttribI4sv:void(index:GLuint,v:GLshort ptr)
function glVertexAttribI4ubv:void(index:GLuint,v:CString)
function glVertexAttribI4usv:void(index:GLuint,v:GLushort ptr)
function glGetUniformuiv:void(program:GLuint,location:GLint,params:GLuint ptr)
function glBindFragDataLocation:void(program:GLuint,color:GLuint,name:CString)
function glGetFragDataLocation:GLint(program:GLuint,name:CString)
function glUniform1ui:void(location:GLint,v0:GLuint)
function glUniform2ui:void(location:GLint,v0:GLuint,v1:GLuint)
function glUniform3ui:void(location:GLint,v0:GLuint,v1:GLuint,v2:GLuint)
function glUniform4ui:void(location:GLint,v0:GLuint,v1:GLuint,v2:GLuint,v3:GLuint)
function glUniform1uiv:void(location:GLint,count:GLsizei,value:GLuint ptr)
function glUniform2uiv:void(location:GLint,count:GLsizei,value:GLuint ptr)
function glUniform3uiv:void(location:GLint,count:GLsizei,value:GLuint ptr)
function glUniform4uiv:void(location:GLint,count:GLsizei,value:GLuint ptr)
function glTexParameterIiv:void(target:GLenum,pname:GLenum,params:GLint ptr)
function glTexParameterIuiv:void(target:GLenum,pname:GLenum,params:GLuint ptr)
function glGetTexParameterIiv:void(target:GLenum,pname:GLenum,params:GLint ptr)
function glGetTexParameterIuiv:void(target:GLenum,pname:GLenum,params:GLuint ptr)
function glClearBufferiv:void(buffer:GLenum,drawbuffer:GLint,value:GLint ptr)
function glClearBufferuiv:void(buffer:GLenum,drawbuffer:GLint,value:GLuint ptr)
function glClearBufferfv:void(buffer:GLenum,drawbuffer:GLint,value:GLfloat ptr)
function glClearBufferfi:void(buffer:GLenum,drawbuffer:GLint,depth:GLfloat,stencil:GLint)
function glGetStringi:CString(name:GLenum,index:GLuint)
function glIsRenderbuffer:GLboolean(renderbuffer:GLuint)
function glBindRenderbuffer:void(target:GLenum,renderbuffer:GLuint)
function glDeleteRenderbuffers:void(n:GLsizei,renderbuffers:GLuint ptr)
function glGenRenderbuffers:void(n:GLsizei,renderbuffers:GLuint ptr)
function glRenderbufferStorage:void(target:GLenum,internalformat:GLenum,width:GLsizei,height:GLsizei)
function glGetRenderbufferParameteriv:void(target:GLenum,pname:GLenum,params:GLint ptr)
function glIsFramebuffer:GLboolean(framebuffer:GLuint)
function glBindFramebuffer:void(target:GLenum,framebuffer:GLuint)
function glDeleteFramebuffers:void(n:GLsizei,framebuffers:GLuint ptr)
function glGenFramebuffers:void(n:GLsizei,framebuffers:GLuint ptr)
function glCheckFramebufferStatus:GLenum(target:GLenum)
function glFramebufferTexture1D:void(target:GLenum,attachment:GLenum,textarget:GLenum,texture:GLuint,level:GLint)
function glFramebufferTexture2D:void(target:GLenum,attachment:GLenum,textarget:GLenum,texture:GLuint,level:GLint)
function glFramebufferTexture3D:void(target:GLenum,attachment:GLenum,textarget:GLenum,texture:GLuint,level:GLint,zoffset:GLint)
function glFramebufferRenderbuffer:void(target:GLenum,attachment:GLenum,renderbuffertarget:GLenum,renderbuffer:GLuint)
function glGetFramebufferAttachmentParameteriv:void(target:GLenum,attachment:GLenum,pname:GLenum,params:GLint ptr)
function glGenerateMipmap:void(target:GLenum)
function glBlitFramebuffer:void(srcX0:GLint,srcY0:GLint,srcX1:GLint,srcY1:GLint,dstX0:GLint,dstY0:GLint,dstX1:GLint,dstY1:GLint,mask:GLbitfield,filter:GLenum)
function glRenderbufferStorageMultisample:void(target:GLenum,samples:GLsizei,internalformat:GLenum,width:GLsizei,height:GLsizei)
function glFramebufferTextureLayer:void(target:GLenum,attachment:GLenum,texture:GLuint,level:GLint,layer:GLint)
function glMapBufferRange:void ptr(target:GLenum,offset:GLintptr,length:GLsizeiptr,access:GLbitfield)
function glFlushMappedBufferRange:void(target:GLenum,offset:GLintptr,length:GLsizeiptr)
function glBindVertexArray:void(a:GLuint)
function glDeleteVertexArrays:void(n:GLsizei,arrays:GLuint ptr)
function glGenVertexArrays:void(n:GLsizei,arrays:GLuint ptr)
function glIsVertexArray:GLboolean(a:GLuint)
function glDrawArraysInstanced:void(mode:GLenum,first:GLint,count:GLsizei,instancecount:GLsizei)
function glDrawElementsInstanced:void(mode:GLenum,count:GLsizei,type:GLenum,indices:void ptr,instancecount:GLsizei)
function glTexBuffer:void(target:GLenum,internalformat:GLenum,buffer:GLuint)
function glPrimitiveRestartIndex:void(index:GLuint)
function glCopyBufferSubData:void(readTarget:GLenum,writeTarget:GLenum,readOffset:GLintptr,writeOffset:GLintptr,size:GLsizeiptr)
function glGetUniformIndices:void(program:GLuint,uniformCount:GLsizei,uniformNames:GLcchar ptr ptr,uniformIndices:GLuint ptr)
function glGetActiveUniformsiv:void(program:GLuint,uniformCount:GLsizei,uniformIndices:GLuint ptr,pname:GLenum,params:GLint ptr)
function glGetActiveUniformName:void(program:GLuint,uniformIndex:GLuint,bufSize:GLsizei,length:GLsizei ptr,uniformName:GLchar ptr)
function glGetUniformBlockIndex:GLuint(program:GLuint,uniformBlockName:CString)
function glGetActiveUniformBlockiv:void(program:GLuint,uniformBlockIndex:GLuint,pname:GLenum,params:GLint ptr)
function glGetActiveUniformBlockName:void(program:GLuint,uniformBlockIndex:GLuint,bufSize:GLsizei,length:GLsizei ptr,uniformBlockName:GLchar ptr)
function glUniformBlockBinding:void(program:GLuint,uniformBlockIndex:GLuint,uniformBlockBinding:GLuint)
function glDrawElementsBaseVertex:void(mode:GLenum,count:GLsizei,type:GLenum,indices:void ptr,basevertex:GLint)
function glDrawRangeElementsBaseVertex:void(mode:GLenum,start:GLuint,e:GLuint,count:GLsizei,type:GLenum,indices:void ptr,basevertex:GLint)
function glDrawElementsInstancedBaseVertex:void(mode:GLenum,count:GLsizei,type:GLenum,indices:void ptr,instancecount:GLsizei,basevertex:GLint)
function glMultiDrawElementsBaseVertex:void(mode:GLenum,count:GLsizei ptr,type:GLenum,indices:void ptr ptr,drawcount:GLsizei,basevertex:GLint ptr)
function glProvokingVertex:void(mode:GLenum)
function glFenceSync:GLsync(condition:GLenum,flags:GLbitfield)
function glIsSync:GLboolean(sync:GLsync)
function glDeleteSync:void(sync:GLsync)
function glClientWaitSync:GLenum(sync:GLsync,flags:GLbitfield,timeout:GLuint64)
function glWaitSync:void(sync:GLsync,flags:GLbitfield,timeout:GLuint64)
function glGetInteger64v:void(pname:GLenum,data:GLint64 ptr)
function glGetSynciv:void(sync:GLsync,pname:GLenum,count:GLsizei,length:GLsizei ptr,values:GLint ptr)
function glGetInteger64i_v:void(target:GLenum,index:GLuint,data:GLint64 ptr)
function glGetBufferParameteri64v:void(target:GLenum,pname:GLenum,params:GLint64 ptr)
function glFramebufferTexture:void(target:GLenum,attachment:GLenum,texture:GLuint,level:GLint)
function glTexImage2DMultisample:void(target:GLenum,samples:GLsizei,internalformat:GLenum,width:GLsizei,height:GLsizei,fixedsamplelocations:GLboolean)
function glTexImage3DMultisample:void(target:GLenum,samples:GLsizei,internalformat:GLenum,width:GLsizei,height:GLsizei,depth:GLsizei,fixedsamplelocations:GLboolean)
function glGetMultisamplefv:void(pname:GLenum,index:GLuint,val:GLfloat ptr)
function glSampleMaski:void(maskNumber:GLuint,mask:GLbitfield)
function glBindFragDataLocationIndexed:void(program:GLuint,colorNumber:GLuint,index:GLuint,name:CString)
function glGetFragDataIndex:GLint(program:GLuint,name:CString)
function glGenSamplers:void(count:GLsizei,samplers:GLuint ptr)
function glDeleteSamplers:void(count:GLsizei,samplers:GLuint ptr)
function glIsSampler:GLboolean(sampler:GLuint)
function glBindSampler:void(unit:GLuint,sampler:GLuint)
function glSamplerParameteri:void(sampler:GLuint,pname:GLenum,param:GLint)
function glSamplerParameteriv:void(sampler:GLuint,pname:GLenum,param:GLint ptr)
function glSamplerParameterf:void(sampler:GLuint,pname:GLenum,param:GLfloat)
function glSamplerParameterfv:void(sampler:GLuint,pname:GLenum,param:GLfloat ptr)
function glSamplerParameterIiv:void(sampler:GLuint,pname:GLenum,param:GLint ptr)
function glSamplerParameterIuiv:void(sampler:GLuint,pname:GLenum,param:GLuint ptr)
function glGetSamplerParameteriv:void(sampler:GLuint,pname:GLenum,params:GLint ptr)
function glGetSamplerParameterIiv:void(sampler:GLuint,pname:GLenum,params:GLint ptr)
function glGetSamplerParameterfv:void(sampler:GLuint,pname:GLenum,params:GLfloat ptr)
function glGetSamplerParameterIuiv:void(sampler:GLuint,pname:GLenum,params:GLuint ptr)
function glQueryCounter:void(id:GLuint,target:GLenum)
function glGetQueryObjecti64v:void(id:GLuint,pname:GLenum,params:GLint64 ptr)
function glGetQueryObjectui64v:void(id:GLuint,pname:GLenum,params:GLuint64 ptr)
function glVertexAttribDivisor:void(index:GLuint,divisor:GLuint)
function glVertexAttribP1ui:void(index:GLuint,type:GLenum,normalized:GLboolean,value:GLuint)
function glVertexAttribP1uiv:void(index:GLuint,type:GLenum,normalized:GLboolean,value:GLuint ptr)
function glVertexAttribP2ui:void(index:GLuint,type:GLenum,normalized:GLboolean,value:GLuint)
function glVertexAttribP2uiv:void(index:GLuint,type:GLenum,normalized:GLboolean,value:GLuint ptr)
function glVertexAttribP3ui:void(index:GLuint,type:GLenum,normalized:GLboolean,value:GLuint)
function glVertexAttribP3uiv:void(index:GLuint,type:GLenum,normalized:GLboolean,value:GLuint ptr)
function glVertexAttribP4ui:void(index:GLuint,type:GLenum,normalized:GLboolean,value:GLuint)
function glVertexAttribP4uiv:void(index:GLuint,type:GLenum,normalized:GLboolean,value:GLuint ptr)
function glVertexP2ui:void(type:GLenum,value:GLuint)
function glVertexP2uiv:void(type:GLenum,value:GLuint ptr)
function glVertexP3ui:void(type:GLenum,value:GLuint)
function glVertexP3uiv:void(type:GLenum,value:GLuint ptr)
function glVertexP4ui:void(type:GLenum,value:GLuint)
function glVertexP4uiv:void(type:GLenum,value:GLuint ptr)
function glTexCoordP1ui:void(type:GLenum,coords:GLuint)
function glTexCoordP1uiv:void(type:GLenum,coords:GLuint ptr)
function glTexCoordP2ui:void(type:GLenum,coords:GLuint)
function glTexCoordP2uiv:void(type:GLenum,coords:GLuint ptr)
function glTexCoordP3ui:void(type:GLenum,coords:GLuint)
function glTexCoordP3uiv:void(type:GLenum,coords:GLuint ptr)
function glTexCoordP4ui:void(type:GLenum,coords:GLuint)
function glTexCoordP4uiv:void(type:GLenum,coords:GLuint ptr)
function glMultiTexCoordP1ui:void(texture:GLenum,type:GLenum,coords:GLuint)
function glMultiTexCoordP1uiv:void(texture:GLenum,type:GLenum,coords:GLuint ptr)
function glMultiTexCoordP2ui:void(texture:GLenum,type:GLenum,coords:GLuint)
function glMultiTexCoordP2uiv:void(texture:GLenum,type:GLenum,coords:GLuint ptr)
function glMultiTexCoordP3ui:void(texture:GLenum,type:GLenum,coords:GLuint)
function glMultiTexCoordP3uiv:void(texture:GLenum,type:GLenum,coords:GLuint ptr)
function glMultiTexCoordP4ui:void(texture:GLenum,type:GLenum,coords:GLuint)
function glMultiTexCoordP4uiv:void(texture:GLenum,type:GLenum,coords:GLuint ptr)
function glNormalP3ui:void(type:GLenum,coords:GLuint)
function glNormalP3uiv:void(type:GLenum,coords:GLuint ptr)
function glColorP3ui:void(type:GLenum,color:GLuint)
function glColorP3uiv:void(type:GLenum,color:GLuint ptr)
function glColorP4ui:void(type:GLenum,color:GLuint)
function glColorP4uiv:void(type:GLenum,color:GLuint ptr)
function glSecondaryColorP3ui:void(type:GLenum,color:GLuint)
function glSecondaryColorP3uiv:void(type:GLenum,color:GLuint ptr)

#end // __TARGET__<>"raspbian"
