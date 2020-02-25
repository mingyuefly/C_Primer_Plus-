//
//  usetime0.cpp
//  dishiyizhang
//
//  Created by mingyue on 15/12/31.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>
#include "mytime0.h"

int main(int argc, const char * argv[]){

    using std::cout;
    using std::endl;
    Time planning;
    Time coding(2, 40);
    Time fixing(5, 55);
    Time total;
    
    cout << "planing time = ";
    planning.Show();
    cout << endl;
    
    cout << "coding time = ";
    coding.Show();
    cout << endl;
    
    cout << "fixing time = ";
    fixing.Show();
    cout << endl;
    
    total = coding.Sum(fixing);
    cout << "coding.Sum(fixing) = ";
    total.Show();
    cout << endl;
    
    fixing.Reset(3, 20);
    cout << "fixing time = ";
    fixing.Show();
    cout << endl;
    
    total = coding.Sum(fixing);
    cout << "total time = ";
    total.Show();
    cout << endl;
    

    return 0;
}
