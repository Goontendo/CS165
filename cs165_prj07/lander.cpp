//
//  Lander.cpp
//  myMoonLander
//
//  Created by Scott Burton on 10/22/15.
//  Copyright © 2015 Scott Burton. All rights reserved.
//

#include "velocity.h"
#include "point.h"
#include "uiDraw.h"
#include "lander.h"
#include "game.h"


void Lander :: draw() const
{
   drawLander(getPoint());
}

bool Lander :: isAlive()
{  
   return alive;
}
bool Lander :: isLanded()
{   
   return landed;
}   
void Lander :: applyGravity(float gravity)
{
   velocity.setDy(velocity.getDy() - gravity);
   //velocity.IncrementDY(-gravity);
}
void Lander :: applyThrustLeft()
{
   if (!canThrust()) return;
   if (fuel < SideFuel) return;
   velocity.setDx(velocity.getDx() + SideThrust);
   fuel -= SideFuel;
}
void Lander :: applyThrustRight()
{
   if (!canThrust()) return;
   if (fuel < SideFuel) return;
   velocity.setDx(velocity.getDx() - SideThrust);
   fuel -= SideFuel;
}
void Lander :: applyThrustBottom()
{
   if (!canThrust()) return;
   if (fuel < UpFuel) return;
   velocity.setDy(velocity.getDy() + UpThrust);
   fuel -= UpFuel;
}
void Lander :: applyThrustTop()
{
   if (!canThrust()) return;
   if (fuel < UpFuel) return;
   velocity.setDy(velocity.getDy() - UpThrust);
   fuel -= UpFuel;
}
void Lander :: advance()
{
   point.addX(velocity.getDx());
   point.addY(velocity.getDy());
}
bool Lander :: canThrust()
{  return isAlive() && !isLanded(); }