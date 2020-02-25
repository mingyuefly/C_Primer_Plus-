//
//  str1.cpp
//  dishiliuzhang
//
//  Created by mingyue on 16/1/27.
//  Copyright © 2016年 RW. All rights reserved.
//

#include <iostream>
#include <cstring>

int main(int argc, const char * argv[]){
    
    using namespace std;
    string one("Lottery Winner! ");
    cout << one << endl;
    string two(20, '$');
    cout << two << endl;
    string three(one);
    cout << three << endl;
    one += " Oops!";
    cout << one << endl;
    two = "Sorry! That was ";
    three[0] = 'P';
    string four;
    four = two + three;
    cout << four << endl;
    char alls[] = "All's well that ends well";
    string five(alls, 20);
    cout << five << "!\n";
    string six(alls + 6, alls + 10);
    cout << six << ", ";
    string seven(&five[6], &five[10]);
    cout << seven << "...\n";

    return 0;
}
