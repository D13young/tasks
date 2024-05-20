#include <iostream>
using namespace std;
int main()
{
    cout << "Home task #17.2\n\n";
    const int n = 10;
    int arr[n], temp, step;
    cout << "Please, enter elements of the array.\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "\n";
    for (int i = 1; i < n; ++i) {
        step = 0;
        for (int r = 0; r < n - i; r++) {
            if (arr[r] > arr[r + 1]) {
                temp = arr[r];
                arr[r] = arr[r + 1];
                arr[r + 1] = temp;
                step++;
            }
        }
        if (step == 0) {
            cout << "The sorting process is stoped at " << i << " step\n";
            break;
        }
    }
    cout << "arr[10] = ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ", ";
    }
    cout << "\n";
    return 0;
}