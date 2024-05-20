#include <iostream>
using namespace std;

int bubble_sort(int* arr, int n) {
    int count = 0;
    for (int i = n - 1; i > 0; i--) {
        bool flg = true;
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                flg = false;
                count++;
            }
        }
        if (flg) { break; }
    }
    return count;
}
int selection_sort(int* arr, int n) {
    int count = 0;
    for (int i = n - 1; i > 0; i--) {
        int k = i;
        for (int j = 0; j < i; j++) {
            if (arr[k] < arr[j]) { k = j; }
        }
        if (k != i) {
            int tmp = arr[i];
            arr[i] = arr[k];
            arr[k] = tmp;
            count++;
        }
    }
    return count;
}
int a[1000], b[1000];
int main() {
    cout << "Home task #17.4\n\n";
    int cb = 0, cs = 0;
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 1000; j++) { a[j] = b[j] = rand() % 201 - 100; }
        cb += bubble_sort(a, 1000);
        cs += selection_sort(b, 1000);
    }
    cout << "Nuber of permutation for bubble sort: " << cb / 10.0 << "\n" << "Nuber of permutation for selection sort: " << cs / 10.0 << "\n";
    return 0;
}