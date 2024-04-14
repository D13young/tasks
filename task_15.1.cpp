#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    cout << "Home task #15.1\n\n";
    const int n = 10;
    int max, min, a = 10, b = 20;
    int arr[n];
    srand(time(NULL));
    cout << "Array: ";
    for (int i = 0; i < n; i++) {
        arr[i] = a + rand() % (b - a);
        cout << arr[i] << ", ";
    }
    max = arr[0];
    min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    cout << "\nMin: " << min << " Max: " << max << "\n";
    return 0;
}