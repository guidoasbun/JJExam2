//
// Created by guido on 5/7/2023.
//

#ifndef EXAM2_PERIODICTABLE_H
#define EXAM2_PERIODICTABLE_H

#include <iostream>
#include "ChemElement.h"

class PeriodicTable {
private:
    static const int MAX = 118;
    ChemElement arrayElement[MAX];
    int currentIndex;

public:
    PeriodicTable();
    PeriodicTable(const PeriodicTable& other);

    PeriodicTable operator++();
    PeriodicTable operator++(int);

    PeriodicTable operator--();
    PeriodicTable operator--(int);

    bool addElement(const ChemElement& element);
    bool removeElement(int atomicNumber);
    bool updateElement(const ChemElement& element);

    const ChemElement& getElementByAtomicNumber(int atomicNumber) const;
    const ChemElement& getElementBySymbol(std::string symbol) const;

    void setCurrentIndex(int currentIndex);
    int getCurrentindex() const;

    void displayAllElements(std::ostream& os) const;
    void displayAllElementsByType(std::ostream& os, int type) const;
    void displayAllElementsByState(std::ostream& os, int state) const;
    void displayPeriodicTable(std::ostream& os) const;
    void displaySizeOf(std::ostream& os) const;

    friend std::ostream& operator<<(std::ostream& os, const PeriodicTable& periodicTable);
    friend std::istream& operator>>(std::istream& is, PeriodicTable& periodicTable);
};


#endif //EXAM2_PERIODICTABLE_H
