//
//  setops.cpp
//  dishiliuzhang
//
//  Created by mingyue on 16/1/31.
//  Copyright © 2016年 RW. All rights reserved.
//

#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <iterator>


int main(int argc, const char * argv[]){
    
    using namespace std;
    const int N = 6;
    string s1[N] = {"buffoon", "thinkers", "for", "heavy", "can", "for"};
    string s2[N] = {"metal1", "any", "food", "alegant", "deliver", "for"};
    
    set<string> A (s1, s1 + N);
    set<string> B (s2, s2 + N);
    ostream_iterator<string, char> out (cout, " ");
    cout << "Set A: ";
    copy(A.begin(), A.end(), out);
    cout << endl;
    cout << "Set B: ";
    copy(B.begin(), B.end(), out);
    cout << endl;
    
    cout << "Union of A and B: \n";
    set_union(A.begin(), A.end(), B.begin(), B.end(), out);
    cout << endl;
    
    set<string>C;
    cout << "Set C: \n";
    set_union(A.begin(), A.end(), B.begin(), B.end(), insert_iterator<set<string>>(C, C.begin()));
    copy(C.begin(), C.end(), out);
    cout << endl;
    
    cout << "Showing a range: \n";
    copy(C.lower_bound("ghost"), C.upper_bound("spook"), out);
    cout << endl;
    
    
    

    return 0;
}
