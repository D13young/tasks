#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "Home task #10.2\n\n";
    int x, y;
    double res;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    res = pow(x, y);
    cout << "Result: " << res << "\n";
    return 0;
}