//
//  pointer.cpp
//  disizhang
//
//  Created by mingyue on 15/12/21.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>


int main(int argc, const char *argv[]){

    using namespace std;
    int updates = 6;
    int *p_updates;
    
    p_updates = &updates;
    
    cout << "Values: updates = " << updates;
    cout << ", *p_updates = " << *p_updates << endl;
    
    cout << "Adress: &updates = " << &updates;
    cout << ", p_updates = " << p_updates << endl;
    
    *p_updates = *p_updates + 1;
    cout << "Now updates = " << updates << endl;
    
    return 0;
}
