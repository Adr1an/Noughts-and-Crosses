//  Map.cpp
//  Noughts and Crosses
//
//  Created by Adrian Brink on 09/04/2013.
//  Copyright (c) 2013 Adrian Brink. All rights reserved.
//

#include "Map.h"

Map::Map(void) : mtab(new char*[3])
{
    for(int i=0;i<3;++i) mtab[i] = new char;
    
    for(int i=0;i<3;++i)
    {
        for(int j=0;j<3;j++)
        {mtab[i][j] = ' ';}
    }
}

Map::~Map(void)
{
    for(int i=0;i<3;++i) delete [] mtab[i];
    delete mtab;
}

void Map::start()
{
    
    std::cout<<"\tNoughts and Crosses \n\n";
    std::cout<<"\tLet's start \n\n";
    std::cout<<"First player X moves, then player O \n";
    
}

void Map::show(Game const&) {}
void Map::reset() {}

void Map::end()
{
    
    std::cout<<"\nThe End\n";
    
}
