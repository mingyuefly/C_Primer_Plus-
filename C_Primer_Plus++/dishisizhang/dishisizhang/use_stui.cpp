//
//  use_stui.cpp
//  dishisizhang
//
//  Created by mingyue on 16/1/13.
//  Copyright © 2016年 G. All rights reserved.
//

#include <iostream>
#include "studenti.h"
using std::cin;
using std::cout;
using std::endl;

void set(Student & sa, int n);

const int pupils = 3;
const int quizzes = 5;

int main(int argc, const char * argv[]){
    
    Student ada[pupils] = {Student(quizzes), Student(quizzes), Student(quizzes)};
    int i;
    for (i = 0; i < pupils; i++) {
        set(ada[i], quizzes);
    }
    cout << "\nStudents List:\n";
    for (i = 0; i < pupils; i++) {
        cout << ada[i].Name() << endl;
    }
    cout << "\nResults:";
    for (i = 0; i < pupils; i++) {
        cout << endl << ada[i];
        cout << "average: " << ada[i].Average() << endl;
    }
    
    cout << "Done.\n";
    
    
    
    return 0;
}

void set(Student & sa, int n){

    cout << "Please enter the student's name: ";
    getline(cin, sa);
    cout << "Please enter " << n << " quiz scores: \n";
    for (int i = 0; i < n; i++) {
        cin >> sa[i];
    }
    while (cin.get() != '\n') {
        continue;
    }
}

/*
Please enter the student's name: Gil Bayts
Please enter 5quiz scores:
92 94 96 93 95
Please enter the student's name: Pat Roons
Please enter 5quiz scores:
83 89 72 78 95
Please enter the student's name: Fleur o'day
Please enter 5quiz scores:
92 89 96 74 64
*/










