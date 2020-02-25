//
//  listrmv.cpp
//  dishiliuzhang
//
//  Created by mingyue on 16/2/1.
//  Copyright © 2016年 RW. All rights reserved.
//

#include <iostream>
#include <list>
#include <algorithm>

void Show(int);
const int LIM = 10;

int main(int argc, const char * argv[]){
    
    using namespace std;
    int ar[LIM] = {4, 5, 4, 2, 2, 3, 4, 8, 1, 4};
    list<int>la(ar, ar + LIM);
    list<int>lb(la);
    
    cout << "Original list contents: \n\t";
    for_each(la.begin(), la.end(), Show);
    cout << endl;
    la.remove(4);
    cout << "After using the remove() method: \n";
    cout << "la: \t";
    for_each(la.begin(), la.end(), Show);
    //cout << "After using the remove() function: \n";
    cout << endl;
    list<int>::iterator last;
    last = remove(lb.begin(), lb.end(), 4);
    cout << "After using the remove() function: \n";
    cout << "lb: \t";
    for_each(lb.begin(), lb.end(), Show);
    cout << endl;
    lb.erase(last, lb.end());
    cout << "After using the erase() method: \n";
    cout << "lb: \t";
    for_each(lb.begin(), lb.end(), Show);
    cout << endl;


    return 0;
}

void Show(int v){
    std::cout << v << ' ';
}



