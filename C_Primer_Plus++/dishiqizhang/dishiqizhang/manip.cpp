//
//  manip.cpp
//  dishiqizhang
//
//  Created by mingyue on 16/2/2.
//  Copyright © 2016年 G. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]){

    using namespace std;
    cout << "Enter an integer:";
    int n;
    cin >> n;
    
    cout << "n    n*n\n";
    cout << n << "    " << n * n << "(decimal)\n";
    cout << hex;
    cout << n << "    ";
    cout << n * n << "(hexadecimal)\n";
    
    cout << oct << n << "    " << n * n << "(octal)\n";
    dec(cout);
    cout << n << "    " << n * n << "(decimal)\n";


    return 0;
}
