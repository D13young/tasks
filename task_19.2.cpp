#include <iostream>
using namespace std;
void reverseArray(int* arr, int size)
{
    int* start = arr;
    int* end = arr + size - 1;
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int main()
{
    cout << "Home task #19.2\n\n";
    int arr[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);
    reverseArray(arr, size);
    cout << "arr[] = {1, 2, 3, 4, 5}\n";
    cout << "arr[] = {";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << ", ";
    }
    cout << "}\n";
    return 0;
}