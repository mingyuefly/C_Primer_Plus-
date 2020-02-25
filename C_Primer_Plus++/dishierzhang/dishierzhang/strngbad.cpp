//
//  strngbad.cpp
//  dishierzhang
//
//  Created by mingyue on 16/1/4.
//  Copyright © 2016年 G. All rights reserved.
//

#include <cstring>
#include "strngbad.h"

using std::cout;

int Strngbad::num_strings = 0;

Strngbad::Strngbad(const char * s){
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    num_strings++;
    cout << num_strings << ": \"" << str << "\" object created\n";
}

Strngbad::Strngbad(){
    len = 4;
    str = new char[4];
    std::strcpy(str, "C++");
    num_strings++;
    cout << num_strings << ": \"" << str << "\" object created\n";
    
}

Strngbad::~Strngbad(){
    cout << "\"" << str << "\" object deleted, ";
    --num_strings;
    cout << num_strings << " left\n";
    delete [] str;
}

std::ostream & operator<<(std::ostream & os, const Strngbad & st){
    os << st.str;
    return os;
}
