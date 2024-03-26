#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "Home task #11.5\n\n";
    int num, num1;
    cout << "Enter number: ";
    cin >> num;
    num1 = num;
    int sum = 0;
    while (num1 > 0) {
        sum += num1 % 10;
        num1 /= 10;
    }

    int sumcube = pow(sum, 3);

    if (sumcube == num * num) cout << "The cube of the sum of the digits is equal to " << num * num << "\n";
    else cout << "The cube of the sum of the digits is not equal " << num * num << "\n";
    return 0;
}