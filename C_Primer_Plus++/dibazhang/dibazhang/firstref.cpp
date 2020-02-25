//
//  firstref.cpp
//  dibazhang
//
//  Created by mingyue on 15/12/25.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>


int main(int argc, const char * argv[]){
    
    using namespace std;
    int rats = 101;
    int & rodents = rats;
    
    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;
    rodents++;
    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;
    
    cout << "rats address = " << &rats;
    cout << ", rodents address = " << &rodents << endl;

    return 0;
}
