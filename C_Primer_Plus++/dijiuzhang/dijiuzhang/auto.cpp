//
//  auto.cpp
//  dijiuzhang
//
//  Created by mingyue on 15/12/28.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>
void oil(int x);

int main(int argc, const char * argv[]){
    
    using namespace std;
    
    int texas = 31;
    int year = 1999;
    
    cout << "In main(), texas = " << texas << ", &texas = ";
    cout << &texas << endl;
    cout << "In main(), year = " << year << ", &year = ";
    cout << &year << endl;
    oil(texas);
    cout << "In main(), texas = " << texas << ", &texas = ";
    cout << &texas << endl;
    cout << "In main(), year = " << year << ", &year = ";
    cout << &year << endl;
    
    return 0;
}

void oil(int x){
    using namespace std;
    int texas = 5;
    
    cout << "In oil(), texas = " << texas << ", &texas = ";
    cout << &texas << endl;
    cout << "In oil(), x = " << x << ", &x = ";
    cout << &x << endl;
    {
        int texas = 13;
        cout << "In block, texas = " << texas;
        cout << ", &texas = " << &texas << endl;
        cout << "In block, x = " << x << ", &x =";
        cout << &x << endl;
    }
    cout << "Post-block texas = " << texas;
    cout << ", &texas = " << &texas << endl;
}






