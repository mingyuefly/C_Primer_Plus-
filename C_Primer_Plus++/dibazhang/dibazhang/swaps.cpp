//
//  swaps.cpp
//  dibazhang
//
//  Created by mingyue on 15/12/25.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>

void swapr(int & a, int & b);
void swapp(int * p, int * q);
void swapv(int a, int b);

int main(int argc, const char * argv[]){

    using namespace std;
    int wallet1 = 300;
    int wallet2 = 350;
    
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;
    
    cout << "Using references to swap contents: \n";
    swapv(wallet1, wallet2);
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;
    
    

    return 0;
}

void swapr(int & a, int & b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swapp(int * p, int * q){
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

void swapv(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;

}

