#ifndef DISTANCE_CALCULATOR_H
#define DISTANCE_CALCULATOR_H

#include <bits/stdc++.h>
#include "location.h"

using namespace std;

class DistanceCalculator {
public:
    static double calculateDistance(const Location& loc1, const Location& loc2);
};

#endif // DISTANCE_CALCULATOR_H
