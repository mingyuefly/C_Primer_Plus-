//
//  coordin.h
//  dijiuzhang
//
//  Created by mingyue on 15/12/28.
//  Copyright © 2015年 G. All rights reserved.
//

#ifndef coordin_h
#define coordin_h

struct polar{
    double distance;
    double angle;
};

struct rect{
    double x;
    double y;
};

polar rect_to_polar(rect xypos);
void show_polar(polar dapos);


#endif /* coordin_h */
