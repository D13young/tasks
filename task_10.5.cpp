#include <iostream>
using namespace std;
int main()
{
    cout << "Home task #10.5\n\n";
    int k;
    cout << "Enter number: ";
    cin >> k;
    for (int i = 1; i < 10; i++) {
        cout << k << " * " << i << " = " << k * i << "\n";
    }
    return 0;
}