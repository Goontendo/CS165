/*************************************************************
 * File: flyingObject.h
 * Author: Br. Burton
 *
 * Description: Defines a flying objects.
 *
 * Please DO NOT share this code with other students from
 *  other sections or other semesters. They may not receive
 *  the same code that you are receiving.
 *************************************************************/

#ifndef flyingObject_h
#define flyingObject_h

#include <stdio.h>
#include "velocity.h"
#include "point.h"

class FlyingObject 
{
    
    
public:
    Point getPoint();
    Velocity getVelocity();
    bool isAlive();
    
    void setPoint(Point);
    void setVelocity(Velocity velocity);
    void setAlive(bool);
    virtual void kill();
    void advance();
    virtual void draw() = 0;
    
private:
    Velocity velocity;
    Point point;
    bool alive = true;
    
};

#endif