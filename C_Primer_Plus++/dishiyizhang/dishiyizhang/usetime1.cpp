//
//  usetime1.cpp
//  dishiyizhang
//
//  Created by mingyue on 15/12/31.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>
#include "mytime1.h"

int main(int argc, const char * argv[]){

    using std::cout;
    using std::endl;
    Time planing;
    Time coding(2, 40);
    Time fixing(5, 55);
    Time total;
    
    cout << "planing time = ";
    planing.Show();
    cout << endl;
    
    cout << "coding tiem = ";
    coding.Show();
    cout << endl;
    
    cout << "fixing tiem = ";
    fixing.Show();
    cout << endl;
    
    total = coding + fixing;
    cout << "coding + fixing = ";
    total.Show();
    cout << endl;
    
    Time morefixing(3, 28);
    cout << "more fixing time = ";
    morefixing.Show();
    cout << endl;
    total = morefixing.operator+(total);
    cout << "morefixing.operator+(total) = ";
    total.Show();
    cout << endl;
    

    return 0;
}
