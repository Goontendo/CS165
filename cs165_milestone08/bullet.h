/*************************************************************
 * File: rifle.h
 * Author: Br. Burton
 *
 * Description: Defines a bullet.
 *
 * Please DO NOT share this code with other students from
 *  other sections or other semesters. They may not receive
 *  the same code that you are receiving.
 *************************************************************/

#ifndef bullet_h
#define bullet_h

#define BULLET_SPEED 5
#define BULLET_LIFE 4000

#include "flyingObject.h"
#include "uiDraw.h"

// Put your Bullet class here

class Bullet : public FlyingObject 
{

private:

public:

	Bullet();
	~Bullet();

	void draw();

};

#endif
