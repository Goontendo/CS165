/*************************************************************
 * File: flyingObject.h
 * Author: Br. Burton
 *
 * Description: Defines a flying objects.
 *
 * Please DO NOT share this code with other students from
 *  other sections or other semesters. They may not receive
 *  the same code that you are receiving.
 *************************************************************/

#ifndef flyingObject_h
#define flyingObject_h


#include "point.h"
#include "velocity.h"

class FlyingObject : public Point 
{

private:

	bool alive;

	Velocity vel;
	
	float size;
	float spin;

	int HP;

	bool wrapable;

public:

	FlyingObject();
	~FlyingObject();

	void advance();

	void move(bool dir);

	bool isAlive() const {return alive;}
	void kill() {alive = 0;}
	void setAlive() {alive = 1;}

	void fire(Point point, float ang, float spd);

	virtual void draw() {}

	void rotate(float rot, bool dir);

	void setVelSpeed(float spd) {vel.setSpeed(spd);}

	Velocity getVel() const {return vel;}
	void setVel(Velocity v) {this->vel = v;}

	float getSize() const {return size;}
	void setSize(float s) {this->size = s;}

	float getSpin() const {return spin;}
	void setSpin(float s) {this->spin = s;}

	Point getPoint();
	void setPoint(Point p);

	bool isWrapable() const {return wrapable;}
	void setWrapable() {this->wrapable = 1;}
	void setUnwrapable() {this->wrapable = 0;}
	void wrap(Point tl, Point tr);

	int getHP() const {return HP;}
	void setHP(int l) {this->HP = l;}

};


#endif