#include <iostream>
#include <fstream>

#include "PeriodicTable.h"
#include "ChemElement.h"
#include "Unit.h"

using namespace std;

int main() {
    char optionSelected;


    do {

        cout << "   In chemistry, the periodic table is a tabular display of the chemical elements. It is widely used \n";
        cout << "   in chemistry, physics, and other sciences, and is generally seen as an icon of chemistry. It is a graphic \n";
        cout << "   formulation of the periodic law, which states that the properties of the chemical elements exhibit a \n";
        cout << "   periodic dependence on their atomic numbers.\n\n";

        cout << "   CMPR121 EXAM 2 - Periodic Table of Elements (using class ADT)\n";
        cout << string(50, '_') << "\n";
        cout << "        A. Read a data binary file into the periodic table\n";
        cout << "        B. Add a new or update an element to the periodic table\n";
        cout << "        C. Remove an element from the periodic table\n";
        cout << "        D. Display ALL elements with attributes from the periodic table\n";
        cout << "        E. Display ALL elements' by the state from the periodic table(5pts EXTRA)\n";
        cout << "        F. Display ALL elements by the type from the periodic table(5pts EXTRA)\n";
        cout << "        G. Get, set and display the current element by its atomic# from the periodic table\n";
        cout << "        H. Get and display the element by symbol from the periodic table (5pts EXTRA)\n";
        cout << "        I. Display pre or post - increment(++) or decrement(--)) of the current element from the periodic table\n";
        cout << "        J. Save the periodic table into a binary file\n";
        cout << "        K. Display the size of the Periodic Table (5pts EXTRA)\n";
        cout << string(50, '_') << "\n";
        cout << "           X. Exit the program\n";
        cout << string(50, '_') << "\n";
        cout << "   Enter your option: ";

        cin >> optionSelected;

    } while (toupper(optionSelected) !='X');

    return 0;
}
