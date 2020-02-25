//
//  temptempover.cpp
//  dibazhang
//
//  Created by mingyue on 15/12/28.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>

template <typename T>
void showArray(T arr[], int n);

template <typename T>
void showArray(T * arr[], int n);

struct debts{
    char name[50];
    double amount;
};

int main(int argc, const char * argv[]){
    
    using namespace std;
    int things[6] = {13, 31, 103, 301, 310, 130};
    struct debts mr_E[3] = {
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"Iby Stout", 1800.0},
    };
    double * pd[3];
    for (int i = 0; i < 3; i++) {
        pd[i] = &mr_E[i].amount;
    }
    cout << "Listening Mr. E's counts of things: \n";
    showArray(things, 6);
    cout << "Listening Mr. E's debts: \n";
    showArray(pd, 3);

    return 0;
}

template <typename T>
void showArray(T arr[], int n){
    using namespace std;
    cout << "template A\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}


template <typename T>
void showArray(T * arr[], int n){
    using namespace std;
    cout << "template B\n";
    for (int i = 0; i < n; i++) {
        cout << *arr[i] << endl;
    }
    cout << endl;
}




