//
//  stack.h
//  dishizhang
//
//  Created by mingyue on 15/12/30.
//  Copyright © 2015年 G. All rights reserved.
//

#ifndef stack_h
#define stack_h

typedef unsigned long Item;

class Stack{
private:
    enum{MAX = 10};
    Item items[MAX];
    int top;
public:
    Stack();
    bool isempty()const;
    bool isfull()const;
    bool push(const Item & item);
    bool pop(Item & item);

};





#endif /* stack_h */
