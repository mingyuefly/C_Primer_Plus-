//
//  strout.cpp
//  dishiqizhang
//
//  Created by mingyue on 16/2/5.
//  Copyright © 2016年 G. All rights reserved.
//

#include <iostream>
#include <sstream>
#include <string>


int main(int argc, char * argv[]){

    using namespace std;
    ostringstream outstr;
    
    string hdisk;
    cout << "What's the name of your hard desk? ";
    getline(cin, hdisk);
    int cap;
    cout << "What's its capacity in GB? ";
    cin >> cap;
    outstr << "The hard disk " << hdisk << " has a capacity of "
    << cap << " gigabytes.\n";
    string result = outstr.str();
    cout << result;


    return 0;
}
