#include "location.h"

Location::Location(double lat, double lon) : latitude(lat), longitude(lon) {}

double Location::getLatitude() const {
    return latitude;
}

double Location::getLongitude() const {
    return longitude;
}
