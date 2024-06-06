#include <iostream>
using namespace std;
int* allocateMemory(int size) {
    return new int[size];
}
void initArray(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = 0;
    }
}
void printArray(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void deleteArray(int* arr) {
    delete[] arr;
}
void addElement(int*& arr, int& size, int element) {
    int* newArr = new int[size + 1];
    for (int i = 0; i < size; ++i) {
        newArr[i] = arr[i];
    }
    newArr[size] = element;
    delete[] arr;
    arr = newArr;
    size++;
}
void insertElement(int*& arr, int& size, int index, int element) {
    int* newArr = new int[size + 1];
    for (int i = 0; i < index; ++i) {
        newArr[i] = arr[i];
    }
    newArr[index] = element;
    for (int i = index; i < size; ++i) {
        newArr[i + 1] = arr[i];
    }
    delete[] arr;
    arr = newArr;
    size++;
}
void removeElement(int*& arr, int& size, int index) {
    if (size == 0 || index < 0 || index >= size) {
        cout << "Invalid index for removal." << endl;
        return;
    }
    int* newArr = new int[size - 1];
    for (int i = 0, j = 0; i < size; ++i) {
        if (i != index) {
            newArr[j] = arr[i];
            j++;
        }
    }

    delete[] arr;
    arr = newArr;
    size--;
}
int main() {
    cout << "Home task #20.1\n\n";
    int* arr = nullptr;
    int size = 0;
    arr = allocateMemory(5);
    initArray(arr, 5);
    addElement(arr, size, 1);
    addElement(arr, size, 2);
    addElement(arr, size, 3);
    addElement(arr, size, 4);
    addElement(arr, size, 5);
    cout << "Initial Array: ";
    printArray(arr, size);

    insertElement(arr, size, 1, 15);
    cout << "Array after insertion: ";
    printArray(arr, size);

    removeElement(arr, size, 3);
    cout << "Array after removal: ";
    printArray(arr, size);

    deleteArray(arr);
    cout << "Array after delete: ";
    printArray(arr, size);
    return 0;
}