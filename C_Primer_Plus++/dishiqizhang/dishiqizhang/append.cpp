//
//  append.cpp
//  dishiqizhang
//
//  Created by mingyue on 16/2/4.
//  Copyright © 2016年 G. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>


const char * file = "quests.txt";

int main(int argc, const char * argv[]){
    
    using namespace std;
    char ch;
    
    ifstream fin;
    fin.open(file);
    
    if (fin.is_open()) {
        cout << "Here are the current contents of the " << file << " file:\n";
        while (fin.get(ch)) {
            cout << ch;
        }
    }
    fin.close();
    
    ofstream font(file, ios::out | ios::app);
    if (!font.is_open()) {
        cerr << "Can't open" << file << " file for output.\n";
        exit(EXIT_FAILURE);
    }
    
    cout << "Enter quest names (enter a blank line to quit): \n";
    string name;
    while (getline(cin, name) && name.size() > 0) {
        font << name << endl;
    }
    font.close();
    fin.clear();
    fin.open(file);
    
    if (fin.is_open()) {
        cout << "Here are the new contents of the "
        << file << " file: \n";
        while (fin.get(ch)) {
            cout << ch;
            fin.close();
        }
    }
    cout << "Done.\n";
    
    return 0;
}
