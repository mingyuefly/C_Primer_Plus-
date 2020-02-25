//
//  tempmemb1.cpp
//  dishisizhang
//
//  Created by mingyue on 16/1/15.
//  Copyright © 2016年 G. All rights reserved.
//

#include <iostream>
using std::cout;
using std::endl;

template <typename T>
class beta {
private:
    template<typename V>
    class hold;
    hold<T>q;
    hold<int>n;
    
public:
    beta(T t, int i):q(t),n(i){}
    template<typename U>
    U blab(U u, T t);
    void Show()const {q.show(); n.show();}
};

template <typename T>
template <typename V>
class beta<T>::hold {
private:
    V val;
    
public:
    hold(V v = 0):val(v){}
    void show()const{std::cout << val << std::endl;}
    V value()const{return val;}
};


template <typename T>
template <typename U>
U beta<T>::blab(U u, T t) {
    return(n.value() + q.value()) * u / t;
}


int main(int argc, const char * argv[]){
    
    beta<double>guy(3.5, 3);
    guy.Show();
    cout << guy.blab(10, 2.3) << endl;
    cout << "Done\n";
    
    return 0;
}









