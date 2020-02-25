//
//  random.cpp
//  dishiqizhang
//
//  Created by mingyue on 16/2/5.
//  Copyright © 2016年 G. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>

const int LIM = 20;
struct planet {
    char name[LIM];
    double population;
    double q;
};

const char * file = "planets.dat";
inline void eatline(){ while (std::cin.get() != '\n')continue;}

int main(int argc, const char * argv[]){

    using namespace std;
    planet p1;
    cout << fixed;
    
    fstream finout;
    finout.open(file, ios_base::in | ios_base::out | ios_base::binary);
    int ct = 0;
    if (finout.is_open()) {
        finout.seekg(0);
        cout << "Here are the current content of the "
        << file << " file: \n";
        while (finout.read((char *)&p1, sizeof(p1))) {
            cout << ct++ << ": " << setw(LIM) << p1.name << ": "
            << setprecision(0) << setw(12) << p1.population
            << setprecision(2) << setw(6) << p1.q << endl;
        }
        if (finout.eof()) {
            finout.clear();
        }else{
            cerr << "Error in reading " << file << ".\n";
            exit(EXIT_FAILURE);
        }
    }else{
        cerr << file << " could not be opened -- bye.\n";
        exit(EXIT_FAILURE);
    }
    
    cout << "Enter the record number you with wish to change: ";
    long rec;
    cin >> rec;
    eatline();
    if (rec < 0 || rec >= ct) {
        cerr << "Invalid record number -- bye\n";
        exit(EXIT_FAILURE);
    }
    streampos place = rec * sizeof(p1);
    finout.seekg(place);
    if (finout.fail()) {
        cerr << "Error on attempted seek\n";
        exit(EXIT_FAILURE);
    }
    
    finout.read((char *)&p1, sizeof(p1));
    cout << "Your selection: \n";
    cout << rec << ": " << setw(LIM) << p1.name << ": "
    << setprecision(0) << setw(12) << p1.population
    << setprecision(2) << setw(6) << p1.q << endl;
    if (finout.eof()) {
        finout.clear();
    }
    
    cout << "Enter planet name: ";
    cin.get(p1.name, LIM);
    eatline();
    cout << "Enter planetary population: ";
    cin >> p1.population;
    cout << "Enter planet's acceleration of gravity: ";
    cin >> p1.q;
    finout.seekg(place);
    finout.write((char *)&p1, sizeof(p1)) << flush;
    if (finout.fail()) {
        cerr << "Error on attempted write\n";
        exit(EXIT_FAILURE);
    }
    ct = 0;
    finout.seekg(0);
    cout << "Here are the new contents of the " << file
    << " file: \n";
    while (finout.read((char *)&p1, sizeof(p1))) {
        cout << ct++ << ": " << setw(LIM) << p1.name << ": "
        << setprecision(0) << setw(12) << p1.population
        << setprecision(2) << setw(6) << p1.q << endl;
    }
    finout.close();
    cout << "Done.\n";

    return 0;
}
