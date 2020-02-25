//
//  tabten1.cpp
//  dishisanzhang
//
//  Created by mingyue on 16/1/10.
//  Copyright © 2016年 G. All rights reserved.
//

#include "tabten1.h"
#include <iostream>
#include <cstring>

TableTennisPlayer::TableTennisPlayer(const char * fn, const char * ln, bool ht){
    std::strncpy(firstname, fn, LIM - 1);
    firstname[LIM - 1] = '\0';
    std::strncpy(lastname, ln, LIM - 1);
    lastname[LIM - 1] = '\0';
    hasTable = ht;
}

void TableTennisPlayer::Name()const{
    std::cout << lastname << ", " << firstname;
}

RatedPlayer::RatedPlayer(unsigned int r, const char * fn, const char * ln, bool ht):TableTennisPlayer(fn, ln, ht){
    rating = r;
}

RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPlayer & tp):TableTennisPlayer(tp), rating(r){

}
