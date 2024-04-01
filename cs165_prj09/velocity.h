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


class Velocity
{
    public:
        Velocity();
        Velocity(float dx, float dy);
    
        // mutators
        float getDx() const;
        float getDy() const;
        void setDx(float);
        void setDy(float);
    
    private:
        float dx;
        float dy;
    
};

#endif