//  Game.cpp
//  Noughts and Crosses
//
//  Created by Adrian Brink on 09/04/2013.
//  Copyright (c) 2013 Adrian Brink. All rights reserved.
//

#include "Game.h"

Game::Game(void) : tab(new int*[3]),
draw(0), end(false), who_move('x')
{
    for(int i=0;i<3;++i) tab[i] = new int;
    
    for(int i=0;i<3;++i)
    {
        for(int j=0;j<3;++j)
        {tab[i][j] = 0;}
    }
}

void Game::move()
{
    if ((tab[0][0] == 1 ) && (tab[0][1] == 1 ) && (tab[0][2] == 1)) end = true;
    if ((tab[1][0] == 1 ) && (tab[1][1] == 1 ) && (tab[1][2] == 1)) end = true;
    if ((tab[2][0] == 1 ) && (tab[2][1] == 1 ) && (tab[2][2] == 1)) end = true;
    if ((tab[0][0] == 1 ) && (tab[1][0] == 1 ) && (tab[2][0] == 1)) end = true;
    if ((tab[0][1] == 1 ) && (tab[1][1] == 1 ) && (tab[2][1] == 1)) end = true;
    if ((tab[0][2] == 1 ) && (tab[1][2] == 1 ) && (tab[2][2] == 1)) end = true;
    if ((tab[0][0] == 1 ) && (tab[1][1] == 1 ) && (tab[2][2] == 1)) end = true;
    if ((tab[0][2] == 1 ) && (tab[1][1] == 1 ) && (tab[2][0] == 1)) end = true;
    
    if ((tab[0][0] == 2 ) && (tab[0][1] == 2 ) && (tab[0][2] == 2)) end = true;
    if ((tab[1][0] == 2 ) && (tab[1][1] == 2 ) && (tab[1][2] == 2)) end = true;
    if ((tab[2][0] == 2 ) && (tab[2][1] == 2 ) && (tab[2][2] == 2)) end = true;
    if ((tab[0][0] == 2 ) && (tab[1][0] == 2 ) && (tab[2][0] == 2)) end = true;
    if ((tab[0][1] == 2 ) && (tab[1][1] == 2 ) && (tab[2][1] == 2)) end = true;
    if ((tab[0][2] == 2 ) && (tab[1][2] == 2 ) && (tab[2][2] == 2)) end = true;
    if ((tab[0][0] == 2 ) && (tab[1][1] == 2 ) && (tab[1][2] == 2)) end = true;
    if ((tab[0][2] == 2 ) && (tab[1][1] == 2 ) && (tab[2][0] == 2)) end = true;
}

void Game::algorithm() {}

Game::~Game(void)
{
    for(int i=0; i<3; ++i) delete[] tab [i];
    delete[] tab;
}
