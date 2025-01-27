/*************************************************************
 * File: bird.cpp
 * Author: Jared Thomasson
 *
 * Description: Contains the function bodies for the rifle class.
 *
 * Please DO NOT share this code with other students from
 *  other sections or other semesters. They may not receive
 *  the same code that you are receiving.
 *************************************************************/

#include "bird.h"




/********************************************
 * BIRD
 *  default constructor
 ********************************************/
Bird :: Bird()
{
   int dx = random(1, 5);
   int dy = random(3, 5);
   int x = -200;
   int y = random(-200, 200);
    
   if (y >= 0)
   {
      Velocity velocity(dx,-dy);
      setVelocity(velocity);
   }
    
   if (y < 0)
   {
	    Velocity velocity(dx,dy);
        setVelocity(velocity);
   }
   Point point(x,y);
   setPoint(point);
   setAlive(true);
}

/*********************************
 * BIRD
 *   default constructor
 *********************************/
Bird :: Bird(Point point)
{
    
}

/*********************************
 * DRAW
 *   draws the standard bird
 *********************************/
void Bird :: draw()
{
   drawCircle(getPoint(), 15);
}

int Bird :: hit()
{
	kill();
   return 1;
}

/********************************************
 * TOUGH BIRD
 *    this bird has 3 life points
 ********************************************/
ToughBird :: ToughBird() : Bird()
{
   int dx = random(1, 3);
   int dy = random(1, 2);
   int x = -200;
   int y = random(-200, 200);
    
   if (y >= 0)
   {
   	Velocity velocity(dx,-dy);
      setVelocity(velocity);
   }
    
   if (y < 0)
   {
      Velocity velocity(dx,dy);
      setVelocity(velocity);
   }
    
   Point point(x,y);
   setPoint(point);
   setAlive(true);
   hp = 3;
}

/*********************************
 * DRAW
 *   draw the tough bird
 *********************************/
void ToughBird :: draw()
{
   drawToughBird(getPoint(), 15, hp);
}

/*********************************
 * HIT
 *   gives you a point per hit on
 *   the bird. 2 bonus if the bird dies
 *   kills the bird
 *********************************/
int ToughBird :: hit()
{
    
    switch (hp)
    {
        case 3:
            hp = 2;
            return 1;
            break;
        case 2:
            hp = 1;
            return 1;
            break;
        case 1:
            hp = 0;
            kill();
            return 3;
            break;

    }
    
    return 0;
}


/********************************************
 * SACRED BIRD
 *  if you hit this bird, you loose 10 points
 ********************************************/
SacredBird :: SacredBird() : Bird()
{
    int dx = random(1, 5);
    int dy = random(3, 5);
    int x = -200;
    int y = random(-200, 200);
    Point point(x,y);
    setPoint(point);
    setAlive(true);
    
    if (y >= 0)
    {
        Velocity velocity(dx,-dy);
        setVelocity(velocity);
    }
    
    if (y < 0)
    {
        Velocity velocity(dx,dy);
        setVelocity(velocity);
    }
    
}

/*********************************
 * DRAW
 *   draws the sacred bird
 *********************************/
void SacredBird :: draw()
{
    drawSacredBird(getPoint(), 15);
}

/*********************************
 * HIT
 *   takes 10 points if you hit the bird
 *   kills the bird
 *********************************/
int SacredBird :: hit()
{
    kill();
    return -10;
    
}