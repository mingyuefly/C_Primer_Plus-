//
//  usetime3.cpp
//  dishiyizhang
//
//  Created by mingyue on 15/12/31.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>
#include "mytime3.h"

int main(int argc, const char * argv[]){
    
    using std::cout;
    using std::endl;
    Time aida(3, 35);
    Time tosca(2, 48);
    Time temp;
    
    cout << "Aida and Tosca: \n";
    cout << aida << "; " << tosca << endl;
    temp = aida + tosca;
    cout << "Aida + Tosca: " << temp << endl;
    temp = aida * 1.17;
    cout << "Aida * 1.17:" << temp << endl;
    cout << "10 * Tosca: " << 10 * tosca << endl;
    
    
    
    return 0;
}
