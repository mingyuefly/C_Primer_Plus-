//
//  multimap.cpp
//  dishiliuzhang
//
//  Created by mingyue on 16/1/31.
//  Copyright © 2016年 RW. All rights reserved.
//

#include <iostream>
#include <string>
#include <map>
#include <algorithm>

typedef int KeyType;
typedef std::pair<const KeyType, std::string>Pair;
typedef std::multimap<KeyType, std::string>MapCode;

int main(int argc, const char * argv[]){

    using namespace std;
    MapCode codes;
    
    codes.insert(Pair(415, "San Francisco"));
    codes.insert(Pair(510, "Oakland"));
    codes.insert(Pair(718, "Brooklyn"));
    codes.insert(Pair(718, "Staten Island"));
    codes.insert(Pair(415, "San Rafael"));
    codes.insert(Pair(510, "Berkeley"));
    
    cout << "Number of cities with area code 415: "
    << codes.count(415) << endl;
    cout << "Number of citiers with area code 718:"
    << codes.count(718) << endl;
    cout << "Number of cities with area code 510:"
    << codes.count(510) << endl;
    cout << "Area Code City\n";
    
    MapCode::iterator it;
    for (it = codes.begin(); it != codes.end(); ++it) {
        cout << "  " << (*it).first << "  " << (*it).second << endl;
    }
    
    //Pair<MapCode::iterator, MapCode::iterator>range = codes.equal_range(718);
    
    
    
    
    
    

    return 0;
}
