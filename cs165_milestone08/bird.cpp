/*************************************************************
 * File: bird.cpp
 * Author: Br. Burton
 *
 * Description: Contains the function bodies for the rifle class.
 *
 * Please DO NOT share this code with other students from
 *  other sections or other semesters. They may not receive
 *  the same code that you are receiving.
 *************************************************************/

#include "bird.h"

Bird::Bird() {
}

standardBird::standardBird() {
	setVelSpeed(4);
	setLife(1);
	setHitPoint(1);
	setID(1);
}

void standardBird::draw() {
	drawCircle(getPoint(), 15);
}

