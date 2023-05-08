//
// Created by guido on 5/7/2023.
//

#ifndef EXAM2_CHEMELEMENT_H
#define EXAM2_CHEMELEMENT_H

#include <iostream>

class ChemElement {
private:
    static const int MAX = 3;
    char symbol[MAX];
    double mass;
    int state;
    int type;
    char discoverer[100];
    int discoveredYear;

public:
    // Default Constructor
    ChemElement();

    // Setters
    const char* getSymbol() const;
    double getMass() const;
    int getState() const;
    int getType() const;
    const char* getDiscovered() const;
    int getDiscoveredYears() const;

    // Getters
    void setSymbol(const char* symbol);
    void setMass(double mass);
    void setState(int state);
    void setType(int type);
    void setDiscoverer(const char* discoverer);
    void setDiscoveredYear(int discoveredYear);

    // Overloaded Operators
    bool operator<(const ChemElement& other) const;
    bool operator==(ChemElement& other) const;


    friend std::ostream& operator<<(std::ostream& os, const ChemElement& chemElement);
    friend std::istream& operator>>(std::istream& is, ChemElement& chemElement);

};


#endif //EXAM2_CHEMELEMENT_H
