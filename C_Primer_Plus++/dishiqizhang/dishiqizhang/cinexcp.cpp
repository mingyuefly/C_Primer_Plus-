//
//  cinexcp.cpp
//  dishiqizhang
//
//  Created by mingyue on 16/2/2.
//  Copyright © 2016年 G. All rights reserved.
//

#include <iostream>
#include <exception>


int main(int argc, const char * argv[]){

    using namespace std;
    cin.exceptions(ios_base::failbit);
    cout << "Enter numbers: ";
    int sum = 0;
    int input;
    
    try {
        while (cin >> input) {
            sum += input;
        }
    } catch (ios_base::failure & bf) {
        cout << bf.what() << endl;
        cout << "O!the horror!\n";
    }
    
    cout << "Last value entered = " << input << endl;
    cout << "Sum = " << sum << endl;

    return 0;
}
