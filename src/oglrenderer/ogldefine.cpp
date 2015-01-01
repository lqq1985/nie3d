#include "core/core.h"
#include "ogl.h"
#include "ogldefine.h"

GLenum g_BlendFunc[cBlendFuncTypeCount] =
{
	GL_FUNC_ADD,
	GL_FUNC_SUBTRACT,
	GL_FUNC_REVERSE_SUBTRACT,
#if PLATFORM != PLATFORM_IOS && PLATFORM != PLATFORM_ANDROID
	GL_MIN,
	GL_MAX
#else
#endif         
};

GLenum g_CMPFunc[cCmpFuncCount] =
{
	GL_NEVER,
	GL_LESS,
	GL_EQUAL,
	GL_LEQUAL,
	GL_GREATER,
	GL_NOTEQUAL,
	GL_GEQUAL,
	GL_ALWAYS
};

GLenum g_BlendFactor[cBlendFactorCount] = 
{
	GL_ZERO,
	GL_ONE,
	GL_SRC_COLOR,
	GL_ONE_MINUS_SRC_COLOR,
	GL_SRC_ALPHA,
	GL_ONE_MINUS_SRC_ALPHA,
	GL_DST_ALPHA,
	GL_ONE_MINUS_DST_ALPHA,
	GL_DST_COLOR,
	GL_ONE_MINUS_DST_COLOR,
	GL_SRC_ALPHA_SATURATE,
#if PLATFORM != PLATFORM_IOS && PLATFORM != PLATFORM_ANDROID    
	GL_SRC1_ALPHA,
	GL_SRC1_ALPHA,
#else
	GL_SRC_ALPHA,
	GL_SRC_ALPHA,
#endif         
	GL_CONSTANT_COLOR,
	GL_ONE_MINUS_CONSTANT_COLOR,
	GL_CONSTANT_COLOR,
	GL_CONSTANT_COLOR,

};

#if PLATFORM != PLATFORM_IOS && PLATFORM != PLATFORM_ANDROID
GLenum g_Fillmode[cFillModeCount] = 
{
	GL_POINT,
	GL_LINE,
	GL_FILL
};
#endif

GLenum g_AccessFlag[cLockFlagCount] = 
{
	GLREADONLY,
	GLWRITEONLY,
	GLREADWRITE	
};

GLenum g_PrimTopology[cPrimitiveTypeCount] = 
{
	GL_POINTS,
	GL_LINES,
	GL_LINE_STRIP,
	GL_TRIANGLES,
	GL_TRIANGLE_STRIP,
	GL_TRIANGLE_FAN
};


#if PLATFORM == PLATFORM_IOS || PLATFORM == PLATFORM_ANDROID
GLint g_FallbackPath[cPixelFormatCount][8] =
{
	{ GL_NONE },   //GL_NONE
	{ GL_RGB5_A1 },
	{ GL_RGB5_A1 },
	{ GL_RGBA4 },
	{ GL_RGB },   //GL_RGB8
	{ GL_RGBA },   //GL_RGBA8
	{ GL_NONE },   //GL_NONE
	{ GL_NONE },   //GL_NONE
	{ GL_NONE },   //GL_NONE
	{ GL_NONE },   //GL_NONE
	{ GL_ALPHA },
	{ GL_NONE },
	{ GL_NONE },
	{ GL_NONE },
	{ GL_NONE },
	{ GL_NONE },
	{ GL_NONE },
	{ GL_NONE },
	{ GL_NONE },
	{ GL_NONE },

	{ GL_NONE},
	{ GL_NONE },
#if PLATFORM == PLATFORM_ANDROID
	{ GL_COMPRESSED_RGB_S3TC_DXT1_EXT },   //GL_COMPRESSED_RGB_S3TC_DXT1_EXT
#else
    { GL_NONE },
#endif
	{ GL_NONE },   //GL_COMPRESSED_RGBA_S3TC_DXT3_EXT
	{ GL_NONE },   //GL_COMPRESSED_RGBA_S3TC_DXT5_EXT

	{ GL_DEPTH_COMPONENT16 },
	{ GL_NONE },
	{ GL_NONE },
	{ GL_NONE },
	{ GL_NONE},
	{ GL_NONE },
	{ GL_DEPTH_COMPONENT16 },
	{ GL_NONE },
	{ GL_NONE},
	{ GL_NONE },
	{ GL_NONE},
	{ GL_NONE },
	{ GL_NONE}
};
#else
GLint g_FallbackPath[cPixelFormatCount][8] =
{
	{ GL_NONE },   //GL_NONE
	{ GL_RGB5_A1 },
	{ GL_RGB5_A1 },
	{ GL_RGBA4 },
	{ GL_RGB8 },   //GL_RGB8
	{ GL_RGBA8 },   //GL_RGBA8
	{ GL_NONE },   //GL_NONE
	{ GL_ALPHA },
	{ GL_RGB10_A2 },
	{ GL_R16F },
	{ GL_R16UI },
	{ GL_R32F },
	{ GL_R32UI },
	{ GL_RG32F },
	{ GL_RG32UI },
	{ GL_RG16F },
	{ GL_RG16UI },

	{ GL_RGB32F},
	{ GL_RGBA32F },
	{ GL_COMPRESSED_RGB_S3TC_DXT1_EXT },  
	{ GL_COMPRESSED_RGBA_S3TC_DXT3_EXT },
	{ GL_COMPRESSED_RGBA_S3TC_DXT5_EXT },

	{ GL_DEPTH_COMPONENT16 },
	{ GL_DEPTH_COMPONENT },
	{ GL_DEPTH24_STENCIL8 },
	{ GL_DEPTH24_STENCIL8 },
	{ GL_DEPTH_COMPONENT },
	{ GL_DEPTH24_STENCIL8 },
	{ GL_DEPTH_COMPONENT16 },
	{ GL_DEPTH_COMPONENT32F },
	{ GL_DEPTH24_STENCIL8},
	{ GL_RGBA16F },
	{ GL_LUMINANCE8},
	{ GL_RGBA16 },
	{ GL_UNSIGNED_INT_24_8},
	{ GL_NONE},
	{ GL_NONE}	
};
#endif

GLenum g_Usage[cUsageTypeCount] = 
{
	GL_DYNAMIC_DRAW,
	GL_STATIC_DRAW,
};


