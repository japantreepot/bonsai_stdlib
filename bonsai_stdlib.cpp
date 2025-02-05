
// NOTE(Jesse): These have to match defines in the header.glsl file
#define SCREEN_RATIO (1)
#define SCR_WIDTH (3840/SCREEN_RATIO)
#define SCR_HEIGHT (2160/SCREEN_RATIO)
// #define SCR_WIDTH (1920)
// #define SCR_HEIGHT (1080)


#define SHADER_PATH "shaders"

#include <bonsai_debug/debug.h>
#include <bonsai_debug/headers/api.h>

#include <bonsai_stdlib/cpp/memory_arena.cpp>
#include <bonsai_stdlib/cpp/vector.cpp>
#include <bonsai_stdlib/cpp/debug_print.cpp>  // TODO(Jesse, id: 91, tags: cleanup, metaprogramming, format_counted_string): Jettison this .. Can it be metaprogrammed?
#include <bonsai_stdlib/cpp/counted_string.cpp>
#include <bonsai_stdlib/cpp/platform.cpp>
#include <bonsai_stdlib/cpp/thread.cpp>
#include <bonsai_stdlib/cpp/string_builder.cpp>
#include <bonsai_stdlib/cpp/stream.cpp>
#include <bonsai_stdlib/cpp/bitmap.cpp>
#include <bonsai_stdlib/cpp/matrix.cpp>
#include <bonsai_stdlib/cpp/heap_memory.cpp>
#include <bonsai_stdlib/cpp/xml.cpp>
#include <bonsai_stdlib/cpp/file.cpp>
#include <bonsai_stdlib/cpp/filesystem.cpp>
#include <bonsai_stdlib/cpp/gl.cpp>
#include <bonsai_stdlib/cpp/interactable.cpp>
#include <bonsai_stdlib/cpp/texture.cpp>
#include <bonsai_stdlib/cpp/shader.cpp>
#include <bonsai_stdlib/cpp/2d.cpp>

