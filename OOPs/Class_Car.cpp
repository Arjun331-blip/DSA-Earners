#include <iostream>
using namespace std;

class Car{
    public: 
    string name;
    int power;
    float mileage;
    bool isE20Compatible;
    string color;
    int seat;
    int price;
    
    
};

int main() {
    Car c1;
    c1.name = "kia Sone";
    c1.power = 118;
    c1.mileage = 9.2;
    c1.isE20Compatible = true;

    Car c2 = {"Toyota Fortuner",200, 7.6, false};
    cout << c2.name;
    return 0;
}