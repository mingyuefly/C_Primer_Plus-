//
//  get_gun.cpp
//  dishiqizhang
//
//  Created by mingyue on 16/2/2.
//  Copyright © 2016年 G. All rights reserved.
//

#include <iostream>
const int Limit = 255;

int main(int argc, const char * argv[]){

    using std::cout;
    using std::cin;
    using std::endl;
    
    char input[Limit];
    
    cout << "Enter a string for getline() processing: \n";
    cin.getline(input, Limit, '#');
    cout << "Here is your input: \n";
    cout << input << "\nDone with phase 1\n";
    
    char ch;
    cin.get(ch);
    cout << "The next input character is " << ch << endl;
    
    if (ch != '\n') {
        cin.ignore(Limit, '\n');
    }
    
    cout << "Enter a string for get() processing: \n";
    cin.get(input, Limit, '#');
    cout << "Here is your input: \n";
    cout << input << "\nDone with phase 2\n";
    
    cin.get(ch);
    cout << "The next input character is " << ch << endl;
    
    
    

    return 0;
}
