//
//  stock1.h
//  dishizhang
//
//  Created by mingyue on 15/12/30.
//  Copyright © 2015年 G. All rights reserved.
//

#ifndef stock1_h
#define stock1_h

class Stock{
private:
    char company[30];
    int shares;
    double share_val;
    double total_val;
    void set_tot(){
        total_val = shares * share_val;
    }
public:
    Stock();
    Stock(const char * co, int n = 0, double pr = 0.0);
    ~Stock();
    void buy(int num, double price);
    void sell(int num, double price);
    void update(double price);
    void show();
    const Stock & topval(const Stock & s)const;
};





#endif /* stock1_h */
