//
//  main.cpp
//  Noughts and Crosses
//
//  Created by Adrian Brink on 11/03/2013.
//  Copyright (c) 2013 Adrian Brink. All rights reserved.
//

#include "Map.h"
#include "Game.h"

#include <stdio.h>
#include <curses.h>


int main()
{
    
    Map m;
    m.start();
    getch();
    m.end();
    getch();
    
    return 0;
}