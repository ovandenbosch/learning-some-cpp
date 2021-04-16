#include <iostream>
using namespace std;

class Chef {
    public:
    void makeChicken() {
        cout << "The chef makes chicken" << endl;
    }

    void makeSalad() {
        cout << "The chef makes salad" << endl;
    }

    void makeSpecDish() {
        cout << "The chef makes bbq ribs (mmm tasty)" << endl;
    }

};

class ItalianChef : public Chef{
    public:
    void makePasta() {
        cout << "The chef makes pasta" << endl;
    }    

    void makeSpecDish() {
        cout << "The chef makes chicken parm" << endl;
    }
};

int main() {

    Chef chef;
    chef.makeSpecDish();

    ItalianChef giuseppe;
    giuseppe.makeSpecDish();

    return 0;
}