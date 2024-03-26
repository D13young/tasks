#include <iostream>
using namespace std;
int main()
{
    cout << "Home test #5.1 \n\n";
    double speed, time; int distance;
    cout << "Enter distance (in km): ";
    cin >> distance;
    cout << "Enter time (in minutes): ";
    cin >> time;
    speed = (distance / time) * 60;
    cout << "You need to go: " << speed << " km/h\n";
    return 0;
}
