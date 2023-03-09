#include <iostream>
#include <string>
using namespace std;

class Basic {
public:
    std::string name;
    int Z;
    std::string type;
    double melting_point;
    double boiling_point;

    Basic(std::string name, int Z, std::string type, double melting_point, double boiling_point) {
        this->name = name;
        this->Z = Z;
        this->type = type;
        this->melting_point = melting_point;
        this->boiling_point = boiling_point;
    }
     void Print() {
        cout << "Element: " << name << std::endl;
        cout << "Type: " << type << std::endl;
        cout << "Melting Point: " << melting_point << " K" << std::endl;
        cout << "Boiling Point: " << boiling_point << " K" << std::endl;
    }

};

int main() {
    Basic oxygen("Oxygen", 8, "Non-metal", 54.36, 90.188);
    Basic iron("Iron", 26, "Metal", 1811, 3134);
    Basic gold("Gold", 79, "Metal", 1337.33, 3243);
    oxygen.Print();
    iron.Print();
    gold.Print();
    Basic elements[6] = {
        oxygen,
        iron,
        gold,
        Basic("Hydrogen", 1, "Non-metal", 13.99, 20.271),
        Basic("Bromine", 35, "Non-metal", 265.8, 332.0),
        Basic("Mercury", 80, "Metal", 234.3210, 629.88)
    };
    cout << endl << "Printing all elements:" << endl;
    for (Basic& element : elements) {
        element.Print();
        cout << endl;
    }

    cout << endl << "Printing all metals:" << endl;
    for (Basic& element : elements) {
        if (element.type == "Metal") {
            cout << element.name << endl;
        }
    }

    cout << endl << "Printing elements with melting point below 0°C and boiling point above 0°C:" << endl;
    for (Basic& element : elements) {
        if (element.melting_point < 273.16 && element.boiling_point > 273.16) {
            element.Print();
            cout << endl;
        }
    }

    return 0;
}
