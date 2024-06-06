#include <iostream>
using namespace std;
int posCount = 0, negCount = 0, zeroCount = 0;
void distributeElements(int arr[], int size, int** posArr, int** negArr, int** zeroArr) {
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            posCount++;
        }
        else if (arr[i] < 0) {
            negCount++;
        }
        else {
            zeroCount++;
        }
    }
    *posArr = new int[posCount];
    *negArr = new int[negCount];
    *zeroArr = new int[zeroCount];
    int posIndex = 0, negIndex = 0, zeroIndex = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            (*posArr)[posIndex++] = arr[i];
        }
        else if (arr[i] < 0) {
            (*negArr)[negIndex++] = arr[i];
        }
        else {
            (*zeroArr)[zeroIndex++] = arr[i];
        }
    }
}

int main() {
    cout << "Home task #20.3\n\n";
    int arr[] = { 5, -3, 0, 2, -1, 0, 4, -2, 1 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int* posArr, * negArr, * zeroArr;
    distributeElements(arr, size, &posArr, &negArr, &zeroArr);
    cout << "arr[] = { 5, -3, 0, 2, -1, 0, 4, -2, 1 }";
    cout << "\n------------------------------------\nPositive elements: ";
    for (int i = 0; i < posCount; i++) {
        cout << posArr[i] << ", ";
    }
    cout << "\n------------------------------------\nNegative elements: ";
    for (int i = 0; i < negCount; i++) {
        cout << negArr[i] << ", ";
    }
    cout << "\n------------------------------------\nZero elements: ";
    for (int i = 0; i < zeroCount; i++) {
        cout << zeroArr[i] << ", ";
    }
    cout << "\n";
    delete[] posArr;
    delete[] negArr;
    delete[] zeroArr;
    return 0;
}