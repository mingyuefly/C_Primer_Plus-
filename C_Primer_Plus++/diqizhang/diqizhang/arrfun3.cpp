//
//  arrfun3.cpp
//  diqizhang
//
//  Created by mingyue on 15/12/24.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>

const int Max = 5;
int fill_array(double arr[], int limit);
void show_array(const double arr[], int n);
void revalue(double r, double ar[], int n);

int main(int argc, const char * argv[]){
    
    using namespace std;
    double properties[Max];
    
    int size = fill_array(properties, Max);
    show_array(properties, size);
    cout << "Enter revaluation factor: ";
    double factor;
    cin >> factor;
    revalue(factor, properties, size);
    show_array(properties, size);
    cout << "Done.\n";

    return 0;
}
int fill_array(double ar[], int limit){
    using namespace std;
    double temp;
    int i;
    for (i = 0; i < limit; i++) {
        cout << "Enter value #" << (i+1) << ": ";
        cin >> temp;
        if (!cin) {
            cin.clear();
            while (cin.get() != '\n') {
                continue;
            }
            cout << "Bad input: input process terminated.\n";
            break;
        }else if (temp < 0){
            break;
        }
        ar[i] = temp;
    }
    return i;
}

void show_array(const double arr[], int n){
    using namespace std;
    for (int i = 0; i < n; i++) {
        cout << "Property #" << (i+1) << ": $";
        cout << arr[i] << endl;
    }
}

void revalue(double r, double ar[], int n){
    for (int i = 0; i < n; i++) {
        ar[i] *= r;
    }
}
