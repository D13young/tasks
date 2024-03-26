#include <iostream>
using namespace std;
int main()
{
    cout << "Home task #7.1\n\n";
    int num;
    cout << "Enter a six-digit number: ";
    cin >> num;
    if (num > 99999 && num < 1000000) {
        if (num / 100000 + num / 10000 % 10 + num / 1000 % 10 == num / 100 % 10 + num / 10 % 10 + num % 10)
            cout << "Your ticket is lucky";
        else cout << "Your ticket is not lucky";
    }
    else {
        cout << "Error, not a six digit number\n\n";
    }
    return 0;
}