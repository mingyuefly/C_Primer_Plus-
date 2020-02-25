//
//  structur.cpp
//  disizhang
//
//  Created by mingyue on 15/12/18.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>

struct inflatable {
    char name[20];
    float volume;
    double price;
};

int main(int argc, const char *argv[]){
    
    using namespace std;
    inflatable quest = {
        "Glorious Gloria",
        1.88,
        29.99
    };
    
    inflatable pal = {
        "Audacious Arthur",
        3.12,
        32.99
    };
    
    cout << "Expand your guest list with " << quest.name;
    cout << " and " << pal.name << "!\n";
    cout << "You can have both for $";
    cout << quest.price + pal.price << "!\n";
    
       
    
    return 0;
}
