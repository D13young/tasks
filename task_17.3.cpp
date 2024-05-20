#include <iostream>
using namespace std;
int main()
{
    cout << "Home task #17/3\n\n";
    int puncake[] = { 9,5,7,4,8,1,3,10,2,6 };
    int size = sizeof(puncake) / sizeof(int);
    int buff, max, maxel;
    cout << "Stack of pancakes start: \n";
    cout << "puncake[] = ";
    for (int i = 0; i < size; i++) {cout << puncake[i] << ", "; }
    for (int i = size - 1; i >= 0; i--) {
        max = puncake[i];
        maxel = i;
        for (int j = i; j >= 0; j--) {
            if (puncake[j] > max) {
                max = puncake[j];
                maxel = j;
            }
        }
        for (int flip = 0; flip <= maxel / 2; flip++) {
            if (maxel == 0) {break;}
            buff = puncake[flip];
            puncake[flip] = puncake[maxel - flip];
            puncake[maxel - flip] = buff;
        }
        for (int flip = 0; flip <= i / 2; flip++) {
            buff = puncake[flip];
            puncake[flip] = puncake[i - flip];
            puncake[i - flip] = buff;
        }
    }
    cout << "\n\n" << "Stack of pancakes final: \n";
    cout << "puncake[] = ";
    for (int i = 0; i < size; i++) {cout << puncake[i] << ", "; }
    cout << "\n";
    return 0;
}