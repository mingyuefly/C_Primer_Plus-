//
//  divide.cpp
//  diyizhang
//
//  Created by mingyue on 15/12/16.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>


int main(int argc, const char *argv[]){

    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "Integer division: 9/5 = " << 9/5 << endl;
    cout << "Floating-point division:9.0/5.0 = ";
    cout << 9.0/5.0 << endl;
    cout << "Mixed division: 9.0/5.0 = " << 9.0/5.0 << endl;
    cout << "double constants: 1.e7/9.0 = ";
    cout << 1.e7/9.0 << endl;
    cout << "float constants: 1.e7f/9.0f = ";
    cout << 1.e7f/9.0f << endl;
    
    
    return 0;
}
