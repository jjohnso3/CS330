/* 
 *  Mario.cpp
 *  Mario
 *
 *  Created by Andrew Peddicord on 2/1/11.
 *  Copyright 2011 Capital University. All rights reserved.
 *
 * filed edited by Drew and Nate
 */


#include "Mario.h"
//------------------------------------------------------------
//constructor for Mario Class
Mario::Mario()
{
    //init the private instance variables to default value
    state_ = 0;
    //will update to actaul height when figured out
    maxHeight_ = 0;
    isInvincible_ = false;
    isJumping_ = false;
    isRunning_ = false;
    
}
//------------------------------------------------------------
//updates Mario's info when a button is pushed
void Mario::updateKeyDown(unsigned char button)
{
    
}
//------------------------------------------------------------
//upadates Mario's info when a button is let up
void Mario::updateKeyUp(unsigned char button)
{
    
}
//------------------------------------------------------------
//method to calculate Marios Jump
void Mario::jump()
{
	int yCoor = this->getY();
	isJumping_ = true;
	if (yCoor < maxHeight_) {
		if (isRunning_) {
			this->setY(this->getY() + 5);
		}
		else {
			this->setY(this->getY() + 3);
		}
	}
	else if (yCoor >= maxHeight_) {
		this->setY(this->getY() - 4);
	}
}
//------------------------------------------------------------
//method to calculate Marios movement
void Mario::move(bool isRunning)
{
	//Check right barrier for screen movement?
	
	
	if (isRunning) {
		this->setX(this->getX() + 5);
	}
	else {
		this->setX(this->getX() + 3);
	}
}
//------------------------------------------------------------
//method that calculate the intersections of Mario and objects
//to see if Mario runs into anything
bool Mario::check(bool isRunning)
{
    return false;
}
//------------------------------------------------------------
//Creates a fireball
bool Mario::fireball()
{    
	return false;
}
