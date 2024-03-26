#include <iostream>
using namespace std;
int main()
{
    cout << "Home task #11.2\n\n";
    int n1, n2, n3, summ = 0;
    for (int i = 100; i <= 999; i++) {
        n3 = i % 10;
        n2 = (i / 10) % 10;
        n1 = (i / 10) / 10;
        if (n1 != n2 && n1 != n3 && n2 != n3) {
            summ++;
            cout << i << "\n";
        }
    }
    cout << "Number of different numbers: " << summ << "\n";
    return 0;
}