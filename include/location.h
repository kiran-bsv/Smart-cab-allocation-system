#ifndef LOCATION_H
#define LOCATION_H

#include <bits/stdc++.h>

using namespace std;

class Location {
private:
    double latitude;
    double longitude;

public:
    Location(double lat, double lon);
    double getLatitude() const;
    double getLongitude() const;
};

#endif // LOCATION_H
