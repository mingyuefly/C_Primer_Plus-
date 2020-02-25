//
//  manyfrnd.cpp
//  dishisizhang
//
//  Created by mingyue on 16/1/15.
//  Copyright © 2016年 G. All rights reserved.
//

#include <iostream>
using std::cout;
using std::endl;

template <typename T>
class ManyFriend {
private:
    T item;
    
public:
    ManyFriend(const T & i):item(i){}
    template<typename C, typename D>friend void show2(C &, D &);
};

template <typename C, typename D>void show2(C & c, D & d){
    cout << c.item << ". " << d.item << endl;
}


int main(int argc, const char * argv[]){

    ManyFriend<int>hfi1(10);
    ManyFriend<int>hfi2(20);
    ManyFriend<double>hfdb(10.5);
    cout << "hfi1, hfi2";
    show2(hfi1, hfi2);
    cout << "hfdb, hfi2";
    show2(hfdb, hfi2);

    return 0;
}









