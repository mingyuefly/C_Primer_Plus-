//
//  leftover.cpp
//  dibazhang
//
//  Created by mingyue on 15/12/25.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>

unsigned long left(unsigned long num, unsigned ct);
char * left(const char * str, int n = 1);

int main(int argc, const char * argv[]){

    using namespace std;
    char * trip = "Hawaii!!";
    unsigned long n = 12345678;
    int i;
    char * temp;
    
    for (i = 1; i < 10; i++) {
        cout << left(n, i) << endl;
        temp = left(trip, i);
        cout << temp << endl;
        delete [] temp;
    }
    
    return 0;
}

unsigned long left(unsigned long num, unsigned ct){
    unsigned digits = 1;
    unsigned long n = num;
    
    if (ct == 0 || num == 0) {
        return 0;
    }
    
    while (n /= 10) {
        digits++;
    }
    
    if (digits > ct) {
        ct = digits - ct;
        while (ct--) {
            num /= 10;
        }
        return num;
    }else{
        return num;
    }
    
    
    
    return 0;
}

char * left(const char * str, int n){
    if (n < 0) {
        n = 0;
    }
    char * p = new char[n - 1];
    int i;
    for (i = 0; i < n && str[i]; i++) {
        p[i] = str[i];
    }
    while (i <= n) {
        p[i++] = '\0';
    }
    
    return p;
}

