/*************************************************************
 * File: flyingObject.cpp
 * Author: Br. Burton
 *
 * Description: Contains the function bodies for the flying 
 * Object class.
 *
 * Please DO NOT share this code with other students from
 *  other sections or other semesters. They may not receive
 *  the same code that you are receiving.
 *************************************************************/

#include "flyingObject.h"


/*********************************
 * GET POINT
 *
 *********************************/
Point FlyingObject :: getPoint()
{
   return point;
}

/*********************************
 * GET VELOCITY
 *
 *********************************/
Velocity FlyingObject :: getVelocity()
{
   return velocity;
}

/*********************************
 * IS ALIVE
 *
 *********************************/
bool FlyingObject :: isAlive()
{
   return alive;
}

/*********************************
 * SET POINT
 *
 *********************************/
void FlyingObject :: setPoint(Point point)
{
   this->point = point;
}

/*********************************
 * SET VELOCITY
 *
 *********************************/
void FlyingObject :: setVelocity(Velocity velocity)
{
   this->velocity = velocity;
}

/*********************************
 * SET ALIVE
 *
 *********************************/
void FlyingObject :: setAlive(bool alive)
{
   this->alive = alive;
}

/*********************************
 * KILL
 *
 *********************************/
void FlyingObject :: kill()
{ 
   alive = false;
}

void FlyingObject :: advance()
{
   point.addX(velocity.getDx());
   point.addY(velocity.getDy());
}