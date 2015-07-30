#ifndef __UWB_IPS_H__
#define __UWB_IPS_H__

#include <windows.h>		// Header File For Windows
#include <gl\gl.h>			// Header File For The OpenGL32 Library
#include <gl\glu.h>			// Header File For The GLu32 Library
//#include <gl\glaux.h>		// Header File For The Glaux Library

#ifndef GET_X_LPARAM
#define GET_X_LPARAM(lParam)	((int)(short)LOWORD(lParam))
#endif
#ifndef GET_Y_LPARAM
#define GET_Y_LPARAM(lParam)	((int)(short)HIWORD(lParam))
#endif

class Anchor {

private:
	float pos_x;
	float pos_y;
	float pos_z;

	GLUquadricObj* quadricObj;
	~Anchor();

public:
	Anchor();


	//getter
	GLUquadricObj* getQuadricObj();
	float getPos_x();
	float getPos_y();
	float getPos_z();
};

#endif