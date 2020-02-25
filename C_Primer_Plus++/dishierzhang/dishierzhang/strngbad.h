//
//  strngbad.h
//  dishierzhang
//
//  Created by mingyue on 16/1/4.
//  Copyright © 2016年 G. All rights reserved.
//

#ifndef strngbad_h
#define strngbad_h
#include <iostream>

class Strngbad{
private:
    char * str;
    int len;
    static int num_strings;
public:
    Strngbad(const char * s);
    Strngbad();
    ~Strngbad();
    friend std::ostream & operator<<(std::ostream & os, const Strngbad & st);

};




#endif /* strngbad_h */
