//
//  strtype3.cpp
//  disizhang
//
//  Created by mingyue on 15/12/18.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstring>


int main(int argc, const char * argv[]){
                                     
    using namespace std;
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";
    
    str1 = str2;
    strcpy(charr1, charr2);
    
    str1 += " paste";
    strcat(charr1, " juice");
    
    int len1 = str1.size();
    int len2 = strlen(charr1);
    
    cout << "The string " << str1 << " contains " << len1 << " characters.\n";
    cout << "The string " << charr1 << " contains " << len2 << " charcters.\n";
    
    
    return 0;
}


