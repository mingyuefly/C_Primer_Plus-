//
//  vect1.cpp
//  dishiliuzhang
//
//  Created by mingyue on 16/1/29.
//  Copyright © 2016年 RW. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

const int NUM = 5;


int main(int argc, const char * argv[]){

    using std::vector;
    using std::string;
    using std::cin;
    using std::cout;
    using std::endl;
    
    vector<int> ratings(NUM);
    vector<string>titles(NUM);
    cout << "You will dl exactly as told. You will enter\n"
    << NUM << " book titles and your ratings(0 - 10).\n";
    int i;
    for (i = 0; i < NUM; i++) {
        cout << "Enter title #" << i + 1 << ": ";
        getline(cin, titles[i]);
        cout << "Enter your rating(0 - 10): ";
        cin >> ratings[i];
        cin.get();
    }
    cout << "Thank you. You entered the following: \n"
    << "Rating\tBook\n";
    for (i = 0; i < NUM; i++) {
        cout << ratings[i] << "\t" << titles[i] << endl;
    }
    

    return 0;
}
