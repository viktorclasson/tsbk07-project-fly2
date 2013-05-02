#ifndef CAMERA
#define CAMERA

#ifdef __APPLE__
	#include <OpenGL/gl3.h>
#else
	#include <GL/gl.h>
#endif

#include "utils/VectorUtils2.h"

void Camera_Init(GLuint firstPersonView, Point3D* forward, Point3D* up, Point3D* position, 
		 GLfloat velocity, Point3D* camera_position, Point3D* camera_look, GLfloat* camMatrix);
void Camera_Update(GLuint firstPersonView, Point3D* forward, Point3D* up, Point3D* position, 
		 GLfloat velocity, Point3D* camera_position, Point3D* camera_look, GLfloat* camMatrix);

#endif