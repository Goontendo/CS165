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


void Lander :: draw() const
{
   drawLander(getPoint());
}

bool Lander :: isAlive()
{return true;}
bool Lander :: isLanded()
{return true;}   
void Lander :: applyGravity(int gravity)
{}
void Lander :: applyThrustLeft()
{}
void Lander :: applyThrustRight()
{}
void Lander :: applyThrustBottom()
{}
void Lander :: advance()
{}
bool Lander :: canThrust()
{return true;}