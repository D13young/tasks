#include <iostream>
using namespace std;
int main()
{
    cout << "Home test #5.2 \n\n";
    int starth, startm, starts, endh, endm, ends, price;
    float starttime, endtime, timetotal, totalcoast;
    cout << "Enter the start of the ride: \n";
    cout << "Hourse: ";
    cin >> starth;
    cout << "Minutes: ";
    cin >> startm;
    cout << "Seconds: ";
    cin >> starts;
    cout << "Enter the end of the ride: \n";
    cout << "Hourse: ";
    cin >> endh;
    cout << "Minutes: ";
    cin >> endm;
    cout << "Seconds: ";
    cin >> ends;
    price = 2;
    starttime = (starth * 60) + startm + (starts / 60);
    endtime = (endh * 60) + endm + (ends / 60);
    timetotal = endtime - starttime;
    totalcoast = timetotal * price;
    cout << "Total cost of the ride: " << totalcoast << " UAH\n";
    return 0;
}

