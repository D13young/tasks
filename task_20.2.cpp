#include <iostream>
using namespace std;
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
int* removePrimes(int* arr, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (!isPrime(arr[i])) {
            count++;
        }
    }
    int* newArr = new int[count];
    int index = 0;
    for (int i = 0; i < size; i++) {
        if (!isPrime(arr[i])) {
            newArr[index++] = arr[i];
        }
    }
    return newArr;
}
int main() {
    cout << "Home task #20.2\n\n";
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int* arr = new int[size];
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "arr[] = { ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << ", ";
    }
    int* newArr = removePrimes(arr, size);
    int newSize = 0;
    while (newArr[newSize] != '\0') {
        if (newArr[newSize] <= 0) break;
        newSize++;
    }
    cout << "}\n----------------------------------------\nnewArr[] = { ";
    for (int i = 0; i < newSize; i++) {
        cout << newArr[i] << ", ";
    }
    cout << "}\n";
    delete[] arr;
    delete[] newArr;
    return 0;
}