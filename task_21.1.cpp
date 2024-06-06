#include <iostream>
#include <algorithm>
#include <unordered_set>

using namespace std;

int main() {
    cout << "Home task #21.1\n\n";
    int M, N;
    cout << "Enter size of array A (M): ";
    cin >> M;
    cout << "Enter size of array B (N): ";
    cin >> N;

    int* A = new int[M];
    int* B = new int[N];

    cout << "Enter array elements A: ";
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }
    cout << "Enter array elements B: ";
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }
    unordered_set<int> setB(B, B + N);
    int sizeC = 0;
    for (int i = 0; i < M; i++) {
        if (setB.find(A[i]) == setB.end()) {
            sizeC++;
        }
    }
    int* C = new int[sizeC];
    int k = 0;
    for (int i = 0; i < M; i++) {
        if (setB.find(A[i]) == setB.end()) {
            C[k++] = A[i];
        }
    }
    cout << "Array C: ";
    for (int i = 0; i < sizeC; i++) {
        cout << C[i] << " ";
    }
    cout << "\n";

    delete[] A;
    delete[] B;
    delete[] C;

    return 0;
}
