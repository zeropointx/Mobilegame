#pragma once
#include <android_native_app_glue.h>
#include "ObjectLoader.h"
#include "ResourceManager.h"
class Object3D
{
public:
	Object3D(android_app *application, const char *objectFileName, const char *imageFileName);
	~Object3D();
		std::vector<GLint> *getINDEX()
	{
		return object.getINDEX();
	}
	std::vector<GLfloat> *getFinalVertex()
	{
		return object.getFinalVertex();
	}
	GLuint getTextureID()
	{
	return _texture;
	}
private:
GLuint _texture;
const char *fileName;
android_app *application;
ObjectLoader object;
};

