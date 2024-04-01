/*************************************************************
 * File: bird.h
 * Author: Br. Burton
 *
 * Description: Defines a Rifle.
 *
 * Please DO NOT share this code with other students from
 *  other sections or other semesters. They may not receive
 *  the same code that you are receiving.
 *************************************************************/

#ifndef BIRD_H
#define BIRD_H

#include "flyingObject.h"
#include "uiDraw.h"

class Bird : public FlyingObject {
private:
	int hp;
	int Point;
	int id;
public:	
	Bird();
	virtual int hit() {};
	void setLife(int l) {this->hp = l;}
	int getLife() const {return hp;}
	void setPoint(int hP) {this->Point = hP;}
	int getPoint() const {return Point;}
	void setID(int i) {this->id = i;}
	int getID() const {return id;}
};

class standardBird : public Bird {
private:
public:
	standardBird();
	void draw();
	int hit() const {return getPoint();}
};


#endif
