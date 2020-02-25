//
//  string1.h
//  dishierzhang
//
//  Created by mingyue on 16/1/4.
//  Copyright © 2016年 G. All rights reserved.
//

#include <iostream>
using std::ostream;
using std::istream;

#ifndef string1_h
#define string1_h

class String{
private:
    char * str;
    int len;
    static int num_strings;
    static const int CINLIM = 80;
    //enum {CINLIM = 80};
public:
    String(const char * s);
    String();
    String(const String &);
    ~String();
    int length()const{return len;}
    String & operator = (const String &);
    String & operator = (const char *);
    char & operator[](int i);
    const char & operator[](int i)const;
    friend bool operator<(const String &st, const String &st2);
    friend bool operator>(const String &st1, const String &st2);
    friend bool operator==(const String &st, const String &st2);
    friend ostream & operator<<(ostream & os, const String & st);
    friend istream & operator>>(istream & is, String & st);
    static int HowMany();
};






#endif /* string1_h */
