//
//  vegnews.cpp
//  dishierzhang
//
//  Created by mingyue on 16/1/4.
//  Copyright © 2016年 G. All rights reserved.
//

#include <iostream>
using std::cout;
#include "strngbad.h"

void callme1(Strngbad &);
void callme2(Strngbad &);

int main(int argc, const char * argv[]){
    
    using std::endl;
    Strngbad headline1("Celery Stalks at Midnight");
    Strngbad headline2("Letture Prey");
    Strngbad sports("Spinach Leaves Bow1 for Dollars");
    cout << "headline1: " << headline1 << endl;
    cout << "headline2: " << headline2 << endl;
    cout << "sports: " << sports << endl;
    callme1(headline1);
    cout << "headline1: " << headline1 << endl;
    callme2(headline2);
    cout << "headline2: " << headline2 << endl;
    cout << "Initialize one object to another: \n";
    Strngbad knot;
    knot = headline1;
    //Strngbad knot = headline1;
    //Strngbad knot(headline1);
    cout << "knot: " << knot << endl;
    cout << "End of main()\n";
    
    return 0;
}

void callme1(Strngbad & rsb){
    cout << "String passed by reference: \n";
    cout << "    \"" << rsb << "\"\n";
}
void callme2(Strngbad & sb){
    cout << "String passed by value: \n";
    cout << "    \"" << sb << "\"\n";
}
