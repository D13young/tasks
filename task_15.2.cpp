#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    cout << "Home task #15.2\n\n";
    const int n = 10;
    int a, b, s = 0, level;
    int arr[n];
    srand(time(NULL));
    cout << "Enter the start of the range: ";
    cin >> a;
    cout << "Enter the end of the range: ";
    cin >> b;
    cout << "Enter level: ";
    cin >> level;
    cout << "===============================================\nArray: ";
    for (int i = 0; i < n; i++) {
        arr[i] = a + rand() % (b - a);
        cout << arr[i] << ", ";
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] < level) s += arr[i];
    }
    cout << "\nS = " << s << "\n";
    return 0;
}