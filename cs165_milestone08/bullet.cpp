/*************************************************************
 * File: bullet.cpp
 * Author: Br. Burton
 *
 * Description: Contains the function bodies for the bullet 
 * class.
 *
 * Please DO NOT share this code with other students from
 *  other sections or other semesters. They may not receive
 *  the same code that you are receiving.
 *************************************************************/

#include "bullet.h"

// Put your bullet methods here

Bullet :: Bullet() 
{
	setVelSpeed(BULLET_SPEED);
	setWrapable();
	setLives(60);
}

Bullet :: ~Bullet() {}

void Bullet :: draw() 
{

	drawDot(getPoint());

}
