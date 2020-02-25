//
//  assgn_st.cpp
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
    inflatable bouquet = {
        "sunflowers",
        0.20,
        12.49
    };
    
    inflatable choice;
    
    cout << "bouquet: " << bouquet.name << " for $";
    cout << bouquet.price << endl;
    choice = bouquet;
    cout << "choice: " << choice.name << " for $";
    cout << choice.price << endl;
    
    
    
    
    return 0;
}
