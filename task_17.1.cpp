#include <iostream>
using namespace std;
int main() {
    cout << "Home task #17.1\n\n";
    const int n = 36;
    int sysar[n];
    int num, sysnum, i = 0, r;
    int ost, num1, resnum = 0, count = 1;
    cout << "Enter integer number: ";
    cin >> num;
    cout << "Enter system number: ";
    cin >> sysnum;
    while (num > 0) {
        num1 = num;
        num /= sysnum;
        ost = num1 - num * sysnum;
        sysar[i] = ost;
        i++;
    }
    i--;
    for (; i >= 0; i--) {
        if (sysar[i] >= 10) { r = sysar[i] + 55; cout << char(r); }
        else  cout << sysar[i];
    }
    cout << "\n";
    return 0;
}