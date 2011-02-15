/*
 *  Mushroom.h
 *  Movable
 *
 *  Created by Jeremy Sampson, Matt Oldfield, and Alex Martishius
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef __MUSHROOM_H__
#define __MUSHROOM_H__

//---------------------------------------------------------

#include "Movable.h"

//---------------------------------------------------------

class Mushroom: public Movable {
    
public:
    // constructor
    Mushroom();
    // destructor
    ~Mushroom();
    
    // instance vars
    
    
    // methods
    
    // openGL draw method
    virtual void draw()=0;
    
};

//---------------------------------------------------------

#endif // _MUSHROOM_H
