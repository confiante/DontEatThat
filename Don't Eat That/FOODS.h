//
//  FOODS.h
//  Don't Eat That!
//  Function declarations...
//  Created by ISMD on 3/13/15.
//  Copyright (c) 2015 ISMD. All rights reserved.
//




#include <iostream>
#include <string>

using namespace std;

#ifndef FOODS_H
#define FOODS_H

class FOODS
{
public:
   FOODS(); // CONSTRUCTOR
    FOODS(double, double);
private:

   double calories;
   double servings;

};

#endif
