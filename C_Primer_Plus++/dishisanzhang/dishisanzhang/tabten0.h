//
//  tabten0.h
//  dishisanzhang
//
//  Created by mingyue on 16/1/10.
//  Copyright © 2016年 G. All rights reserved.
//

#ifndef tabten0_h
#define tabten0_h

class TableTennisPlayer {
private:
    enum {LIM = 20};
    char firstname[LIM];
    char lastname[LIM];
    bool hasTable;
    
public:
    TableTennisPlayer(const char * fn = "none", const char * ln = "none", bool ht = false);
    void Name()const;
    bool HasTable()const {return hasTable;}
    void ResetTable(bool v){hasTable = v;}
};



#endif /* tabten0_h */
