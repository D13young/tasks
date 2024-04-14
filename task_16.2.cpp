#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    cout << "Home tesk # 16.2\n\n";
    const int m = 10, a = 10, b = 20;
    int array1[m], array2[m], arraysum[m];
    srand(time(NULL));
    cout << "--------------------------------------\narray1[10] + array2[10] = arraysum[10]\n--------------------------------------\n";
    for (int i = 0; i < m; i++) {
        array1[i] = a + rand() % (b - a);
        array2[i] = a + rand() % (b - a);
        arraysum[i] = array1[i] + array2[i];
        cout << "   |" << array1[i] << "|\t   + \t|" << array2[i] << "|\t=    |" << arraysum[i] << "|\n";
    }
    return 0;
}