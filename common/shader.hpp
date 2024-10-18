#ifndef SHADER_HPP
#define SHADER_HPP

#ifdef USE_GLAD
// Include GLAD
#include <glad/glad.h>
#else
// Include GLEW
#include <GL/glew.h>
#endif

GLuint LoadShaders(const char * vertex_file_path,const char * fragment_file_path);

#endif
