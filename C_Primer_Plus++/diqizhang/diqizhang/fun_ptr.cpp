//
//  fun_ptr.cpp
//  diqizhang
//
//  Created by mingyue on 15/12/24.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>

double betsy(int);
double pam(int);

void estimate(int lines, double(*pf)(int));

int main(int argc, const char * argv[]){
    
    using namespace std;
    int code;
    
    cout << "How many lines of code do you need? ";
    cin >> code;
    cout << "Here's Besty's estimate: \n";
    estimate(code, betsy);
    cout << "Here/s Pan estimate: \n";
    estimate(code, pam);

    return 0;
}

double betsy(int lns){
    return 0.05 * lns;
}

double pam(int lns){
    return 0.03 * lns + 0.0004 * lns * lns;
}

void estimate(int lines, double(*pf)(int)){

    using namespace std;
    cout << lines << " lines will take ";
    cout << (*pf)(lines) << " hour(s)\n";

}

