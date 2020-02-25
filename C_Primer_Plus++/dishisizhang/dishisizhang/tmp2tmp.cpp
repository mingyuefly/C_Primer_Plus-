//
//  tmp2tmp.cpp
//  dishisizhang
//
//  Created by mingyue on 16/1/15.
//  Copyright © 2016年 G. All rights reserved.
//

#include <iostream>
using std::cout;
using std::endl;

template <typename T>void counts();
template <typename T>void reports(T &);
template <typename TT>
class HasFriendT {
private:
    TT item;
    static int ct;
    
public:
    HasFriendT(const TT & i):item(i){ct++;}
    ~HasFriendT(){ct--;}
    friend void counts<TT>();
    friend void reports<>(HasFriendT<TT> &);
};

template <typename T>
int HasFriendT<T>::ct = 0;

template <typename T>
void counts(){
    cout << "template size: " << sizeof(HasFriendT<T>) << ";";
    cout << "template counts(): " << HasFriendT<T>::ct << endl;
}

template <typename T>
void reports(T & hf){
    cout << hf.item << endl;
}

int main(int argc, const char * argv[]){
    
    counts<int>();
    HasFriendT<int>hfi1(10);
    HasFriendT<int>hfi2(20);
    HasFriendT<double>hfdb(10.5);
    reports(hfi1);
    reports(hfi2);
    reports(hfdb);
    cout << "counts<int>() output: \n";
    counts<int>();
    cout << "counts<double>() output: \n";
    counts<double>();
    
    
    return 0;
}

















