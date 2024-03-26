#include <iostream>
using namespace std;
int main()
{
    cout << "Home task #6.2\n\n";
    const int time = 28800;
    int sec, hour;
    cout << "Enter time in seconds: ";
    cin >> sec;
    hour = (time - sec) / 3600;
    cout << "Until the end of the working day " << hour << " hours\n";
    return 0;
}