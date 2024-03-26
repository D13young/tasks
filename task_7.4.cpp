#include <iostream>
using namespace std;
int main()
{
    cout << "Home task #7.4\n\n";
    const int tank = 300;
    double distab, distbc, cargo, fuelras, fuelrasab, fuelrasbc, fuelneed;
    cout << "Enter distance A to B: ";
    cin >> distab;
    cout << "Enter distance B to C: ";
    cin >> distbc;
    cout << "Enter cargo: ";
    cin >> cargo;
    if (cargo <= 500) {
        fuelras = 1;
    }
    else if (cargo <= 1000) {
        fuelras = 4;
    }
    else if (cargo <= 1500) {
        fuelras = 7;
    }
    else if (cargo <= 2000) {
        fuelras = 9;
    }
    else if (cargo > 2000) {
        cout << "Error, overload\n";
        return 0;
    }
    fuelrasab = fuelras * distab;
    fuelrasbc = fuelras * distbc;
    fuelneed = fuelrasbc - (tank - fuelrasab);
    if (fuelrasab > tank || fuelrasbc > tank) {
        cout << "Error, not enough fuel\n";
    }
    else {
        cout << "Need fuel: " << fuelneed << "\n";
    }
    return 0;
}