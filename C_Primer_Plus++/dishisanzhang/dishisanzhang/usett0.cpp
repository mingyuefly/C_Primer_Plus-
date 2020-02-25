//
//  usett0.cpp
//  dishisanzhang
//
//  Created by mingyue on 16/1/10.
//  Copyright © 2016年 G. All rights reserved.
//

#include <iostream>
#include "tabten0.h"

int main(int argc, const char * argv[]){

    using std::cout;
    TableTennisPlayer player1("Chuck", "Blizzard", true);
    TableTennisPlayer player2("Tara", "Boomdea", false);
    player1.Name();
    
    if (player1.HasTable()) {
        cout << ": has a table.\n";
    }else{
        cout << ": has't a table.\n";
    }
    player2.Name();
    
    if (player2.HasTable()) {
        cout << ": has a table";
    }else{
        cout << ": has't a table.\n";
    }

    return 0;
}
