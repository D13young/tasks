#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    cout << "Home task #14.1\n\n";
    int line, direction;
    char symbol, speed;
    cout << "Enter symbol: ";
    cin >> symbol;
    cout << "Enter the length of the line: ";
    cin >> line;
    cout << "1 - horizontal line \n2 - vertical line\nMake a choice: ";
    cin >> direction;
    cout << "f - Fast \nm - Medium\ns - Slowly\nMake a choice: ";
    cin >> speed;
    cout << "\n";
    switch (direction) {
    case 1: {
        for (int i = 0; i < line; i++) {
            if (speed == 'f') {Sleep(20); cout << symbol;}
            else if (speed == 'm') {Sleep(400); cout << symbol;}
            else if (speed == 's') {Sleep(1000); cout << symbol;}
        }
    }break;
    case 2: {
        for (int j = 0; j < line; j++) {
            if (speed == 'f') {Sleep(20); cout << symbol << "\n";}
            else if (speed == 'm') {Sleep(400); cout << symbol << "\n"; }
            else if (speed == 's') {Sleep(1000); cout << symbol << "\n";}
        }
    }break;
    }
    cout << "\n";
    return 0;
}