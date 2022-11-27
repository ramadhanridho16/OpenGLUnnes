#pragma once

#include <glad/glad.h>

class Mesh
{
public:
	Mesh();

	void CreateMesh(GLfloat* vertices, unsigned int* indices, GLfloat* colors, unsigned int numOfVertices, unsigned int numOfIndices, unsigned int numOfColors);
	void RenderMesh();
	void ClearMesh();

	~Mesh();

private:
	GLuint VAO, VBO, EBO, shader, uniformModel, colVBO;
	GLsizei indexCount;
};
