//
// Created by guido on 5/7/2023.
//

#include "ChemElement.h"
#include <cstring>

ChemElement::ChemElement() {
    symbol[0] = '\0';
    mass = 0;
    state = 0;
    type = 0;
    discoverer[0] = '\0';
    discoveredYear = 0;
}

const char *ChemElement::getSymbol() const {
    return symbol;
}

double ChemElement::getMass() const {
    return mass;
}

int ChemElement::getState() const {
    return state;
}

int ChemElement::getType() const {
    return type;
}

const char *ChemElement::getDiscovered() const {
    return discoverer;
}

int ChemElement::getDiscoveredYears() const {
    return discoveredYear;
}

void ChemElement::setSymbol(const char *symbol) {
    strcpy(this->symbol, symbol);
    this->symbol[2] = '\0';
}

void ChemElement::setMass(double mass) {
    this->mass = mass;
}

void ChemElement::setState(int state) {
    this->state = state;
}

void ChemElement::setType(int type) {
    this->type = type;
}

void ChemElement::setDiscoverer(const char *discoverer) {
    strcpy(this->discoverer, discoverer);
    this->discoverer[99] = '\0';
}

void ChemElement::setDiscoveredYear(int discoveredYear) {
    this->discoveredYear = discoveredYear;
}

bool ChemElement::operator<(const ChemElement &other) const {
    return strcmp(symbol, other.symbol) < 0;
}

bool ChemElement::operator==(ChemElement &other) const {
    return strcmp(symbol, other.symbol) == 0;
}

std::ostream &operator<<(std::ostream &os, const ChemElement &chemElement) {
    os << "Symbol: " << chemElement.symbol << std::endl;
    os << "Mass: " << chemElement.mass << std::endl;
    os << "State: " << chemElement.state << std::endl;
    os << "Type: " << chemElement.type << std::endl;
    os << "Discoverer: " << chemElement.discoverer << std::endl;
    os << "Discovered Year: " << chemElement.discoveredYear << std::endl;
    return os;
}

std::istream &operator>>(std::istream &is, ChemElement &chemElement) {
    std::cout << "Enter the symbol: ";
    is >> chemElement.symbol;
    std::cout << "Enter the mass: ";
    is >> chemElement.mass;
    std::cout << "Enter the state: ";
    is >> chemElement.state;
    std::cout << "Enter the type: ";
    is >> chemElement.type;
    std::cout << "Enter the discoverer: ";
    is >> chemElement.discoverer;
    std::cout << "Enter the discovered year: ";
    is >> chemElement.discoveredYear;
    return is;
}

















