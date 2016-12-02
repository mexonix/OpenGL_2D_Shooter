#pragma once
#include <string>
#include <GL\glew.h>

namespace MexEngine
{
	class GLSLProgram
	{
	public:
		GLSLProgram();
		~GLSLProgram();

		void compileShaders(const std::string& vertexShaderFilePath, const std::string& fragmentShaderFilePath);

		void linkShaders();

		void addAttribute(const std::string& attributeName);

		GLint getUniformLocation(const std::string& uniformName);

		void use();
		void unuse();
	private:
		void compileShader(const std::string& filepath, GLuint& id);


		int m_numAttributes;

		GLuint m_programID;

		GLuint m_vertexShaderID;
		GLuint m_fragmentShaderID;
	};
}
