//
//  file2.cpp
//  dijiuzhang
//
//  Created by mingyue on 15/12/28.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>
#include <cmath>
#include "coordin.h"

polar rect_to_polar(rect xypos){
    
    using namespace std;
    polar answer;
    
    answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
    answer.angle = atan2(xypos.y, xypos.x);
    
    return answer;
}
void show_polar(polar dapos){

    using namespace std;
    const double Rad_to_deg = 57.29577591;
    
    cout << "distance = " << dapos.distance;
    cout << ", angle = " << dapos.angle * Rad_to_deg;
    cout << " degree\n";

}
