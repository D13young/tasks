#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    cout << "Home tesk # 16.1\n\n";
    const int m1 = 10, m2 = 5, a = 10, b = 20;
    int array[m1], array1[m2], array2[m2];
    srand(time(NULL));
    cout << "array[10] = ";
    for (int i = 0; i < m1; i++) {
        array[i] = a + rand() % (b - a);
        cout << array[i] << ", ";
    }
    cout << "\n=========================\n";
    cout << "array1[5] |\tarray2[5]\n=========================\n";
    for (int i = 0; i < m2; i++) {
        array1[i] = array[i];
        array2[i] = array[i + 5];
    }
    for (int i = 0; i < m2; i++) {
        cout << array1[i] << "\t  |\t" << array2[i] << "\n";
    }
    cout << "=========================\n";
    return 0;
}