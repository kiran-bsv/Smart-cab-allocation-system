#include "employee.h"

Employee::Employee(int id, const Location& loc) : id(id), location(loc) {}

int Employee::getId() const {
    return id;
}

Location Employee::getLocation() const {
    return location;
}
