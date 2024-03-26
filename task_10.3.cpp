#include <iostream>
using namespace std;
int main()
{
    cout << "Home task #10.3\n\n";
    double res = 0;
    for (int i = 1; i <= 1000; i++) {
        res += i;
    }
    res /= 1000;
    cout << "Arithmetic average number from 1 to 1000: " << res << "\n";
    return 0;
}