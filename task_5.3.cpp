#include <iostream>
using namespace std;
int main()
{
    cout << "Home test #5.3 \n\n";
    double dist, gascons, AI92, AI95, AI98, totalcoast92, totalcoast95, totalcoast98;
    cout << "Enter distance (km): ";
    cin >> dist;
    cout << "Enter gasoline consumption: ";
    cin >> gascons;
    cout << "Enter cost of gasoline\n";
    cout << "AI92: ";
    cin >> AI92;
    cout << "AI95: ";
    cin >> AI95;
    cout << "AI98: ";
    cin >> AI98;
    totalcoast92 = dist * AI92 * gascons / 100;
    totalcoast95 = dist * AI95 * gascons / 100;
    totalcoast98 = dist * AI98 * gascons / 100;
    cout << "|gasoline     |coast|\n";
    cout << "Gasoline AI92: " << totalcoast92 << "\n";
    cout << "Gasoline AI95: " << totalcoast95 << "\n";
    cout << "Gasoline AI98: " << totalcoast98 << "\n";
    return 0;
}


