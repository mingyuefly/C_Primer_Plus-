//
//  frnd2tmp.cpp
//  dishisizhang
//
//  Created by mingyue on 16/1/15.
//  Copyright © 2016年 G. All rights reserved.
//

#include <iostream>
using std::cout;
using std::endl;
template <typename T>
class HasFriend {
private:
    T item;
    static int ct;
    
public:
    HasFriend(const T & i):item(i){ct++;}
    ~HasFriend(){ct--;}
    friend void counts();
    friend void reports(HasFriend<T> &);
    
};

template <typename T>
int HasFriend<T>::ct = 0;

void counts(){
    cout << "int counts: " << HasFriend<int>::ct << "; ";
    cout << "double counts: " << HasFriend<double>::ct << endl;
}

void reports(HasFriend<int> & hf){
    cout << "HasFriend<int>: " << hf.item << endl;
}

void reports(HasFriend<double> & hf){
    cout << "HasFriend<double>: " << hf.item << endl;
}

int main(int argc, const char * argv[]){

    cout << "No objects declared: ";
    counts();
    HasFriend<int>hfi1(10);
    cout << "After hfi1 declared: ";
    counts();
    HasFriend<int>hfi2(20);
    cout << "After hfi2 declared: ";
    counts();
    HasFriend<double>hfdb(10.5);
    cout << "After hfdb declared: ";
    counts();
    reports(hfi1);
    reports(hfi2);
    reports(hfdb);
    
    return 0;
}


















