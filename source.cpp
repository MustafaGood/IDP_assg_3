#include <iostream>
#include <string>

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

};

int main() {
    Basic oxygen("Oxygen", 8, "Non-metal", 54.36, 90.188);
    Basic iron("Iron", 26, "Metal", 1811, 3134);
    Basic gold("Gold", 79, "Metal", 1337.33, 3243);
    return 0;
}
