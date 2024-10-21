#ifndef SHADER_HPP
#define SHADER_HPP

#ifdef USE_GLAD
// Include GLAD
#include <glad/glad.h>
#elif USE_GLEW
// Include GLEW
#include <GL/glew.h>
//#elif USE_GLANGLE
//#include <gles_loader_autogen.h>
#endif

GLuint LoadShaders(const char * vertex_file_path,const char * fragment_file_path);

#endif
