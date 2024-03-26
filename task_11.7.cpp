#include <iostream>
using namespace std;
int main()
{
    cout << "Home task #11.7\n\n";
    int num1,num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    for (int i = 1; i <= num1&& i <= num2; i++) {
        if (num1%i == 0 && num2%i == 0) cout << i << "\n";
    }
    return 0;
}