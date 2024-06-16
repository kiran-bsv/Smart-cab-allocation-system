#include "distance_calculator.h"

double DistanceCalculator::calculateDistance(const Location& loc1, const Location& loc2) {
    return sqrt(pow(loc1.getLatitude() - loc2.getLatitude(), 2) + pow(loc1.getLongitude() - loc2.getLongitude(), 2));
}
