/*************************************************************
 * File: bullet.h
 * Author: Jared Thomasson
 *
 * Description: Defines a bullet.
 *
 * Please DO NOT share this code with other students from
 *  other sections or other semesters. They may not receive
 *  the same code that you are receiving.
 *************************************************************/

#define BULLET_SPEED 10.0

#ifndef bullet_h
#define bullet_h

#include <stdio.h>
#include "flyingObject.h"
#include "uiDraw.h"
#include "rifle.h"
#include <cmath> // used for sin, cos, and M_PI


class Bullet : public FlyingObject
{

public:
   Bullet();
   void kill();
   void draw();
   void fire(Point, float);
    
};


#endif