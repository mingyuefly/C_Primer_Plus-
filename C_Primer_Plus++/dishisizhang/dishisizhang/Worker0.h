//
//  Worker0.h
//  dishisizhang
//
//  Created by mingyue on 16/1/13.
//  Copyright © 2016年 G. All rights reserved.
//

#ifndef Worker0_h
#define Worker0_h

#include <string>

class Worker {
private:
    std::string fullname;
    long id;
    
public:
    Worker():fullname("no one"),id (0L){}
    Worker(const std::string & s, long n):fullname(s),id(n){}
    virtual ~Worker() = 0;
    virtual void Set();
    virtual void Show()const;
};

class Waiter:public Worker {
    int panache;
    
public:
    Waiter():Worker(),panache(0){}
    Waiter(const std::string & s, long n, int p = 0):Worker(s, n),panache(p){}
    Waiter(const Worker & wk, int p = 0):Worker(wk),panache(p){}
    void Set();
    void Show()const;
};

class Singer:public Worker {
protected:
    enum{other, alto, contralto, soprano, bass, baritone, tenor};
    enum{Vtypes = 7};
private:
    static char *pv[Vtypes];
    int voice;
    
public:
    Singer():Worker(),voice(other){}
    Singer(const std::string & s, long n, int v = other):Worker(s, n),voice(v){}
    Singer(const Worker & wk, int v = other):Worker(wk),voice(v){}
    void Set();
    void Show()const;
};







#endif /* Worker0_h */
