#ifndef flyingObject_h
#define flyingObject_h

#include "point.h"
#include "velocity.h"
#include "uiDraw.h"

// Put your FlyingObject class here


class FlyingObject
{
protected:
	Point point;
	Velocity vel;
	bool alive;

public:
	FlyingObject() : point(Point()), vel(Velocity()), alive(true) {}

	Point getPoint() const { return this->point; }
	Velocity getVelocity() const { return this->vel; }
	bool isAlive() { return this->alive; }

	void setPoint(Point point) { this->point = point; }
	void setVelocity(Velocity velocity) { this->vel = velocity; }

	void kill() { alive = false; };
	void virtual advance();
	void virtual draw() { drawDot(this->getPoint()); };

};

class Angle
{
private:
	float angle;
	float xDir;
	float yDir;

public:
	Angle() : angle(0), xDir(0.0), yDir(0.0) {}
	Angle(float angle) { setAngle(angle); }

	const static float pi;

	float getAngle() { return angle; }
	float getXDir() { return xDir; }
	float getYDir() { return yDir; }
	float getRadians();

	void setAngle(float angle);

};


#endif /* flyingObject_h */
