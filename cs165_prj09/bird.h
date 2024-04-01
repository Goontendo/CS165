/*************************************************************
 * File: bird.h
 * Author: Jared Thomasson
 *
 * Description: Defines types of birds.
 *
 * Please DO NOT share this code with other students from
 *  other sections or other semesters. They may not receive
 *  the same code that you are receiving.
 *************************************************************/

#ifndef bird_h
#define bird_h

#include <stdio.h>
#include "uiDraw.h"
#include "flyingObject.h"
#include "point.h"


/********************************************
* BIRD
*  Also the standard bird
********************************************/
class Bird : public FlyingObject
{
    
public:
   Bird();
   Bird(Point point);
   
   virtual void draw();
   virtual int hit();
    
private:
   Point point;
   Velocity velocity;
    
    
};

/********************************************
* TOUGH BIRD
*
********************************************/
class ToughBird : public Bird {
    
public:
   ToughBird();
   virtual void draw();
   int hit();
    
private:
   int hp;
   Point point;
   Velocity velocity;
    
    
};

/********************************************
 * SACRED BIRD
 *  Also the standard bird
 ********************************************/
class SacredBird : public Bird {
    
public:
   SacredBird();
   SacredBird(Point point);
   virtual void draw();
   int hit();
    
private:
   int hp;
   Point point;
   Velocity velocity;
    
};



#endif