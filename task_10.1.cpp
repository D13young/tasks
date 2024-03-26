#include <iostream>
using namespace std;
int main()
{
    cout << "Home task #10.1\n\n";
    int a;
    cout << "enter number: ";
    cin >> a;
    int sum = 0;
    for (int i = a; i <= 500; i++) {
        sum += i;
    }
    cout << sum << "\n";
    return 0;
}