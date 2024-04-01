/*************************************************************
 * File: Velocity.h
 * Author: Br. Burton
 *
 * Description: Defines Velocity for project.
 *
 * Please DO NOT share this code with other students from
 *  other sections or other semesters. They may not receive
 *  the same code that you are receiving.
 *************************************************************/

#ifndef velocity_h
#define velocity_h

#include "point.h"

class Velocity
{
private:
   float dx;
   float dy;
   
public:
   Velocity()
   {
      dx = 0.0;
      dy = 0.0;
   }
   
   Velocity(float dx, float dy)
   {
      this->dx = dx;
      this->dy = dy;
   }
   
   float getDx() const { return dx; }
   float getDy() const { return dy; }
   
   void setDx(float dx) { this->dx = dx; }
   void setDy(float dy) { this->dy = dy; }
   
   void add(const Velocity & other);

   void advancePoint(Point & point);
   
};

#endif /* velocity_h */
