#include <iostream>
using namespace std;
int main()
{
    cout << "Home task #11.1\n\n";
    int n1, n2, n3, res = 0;
    for (int i = 100; i <= 999; i++) {
        int count = 0;
        n3 = i % 10;
        n2 = (i / 10) % 10;
        n1 = (i / 10) / 10;
        if (n1 == n2 && n1 != n3 && n2 != n3) count++;
        if (n1 != n2 && n1 == n3 && n2 != n3) count++;
        if (n1 != n2 && n1 != n3 && n2 == n3) count++;
        if (count == 1) {
            cout << i << "\n";
            res++;
        }
    }
    cout << "Numbers with 2 identical digits: " << res << "\n";
    return 0;
}