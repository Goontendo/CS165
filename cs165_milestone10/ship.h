#ifndef ship_h
#define ship_h

#define SHIP_SIZE 10

#define ROTATE_AMOUNT 6
#define THRUST_AMOUNT 0.5

#include "flyingObject.h"
#include "uiDraw.h"
#include "uiInteract.h"
#include "point.h"

// Put your Ship class here

class Ship : public FlyingObject
{
   private:
	void applyRotation(int rotation);
	Angle angle;
	int radius;
	//bool trusting;
	

   public:
	Ship(Point p) : FlyingObject(), angle(Angle(90)), radius(SHIP_SIZE) { this->setPoint(p); }

	int getRadius() { return radius; }
	Angle getAngle() { return angle; }
	int getRotation() { return angle.getAngle(); }
	
	
};

#endif /* ship_h */
