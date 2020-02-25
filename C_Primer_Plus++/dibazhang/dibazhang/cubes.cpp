//
//  cubes.cpp
//  dibazhang
//
//  Created by mingyue on 15/12/25.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>

double cube(double a);
double refcube(double &ra);

int main(int argc, const char * argv[]){
    
    using namespace std;
    double x = 3.0;
    
    cout << cube(x);
    cout << " = cube of " << x << endl;
    cout << refcube(x);
    cout << " = cube of " << x << endl;

    return 0;
}

double cube(double a){
    a *= a * a;
    return a;
}
double refcube(double &ra){
    ra *= ra * ra;
    return ra;
}
