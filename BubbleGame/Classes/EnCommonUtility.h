//
//  EnCommonUtility.h
//  imeeta
//
//  Created by sixiang on 13-9-11.
//
//

#ifndef __imeeta__EnCommonUtility__
#define __imeeta__EnCommonUtility__

#include "cocos2d.h"
USING_NS_CC;

#include<iostream>
#include <iomanip>

namespace EnCommonUtility {
 
    Size EnSizeMake(float w, float h);
    Size EnSizeMakeUpDown(Size size,Vec2 position);
    //相对于屏幕上方、右侧保持固定距离//
    Vec2 enccpUp(float w, float h);
    //相对于屏幕下方、左侧保持固定距离//
    Vec2 enccpDown(float w, float h);
    //左上角相对于下方或右侧的位置不变//
    Vec2 enccpTopUp(Size s,float w, float h);
    //左上角相对于上方或左侧的位置不变//
    Vec2 enccpUpDown(Size s,float w, float h);
    //左下角相对于一个空间，拉伸后居中显示
    Vec2 enccpDownMiddle(Vec2 point,Size size);
    float EnPointX(float X);
    float EnPointY(float y);
    float EnPointWithoutScaleX(float x);
    float EnPointWithoutScaleY(float y);
}




#endif /* defined(__imeeta__EnCommonUtility__) */
