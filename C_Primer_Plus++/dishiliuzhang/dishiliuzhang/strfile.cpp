//
//  strfile.cpp
//  dishiliuzhang
//
//  Created by mingyue on 16/1/27.
//  Copyright © 2016年 RW. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>

int main(int argc, const char *argv[]){
    
    using namespace std;
    ifstream fin;
    fin.open("tobuy.txt");
    if(fin.is_open() == false){
        cerr << "Can't open file.Bye.\n";
        exit(EXIT_FAILURE);
    }
    string item;
    int count = 0;
    
    getline(fin, item, ':');
    while (fin) {
        ++count;
        cout << count << ": " << item << endl;
        getline(fin, item, ':');
    }
    cout << "Done\n";
    fin.close();

    return 0;
}
