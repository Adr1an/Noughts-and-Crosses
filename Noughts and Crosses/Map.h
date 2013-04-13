//  Map.h
//  Noughts and Crosses
//
//  Created by Adrian Brink on 09/04/2013.
//  Copyright (c) 2013 Adrian Brink. All rights reserved.
//

#ifndef __Noughts_and_Crosses__Map__
#define __Noughts_and_Crosses__Map__

#include <iostream>
#include "Game.h"

class Map
{
private:
    char** mtab;
public:
    Map(void);
    ~Map(void);
    
    void show(Game const&);
    void reset();
    void start();
    void end();
    
    
};

#endif /* defined(__Noughts_and_Crosses__Map__) */
