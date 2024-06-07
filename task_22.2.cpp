#include <iostream>
#include <string>
using namespace std;

struct Car {
    double length = 0;
    double groundClearance = 0;
    double engineVolume = 0;
    int enginePower = 0;
    double wheelDiameter = 0;
    string color;
    string transmissionType;
};

void setValues(Car& car, double length, double groundClearance, double engineVolume, int enginePower, double wheelDiameter, string color, string transmissionType) {
    car.length = length;
    car.groundClearance = groundClearance;
    car.engineVolume = engineVolume;
    car.enginePower = enginePower;
    car.wheelDiameter = wheelDiameter;
    car.color = color;
    car.transmissionType = transmissionType;
}

void displayValues(Car car) {
    cout << "Length: " << car.length << " m" << endl;
    cout << "Vehicle clearance: " << car.groundClearance << " m" << endl;
    cout << "Engine capacity: " << car.engineVolume << " L" << endl;
    cout << "Engine power: " << car.enginePower << " h/p" << endl;
    cout << "Wheel diameter: " << car.wheelDiameter << " inches" << endl;
    cout << "Color: " << car.color << endl;
    cout << "Transmission type: " << car.transmissionType << endl;
}

void searchValue(Car car, string value) {
    if (value == "Length") {cout << "Length auto: " << car.length << " m" << endl;}
    else if (value == "Vehicle clearance") {cout << "Vehicle clearance: " << car.groundClearance << " m" << endl;}
    else if (value == "Engine capacity") {cout << "Engine capacity: " << car.engineVolume << " L" << endl;}
    else if (value == "Engine power") {cout << "Engine power: " << car.enginePower << "h/p" << endl;}
    else if (value == "Wheel diameter") {cout << "Wheel diameter: " << car.wheelDiameter << " inches" << endl;}
    else if (value == "Color") {cout << "Color: " << car.color << endl;}
    else if (value == "Transmission type") {cout << "Transmission type: " << car.transmissionType << endl;}
    else {cout << "Value was not found" << endl;}
}

int main() {
    cout << "Home task #22.2\n\n";
    Car myCar;
    setValues(myCar, 4.5, 0.15, 2.0, 150, 17.0, "Blue", "Auto");
    cout << "Parameters of car:" << endl;
    displayValues(myCar);
    cout << endl;
    searchValue(myCar, "Color");
    return 0;
}