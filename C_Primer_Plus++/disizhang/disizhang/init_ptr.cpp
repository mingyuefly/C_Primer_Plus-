//
//  init_ptr.cpp
//  disizhang
//
//  Created by mingyue on 15/12/21.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>


int main(int argc, const char *argv[]){

    using namespace std;
    int higgens = 5;
    int *pt = &higgens;
    
    cout << "Value of higgens = " << higgens << "; Address of higgens = " << &higgens << endl;
    cout << "Value of *pt = " << *pt << "; Value of pt = " << pt << endl;
    
    return 0;
}
