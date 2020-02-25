//
//  ptrstr.cpp
//  disizhang
//
//  Created by mingyue on 15/12/21.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>
#include <cstring>

int main(int argc, const char *argv[]){
    
    using namespace std;
    char animal[20] = "bear";
    const char * bird = "wren";
    char * ps;
    
    cout << animal << " and ";
    cout << bird << "\n";
    
    cout << "Enter a kind of animal: ";
    cin >> animal;
    
    ps = animal;
    cout << ps << "s!\n";
    cout << "Before using strcpy(): \n";
    cout << animal << " at " << (int *)animal << endl;
    cout << ps << " at " << (int *)ps << endl;
    
    ps = new char[strlen(animal) + 1];
    strcpy(ps, animal);
    cout << "After using strcpy(): \n";
    cout << animal << " at " << (int *)animal << endl;
    cout << ps << " at " << (int *)ps << endl;
    delete [] ps;
    
    return 0;
}
