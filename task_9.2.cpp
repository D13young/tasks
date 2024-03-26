#include <iostream>
using namespace std;
int main ()
{
    cout << "Home task #9.2\n\n";
    int outcall, incall, callmin;
    double MTS = 2.9, Beeline = 3.7, Megafon = 4.5;
    cout << "Select a mobile operator for outgoing calls\n";
    cout << " #1 - MTS\n";
    cout << " #2 - Beeline\n";
    cout << " #3 - Megafon\n";
    cin >> outcall;
    cout << "Select a mobile operator for incoming call\n";
    cout << " #1 - MTS\n";
    cout << " #2 - Beeline\n";
    cout << " #3 - Megafon\n";
    cin >> incall;
    cout << "Enter call duration in minutes: \n";
    cin >> callmin;
    
    if (outcall == incall) {
        cout << "This call is free\n";
    }
    else if (outcall == 1) {
        cout << "You need to pay: " << MTS * callmin << "$\n";
    }
    else if (outcall == 2) {
        cout << "You need to pay: " << Beeline * callmin << "$\n";
    }
    else if (outcall == 3) {
        cout << "You need to pay: " << Megafon * callmin << "$\n";
    }
    else {
        cout << "Input is not correct\n";
    }
    return 0;
}