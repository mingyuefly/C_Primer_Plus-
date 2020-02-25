//
//  funtemp.cpp
//  dibazhang
//
//  Created by mingyue on 15/12/28.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>

template <class Any>
void Swap(Any &a, Any &b);


int main(int argc, const char * argv[]){

    using namespace std;
    int i = 10;
    int j = 20;
    cout << "i,j = " << i << ", " << j << ".\n";
    cout << "Using compiler-generated int swapper: \n";
    Swap(i,j);
    cout << "Now, i, j = " << i << ", " << j << ".\n";
    
    double x = 24.5;
    double y = 81.7;
    cout << "x,y = " << x << ", " << y << ".\n";
    cout << "Using compiler-generated double swapper: \n";
    Swap(x, y);
    cout << "Now, x, y = " << x << ", " << y << ".\n";

    return 0;
}
template <class Any>
void Swap(Any &a, Any &b){
    Any temp;
    temp = a;
    a = b;
    b = temp;
}


