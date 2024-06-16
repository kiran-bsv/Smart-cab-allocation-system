#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <bits/stdc++.h>
#include "location.h"

using namespace std;

class Employee {
private:
    int id;
    Location location;

public:
    Employee(int id, const Location& loc);
    int getId() const;
    Location getLocation() const;
};

#endif // EMPLOYEE_H
