#include "flyingObject.h"

#include <iostream>


// Put your FlyingObject method bodies here

void FlyingObject::advance()
{
	Point p = this->getPoint();

	p.addX(getVelocity().getDx());
	p.addY(getVelocity().getDy());

	if (p.getX() > 200)
		p.setX(-200);
	else if (p.getX() < -200)
		p.setX(200);

	if (p.getY() > 200)
		p.setY(-200);
	else if (p.getY() < -200)
		p.setY(200);

	this->setPoint(p);
	draw();
}

const float Angle::pi = 3.14159265358979323846;

float Angle::getRadians()
{
	return angle * (this->pi / 180);;
}

void Angle::setAngle(float angle) 
{

	int newAngle = angle;

	if (newAngle >= 360)
		newAngle = newAngle - 360;
	else if (newAngle < 0)
		newAngle = 360 + newAngle;

	this->angle = newAngle;

	float radians = getRadians();

	this->xDir = cos(radians);
	this->yDir = sin(radians);
}