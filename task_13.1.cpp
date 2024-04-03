#include <iostream>
using namespace std;
int main()
{
    cout << "Home task #13.1\n\n";
    int a, ar, n = 0, sum = 0, z = 0;
    cout << "Enter number: ";
    cin >> a;
    cout << "-------------------\n";
    ar = a;
    while (a) {
        if (a % 10 == 0)
            z++;
        a /= 10;
    }
    cout << "number of zeros: " << z;
    for (n = 0; ar > 0; n++) {
        sum += ar % 10;
        ar /= 10;
    }
    cout << "\nnumber of digits: " << n;
    cout << "\nsum of the numbers: " << sum;
    cout << "\narithmetic mean: " << (double)sum / n << "\n";
    return 0;
}