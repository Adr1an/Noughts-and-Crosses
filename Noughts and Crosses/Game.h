//  Game.h
//  Noughts and Crosses
//
//  Created by Adrian Brink on 09/04/2013.
//  Copyright (c) 2013 Adrian Brink. All rights reserved.
//

#ifndef __Noughts_and_Crosses__Game__
#define __Noughts_and_Crosses__Game__

#include <iostream>

class Game
{
private:
    int** tab;
    char who_move;
    int draw;
    bool end;
public:
    Game(void);
    ~Game(void);
    void move();
    void algorithm();
    bool is_end() const {return end;}
};

#endif /* defined(__Noughts_and_Crosses__Game__) */
