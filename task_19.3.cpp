#include <iostream>
using namespace std;
void reverseCopyArray(int* src, int* dest, int size)
{
    int* srcPtr = src + size - 1;
    int* destPtr = dest;

    for (int i = 0; i < size; ++i) {
        *destPtr = *srcPtr;
        srcPtr--;
        destPtr++;
    }
}
int main()
{
    cout << "Home task #19.3\n\n";
    const int size = 5;
    int arr1[size] = { 1, 2, 3, 4, 5 };
    int arr2[size];
    reverseCopyArray(arr1, arr2, size);
    cout << "arr1[] = {";
    for (int i = 0; i < size; ++i) {
        cout << arr1[i] << ", ";
    }
    cout << "}";
    cout << "\narr2[] = {";
    for (int i = 0; i < size; ++i) {
        cout << arr2[i] << ", ";
    }
    cout << "}\n";
    return 0;
}