/*************************************************************
 * File: bullet.cpp
 * Author: Jared Thomasson
 *
 * Description: Contains the function bodies for the bullet 
 * class.
 *
 * Please DO NOT share this code with other students from
 *  other sections or other semesters. They may not receive
 *  the same code that you are receiving.
 *************************************************************/

#include "bullet.h"
#include <cmath> //for fire(int angle) cos and sin


/*********************************
 * BULLET
 *   default constructor
 *********************************/
Bullet :: Bullet()
{
   setAlive(true);
}

/*********************************
 * KILL
 *   Makes the bird dissapear
 *********************************/
void Bullet :: kill()
{
   setAlive(false);
}

/*********************************
 * DRAW
 *   Draws the bullet
 *********************************/
void Bullet :: draw()
{
   drawDot(getPoint());
}

/*********************************
 * FIRE
 *   fires the bullet
 *********************************/
void Bullet :: fire(Point riflePoint, float angle)
{
   setPoint(riflePoint);
    
   Velocity velocity;
    
   velocity.setDx(cos((float)(180 - angle) * M_PI/180) * BULLET_SPEED);
   velocity.setDy(sin((float)(180 - angle) * M_PI/180) * BULLET_SPEED);
     
   setVelocity(velocity);
}