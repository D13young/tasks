#include <iostream>
using namespace std;
int main()
{
    cout << "Home task #11.6\n\n";
    int num;
    cout << "Enter number: ";
    cin >> num;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0)
            cout << i << "\n";
    }
    return 0;
}