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
#include "ground.h"

#define UpThrust 0.8
#define UpFuel 3
#define SideThrust 0.1
#define SideFuel 1

class Lander
{
private:
   Point point;
   Point startpoint = new Point(150, 150);
   Velocity velocity;
   bool alive;
   bool landed;
   int fuel;
   float gravity;
   Ground * ground;

public:
   //Constructor
   Lander()
   {
      setAlive(true);
      setLanded(false);
      velocity.setDx(0);
      velocity.setDy(0);
      setPoint(startpoint);
   }

   //Getters
   Point getLander() const { return startpoint; }
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
   void applyGravity(float gravity);
   void applyThrustLeft();
   void applyThrustRight();
   void applyThrustBottom();
   void applyThrustTop();
   void advance();
   bool canThrust();

};

#endif /* lander_h */
