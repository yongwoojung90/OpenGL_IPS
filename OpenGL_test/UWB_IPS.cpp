#include "UWB_IPS.h"

Anchor::Anchor()
{
	quadricObj = gluNewQuadric();
	gluQuadricDrawStyle(quadricObj, GLU_FILL);
	gluQuadricNormals(quadricObj, GLU_SMOOTH);
	gluQuadricOrientation(quadricObj, GLU_OUTSIDE);
	gluQuadricTexture(quadricObj, GL_FALSE);
}
Anchor::~Anchor(){
	gluDeleteQuadric(quadricObj);
}
GLUquadricObj* Anchor::getQuadricObj()
{
	return quadricObj;
}