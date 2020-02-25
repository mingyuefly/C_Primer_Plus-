//
//  usebrass1.cpp
//  dishisanzhang
//
//  Created by mingyue on 16/1/10.
//  Copyright © 2016年 G. All rights reserved.
//

#include <iostream>
#include "brass.h"

int main(int argc, const char * argv[]){
    
    using std::cout;
    using std::endl;
    
    Brass Piggy("Porcelot Pigg", 381299, 4000.00);
    BrassPlus Hoqqy("Heratio Hogg", 382288, 3000.00);
    Piggy.ViewAcct();
    cout << endl;
    Hoqqy.ViewAcct();
    cout << endl;
    cout << "Depositing $1000 into the Hogg Account: \n";
    Hoqqy.Deposit(1000.00);
    cout << "New balance: $" << Hoqqy.Balance() << endl;
    cout << "Withdrawing $4200 from the Pigg Account: \n";
    Piggy.Withdraw(4200.00);
    cout << "Pigg account balance: $" << Piggy.Balance() << endl;
    cout << "Withdraw $4200 from the Hogg Account: \n";
    Hoqqy.Withdraw(4200.00);
    Hoqqy.ViewAcct();
    
    
    
    return 0;
}
