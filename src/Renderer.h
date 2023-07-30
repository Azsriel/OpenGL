#pragma once

#include <GL/glew.h>

#include "VertexArray.h"
#include "IndexBuffer.h"
#include "Shader.h"

#define ASSERT(x) if (!(x)) __debugbreak(); 

#ifdef _DEBUG 
#define GLCALL(x) GLClearError(); x; ASSERT(GLLogCall())
#else
#define GLCALL(x) x
#endif


void GLClearError();
bool GLLogCall();

class Renderer
{
public:
	void Clear() const; 
	void Draw(const VertexArray& va, const IndexBuffer& ib, const Shader& shader) const;
};
