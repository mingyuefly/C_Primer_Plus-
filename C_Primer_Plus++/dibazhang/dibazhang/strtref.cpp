//
//  strtref.cpp
//  dibazhang
//
//  Created by mingyue on 15/12/25.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>

using namespace std;

struct sysop{
    char name[26];
    char quote[64];
    int used;
};

const sysop & use(sysop & sysopref);

int main(int argc, const char * argv[]){
    
    sysop looper = {
        "Rick \"Fortran\" Looper",
        "I'm a goto kind of guy.",
        0
    };
    
    use(looper);
    cout << "Looper: " << looper.used << " use(s)\n";
    sysop copycat;
    copycat = use(looper);
    cout << "Looper: " << looper.used << " use(s)\n";
    cout << "Copycat: " << copycat.used << " use(s)\n";
    cout << "use(looper): " << use(looper).used << " use(s)\n";

    return 0;
}

const sysop & use(sysop & sysopref){
    cout << sysopref.name << " says:\n";
    cout << sysopref.quote << endl;
    sysopref.used++;
    return sysopref;
}


