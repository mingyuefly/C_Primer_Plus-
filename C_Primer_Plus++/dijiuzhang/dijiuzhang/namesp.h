//
//  namesp.h
//  dijiuzhang
//
//  Created by mingyue on 15/12/29.
//  Copyright © 2015年 G. All rights reserved.
//

#ifndef namesp_h
#define namesp_h

namespace pers {
    const int LEN = 40;
    struct Person{
        char fname[LEN];
        char lname[LEN];
    };
    void getPerson(Person &);
    void showPerson(const Person &);
}

namespace debts {
    using namespace pers;
    struct Debt{
        Person name;
        double amount;
    };
    void getDebt(Debt &);
    void showDebt(const Debt &);
    double sumDebts(const Debt ar[], int n);
}




#endif /* namesp_h */
