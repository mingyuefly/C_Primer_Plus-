//
//  error4.cpp
//  dishiwuzhang
//
//  Created by mingyue on 16/1/22.
//  Copyright © 2016年 G. All rights reserved.
//

#include <iostream>
#include <cmath>
#include "exc_mean.cpp"

double hmean(double a, double b) throw(bad_hmean);
double gmean(double a, double b) throw(bad_gmean);

int main(int argc, const char * argv[]){

    using std::cout;
    using std::cin;
    using std::endl;
    
    double x, y, z;
    cout << "Enter two numbers: ";
    
    while (cin >> x >> y) {
        try {
            z = hmean(x, y);
            cout << "Harmonic mean of " << x << " and " << y << " is " << z << endl;
            cout << "Geometric mean of " << x << " and " << y << " is " << gmean(x, y) << endl;
            cout << "Enter next set of numbers <q to quit>: ";
        } catch (bad_hmean & bg) {
            bg.mesg();
            cout << "Try again.\n";
            continue;
        } catch (bad_gmean & hg){
            cout << hg.mesg();
            cout << "Value used: " << hg.v1 << ", " << hg.v2 << endl;
            cout << "Sorry, you don't get to play any more.\n";
            break;
        }
    }
    
    cout << "Bye!\n";

    return 0;
}

double hmean(double a, double b) throw(bad_hmean){
    if (a == -b){
        throw bad_hmean(a, b);
    }
    return 2.0 * a * b / (a + b);
}
double gmean(double a, double b) throw(bad_gmean){
    if (a < 0 || b < 0){
        throw bad_gmean(a, b);
    }
    return std::sqrt(a * b);
}

