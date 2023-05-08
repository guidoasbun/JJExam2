//
// Created by guido on 5/7/2023.
//

#include <cstring>
#include "Unit.h"

Unit::Unit() {
    value = 0;
    name[0] = '\0';
    objectCount++;
}

void Unit::setValue(int value) {
    this->value = value;
}

void Unit::setName(const char *name) {
    strcpy(this->name, name);
    this->name[49] = '\0';
}

const char *Unit::getName() const {
    return name;
}

int Unit::getValue() const {
    return value;
}

std::ostream &operator<<(std::ostream &os, const Unit &unit) {
    os << "Name: " << unit.getName() << " Value: " << unit.getValue();
    return os;
}




