//
//  main.cpp
//  dibazhang
//
//  Created by mingyue on 15/12/25.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>

inline double square(double x){return x * x;};

int main(int argc, const char * argv[]) {
    
    using namespace std;
    double a,b;
    double c = 13.0;
    
    a = square(5.0);
    b = square(4.5 + 7.5);
    cout << "a = " << a << ", b = " << b << "\n";
    cout << "c = " << c;
    cout << ", c squared = " << square(c++) << "\n";
    cout << "Now c = " << c << "\n";
    
    
    return 0;
}
