#include <iostream>
using namespace std;
int main()
{
    cout << "Home task #11.3\n\n";
    int a = 0, k;
    cout << "Enter number: ";
    cin >> k;
    while (k > 0) {
        if (k % 10 != 3 && k % 10 != 6) {
            a *= 10;
            a += k % 10;
        }
        k /= 10;
    }
    cout << "Your number: ";
    while (a > 0) {
        cout << a % 10;
        a /= 10;
    }
    cout << "\n";
    return 0;
}