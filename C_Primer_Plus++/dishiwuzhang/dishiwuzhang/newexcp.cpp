//
//  newexcp.cpp
//  dishiwuzhang
//
//  Created by mingyue on 16/1/22.
//  Copyright © 2016年 G. All rights reserved.
//

#include <iostream>
#include <new>
#include <cstdlib>
using namespace std;

struct Big {
    double stuff[2000000000];
};

int main(int argc, const char * argv[]){

    Big * pb;
    try {
        cout << "Trying to get a big block of memory:\n";
        pb = new Big[10000];
        cout << "Got past the new request:\n";
        
    } catch (bad_alloc & ba) {
        cout << "Caught the exception!\n";
        cout << ba.what() << endl;
        exit(EXIT_FAILURE);
    }
    
    if (pb != 0) {
        pb[0].stuff[0] = 4;
        cout << pb[0].stuff[0] << endl;
    }else{
        cout << "pb is null pointer\n";
    }
    
    delete [] pb;

    return 0;
}









