//
//  studenti.cpp
//  dishisizhang
//
//  Created by mingyue on 16/1/13.
//  Copyright © 2016年 G. All rights reserved.
//

#include "studenti.h"
using std::ostream;
using std::endl;
using std::istream;
using std::string;

double Student::Average()const{
    if (ArrayDb::size()) {
        return ArrayDb::sum() / ArrayDb::size();
    }else{
        return 0;
    }
}

const string & Student::Name() const{
    return (const string &) *this;
}

double & Student::operator[](int i){
    return ArrayDb::operator[](i);
}

std::__1::ostream & Student::arr_out(std::__1::ostream & os)const{
    int i;
    int lim = ArrayDb::size();
    if (lim > 0) {
        for (i = 0; i < lim; i++) {
            os << ArrayDb::operator[](i) << "  ";
            if (i % 5 == 4) {
                os << endl;
            }
            
        }
        if (i % 5 != 0) {
            os << endl;
        }
    }else{
        os << " empty array ";
    }
    
    return os;
}

istream & operator>>(istream & is, Student & stu){
    is >> (string &)stu;
    return is;
}

istream & getline(istream & is, Student & stu){
    getline(is, (string &)stu);
    return is;
}

ostream & operator<<(ostream & os, const Student & stu){
    os << "Score for " << (const string &) stu << ":\n";
    stu.arr_out(os);
    return os;
}












