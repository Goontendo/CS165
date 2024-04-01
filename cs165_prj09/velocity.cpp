/*************************************************************
 * File: Velocity.cpp
 * Author: Br. Burton
 *
 * Description: Contains the function bodies for the 
 * velocity class.
 *
 * Please DO NOT share this code with other students from
 *  other sections or other semesters. They may not receive
 *  the same code that you are receiving.
 *************************************************************/

  
#include <stdio.h>
#include "velocity.h"

Velocity :: Velocity()
{
    dx = 0;
    dy = 0;
}
Velocity :: Velocity(float dx, float dy)
{
    this->dx = dx;
    this->dy = dy;
}

float Velocity :: getDx() const
{
    return dx;
}
float Velocity :: getDy() const
{
    return dy;
}
void Velocity :: setDx(float dx)
{
    this->dx = dx;
}
void Velocity :: setDy(float dy)
{
    this->dy = dy;
}