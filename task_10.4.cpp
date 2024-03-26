#include <iostream>
using namespace std;
int main()
{
    cout << "Home task #10.4\n\n";
    int a;
    unsigned int x = 1;
    cout << "Enter a number up to 20: ";
    cin >>a;
    if (a < 1 || a > 20) {
        cout << "Error, is this number greater than 0 or greater than 20";
    }
    else {
        for (int i = a; i <= 20; i++) {
        x *= i;
        }
        cout << "Product of numbers: " << x << "\n";
    }
    return 0;
}