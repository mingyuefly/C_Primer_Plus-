//
//  delete.cpp
//  disizhang
//
//  Created by mingyue on 15/12/22.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>
#include <cstring>

using namespace std;

char *getname(void);

int main(int argc, const char *argv[]){
    
    char * name;
    name = getname();
    cout << name << " at " << (int *)name << "\n";
    delete [] name;
    
    name = getname();
    cout << name << " at " << (int *)name << "\n";
    delete [] name;
    
    return 0;
}

char * getname(){
    
    char temp[90];
    cout << "Enter last name: ";
    cin >> temp;
    char * pn = new char[strlen(temp) + 1];
    strcpy(pn, temp);

    return pn;
}

