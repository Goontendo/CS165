/*********************************************************************
 * File: game.cpp
 * Description: Contains the implementaiton of the game class
 *  methods.
 *
 *********************************************************************/

#include "game.h"

// These are needed for the getClosestDistance function...
#include <limits>
#include <algorithm>

#include "point.h" 

using namespace std;

Game :: Game(Point tl, Point br) : topLeft(tl), bottomRight(br)
{ 
	initializeVariables();
	
	initializeRocks();
	
	ship = new Ship(Point());
}


void Game :: initializeRocks()
{
	int i = 0;
	while (i < 5)
	{
		Point p = Point(random(-200, 200), random(-200, 200));
		//cout << "Point " << i << " : " << p << endl;
		if ((p.getX() < -25 || p.getX() < 25) && (p.getY() < -25 || p.getY() > 25))
		{
			asteroids.push_back(new BigRock(p));
			i++;
		}
	}
}

void Game::initializeVariables()
{
	score = 0;
	lives = AMOUNT_OF_LIVES;
	newWave = false;
}

// You may find this function helpful...

/**********************************************************
 * Function: getClosestDistance
 * Description: Determine how close these two objects will
 *   get in between the frames.
 **********************************************************/

float Game :: getClosestDistance(const FlyingObject &obj1, const FlyingObject &obj2) const
{
   // find the maximum distance traveled
   float dMax = max(abs(obj1.getVelocity().getDx()), abs(obj1.getVelocity().getDy()));
   dMax = max(dMax, abs(obj2.getVelocity().getDx()));
   dMax = max(dMax, abs(obj2.getVelocity().getDy()));
   dMax = max(dMax, 0.1f); // when dx and dy are 0.0. Go through the loop once.
   
   float distMin = std::numeric_limits<float>::max();
   for (float i = 0.0; i <= dMax; i++)
   {
      Point point1(obj1.getPoint().getX() + (obj1.getVelocity().getDx() * i / dMax),
                     obj1.getPoint().getY() + (obj1.getVelocity().getDy() * i / dMax));
      Point point2(obj2.getPoint().getX() + (obj2.getVelocity().getDx() * i / dMax),
                     obj2.getPoint().getY() + (obj2.getVelocity().getDy() * i / dMax));
      
      float xDiff = point1.getX() - point2.getX();
      float yDiff = point1.getY() - point2.getY();
      
      float distSquared = (xDiff * xDiff) +(yDiff * yDiff);
      
      distMin = min(distMin, distSquared);
   }
   
   return sqrt(distMin);
}

void Game::advance()
{
	advanceAsteroids();
	advanceBullets();
	advanceShip();

	cleanUpZombies();
}

void Game::advanceBullets()
{
	for (vector<Bullet*> ::iterator it = bullets.begin(); it != bullets.end(); it++)
	{
		(*it)->advance();
	}
}

void Game::advanceAsteroids()
{
	for (vector<Rock*> ::iterator it = asteroids.begin(); it != asteroids.end(); it++)
	{
		(*it)->advance();
	}
}


/*void Game::advanceShip()
{
	
}*/

//Clean Up Zombies
/*void Game::cleanUpZombies()
{

}*/

//Clean Up Ship
/*void Game::cleanUpShip()
{
	
}*/


//Clean Up Bullets
/*void Game::cleanUpBullets(bool deleteAll)
{
  
}*/

//Clean Up rocks
/*void Game::cleanUpRocks(bool deleteAll)
{
	
}*/

/*void Game::handleCollisions()
{

}*/

// Bullet Collisions
/*void Game::handleBulletCollisions()
{
	
}*/

// ship collisions
/*void Game::handleShipCollisions()
{
	
}*/

/*void Game::handleInput(const Interface & ui)
{
	
}*/

void Game::draw(const Interface & ui)
{
	drawAsteroids();
	//drawShip();
	//drawBullets();
	//drawScore();
	//drawLives();


}

/*void Game::drawBullets()
{
	
}*/


void Game::drawAsteroids()
{
	for (vector<Rock*> ::iterator it = asteroids.begin(); it != asteroids.end(); it++)
	{
		(*it)->draw();
	}
}

/*void Game::drawShip()
{

}*/

/*void Game::drawScore()
{
	
}/*

/*void Game::drawLives()
{
	
}*/

/*void Game::reset()
{
	
}
*/