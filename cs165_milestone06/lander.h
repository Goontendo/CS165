//
//  lander.h
//  myMoonLander
//
//  Created by Scott Burton on 10/22/15.
//  Copyright © 2015 Scott Burton. All rights reserved.
//

#ifndef lander_h
#define lander_h

#include "point.h"
#include "velocity.h"
#include "uiDraw.h"

class Lander
{
private:
   Point point;
   Velocity velocity;
   bool alive;
   bool landed;
   int fuel;
   int gravity;

public:
   //Constructor
   Lander()
   {
      setAlive(true);
      setLanded(false);
      velocity.setDx(0);
      velocity.setDy(0);
   }

   //Getters
   Point getPoint() const { return point; }
   Velocity getVelocity() const { return velocity; }
   int getFuel() const { return fuel; }

   //Setters
   void setPoint(Point point) { this -> point = point; }
   void setVelocity(Velocity velocity) { this -> velocity = velocity; }
   void setFuel(int fuel) { this -> fuel = fuel; }
   void setAlive(bool alive) { this -> alive = alive; }
   void setLanded(bool landed) { this -> landed = landed; }

   void draw() const;
   bool isAlive();
   bool isLanded();
   void applyGravity(int gravity);
   void applyThrustLeft();
   void applyThrustRight();
   void applyThrustBottom();
   void advance();
   bool canThrust();

};

#endif /* lander_h */
