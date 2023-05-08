//
// Created by guido on 5/7/2023.
//

#ifndef UNIT_H
#define UNIT_H

#include <iostream>

class Unit {
private:
    // UML states objectCount is static
    int objectCount;
    int value;
    char name[50]{};

public:
    Unit();

    // Seters
    void setValue(int value);
    void setName(const char* name);

    // Getters
    const char* getName() const;
    int getValue() const;

    // Overloaded
    friend std::ostream& operator<<(std::ostream& os, const Unit& unit);

};


#endif //EXAM2_UNIT_H
