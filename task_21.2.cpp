#include <iostream>
#include <algorithm>
#include <unordered_set>

using namespace std;

int main() {
    cout << "Home task #21.2\n\n";
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
    unordered_set<int> setA(A, A + M);
    unordered_set<int> setB(B, B + N);
    unordered_set<int> uniqueElements;
    for (int element : setA) {
        if (setB.find(element) == setB.end()) {
            uniqueElements.insert(element);
        }
    }
    for (int element : setB) {
        if (setA.find(element) == setA.end()) {
            uniqueElements.insert(element);
        }
    }
    int sizeC = uniqueElements.size();
    int* C = new int[sizeC];
    int i = 0;
    for (int element : uniqueElements) {
        C[i++] = element;
    }
    cout << "Array C: ";
    for (int i = 0; i < sizeC; i++) {
        cout << C[i] << " ";
    }
    cout << endl;

    delete[] A;
    delete[] B;
    delete[] C;

    return 0;
}
