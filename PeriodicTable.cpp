//
// Created by guido on 5/7/2023.
//

#include "PeriodicTable.h"

PeriodicTable::PeriodicTable() {
    currentIndex = 0;
}

PeriodicTable::PeriodicTable(const PeriodicTable &other) {
    currentIndex = other.currentIndex;
    for (int i = 0; i < currentIndex; i++) {
        arrayElement[i] = other.arrayElement[i];
    }
}

PeriodicTable PeriodicTable::operator++() {
    currentIndex++;
    return *this;
}

PeriodicTable PeriodicTable::operator++(int) {
    PeriodicTable temp = *this;
    currentIndex++;
    return temp;
}

PeriodicTable PeriodicTable::operator--() {
    currentIndex--;
    return *this;
}

PeriodicTable PeriodicTable::operator--(int) {
    PeriodicTable temp = *this;
    currentIndex--;
    return temp;
}

bool PeriodicTable::addElement(const ChemElement &element) {
    if (currentIndex < MAX) {
        arrayElement[currentIndex] = element;
        currentIndex++;
        return true;
    }
    return false;
}

// Atomic Number????
bool PeriodicTable::removeElement(int atomicNumber) {

}

// Atomic Number????
bool PeriodicTable::updateElement(const ChemElement &element) {

}

// Atomic Number????
const ChemElement &PeriodicTable::getElementByAtomicNumber(int atomicNumber) const {

}

const ChemElement &PeriodicTable::getElementBySymbol(std::string symbol) const {
    for (int i = 0; i < currentIndex; i++) {
        if (arrayElement[i].getSymbol() == symbol) {
            return arrayElement[i];
        }
    }
}

void PeriodicTable::setCurrentIndex(int currentIndex) {
    PeriodicTable::currentIndex = currentIndex;
}

int PeriodicTable::getCurrentindex() const {
    return currentIndex;
}

void PeriodicTable::displayAllElements(std::ostream &os) const {
    for (int i = 0; i < currentIndex; i++) {
        os << arrayElement[i] << std::endl;
    }
}

void PeriodicTable::displayAllElementsByType(std::ostream &os, int type) const {
    for (int i = 0; i < currentIndex; i++) {
        if (arrayElement[i].getType() == type) {
            os << arrayElement[i] << std::endl;
        }
    }
}

void PeriodicTable::displayAllElementsByState(std::ostream &os, int state) const {
    for (int i = 0; i < currentIndex; i++) {
        if (arrayElement[i].getState() == state) {
            os << arrayElement[i] << std::endl;
        }
    }
}

void PeriodicTable::displayPeriodicTable(std::ostream &os) const {
    for (int i = 0; i < currentIndex; i++) {
        os << arrayElement[i] << std::endl;
    }
}

void PeriodicTable::displaySizeOf(std::ostream &os) const {
    os << "Current size of the array is: " << currentIndex << std::endl;
}

std::ostream &operator<<(std::ostream &os, const PeriodicTable &periodicTable) {
    periodicTable.displayAllElements(os);
    return os;
}

std::istream &operator>>(std::istream &is, PeriodicTable &periodicTable) {
    ChemElement temp;
    is >> temp;
    periodicTable.addElement(temp);
    return is;
}



















