//
//  arrstruc.cpp
//  disizhang
//
//  Created by mingyue on 15/12/21.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>

struct inflatable{
    char name[20];
    float volume;
    double price;
};

int main(int argc, const char *argv[]){
    
    using namespace std;
    inflatable quest[2] = {
        {"Bambi", 0.5, 21.99},
        {"Godzilla", 2000, 565.99}
    };
    
    cout << "The quests " << quest[0].name << " and " << quest[1].name << "\nhave a combined volume of " << quest[0].volume + quest[1].volume << " cublic feet.\n";
    
    
    return 0;
}

