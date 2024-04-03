#include <iostream>
using namespace std;
int main()
{
    cout << "Home task #13.2\n\n";
    int a, h = 8, w = 8;
    cout << "Enter digit: ";
    cin >> a;
    for (int i = 0; i < h; i++)
    {
        for (int jj = 0; jj < a; jj++)
        {
            for (int j = 0; j < w; j++)
            {
                for (int d = 0; d < a; d++)
                {
                    ((i + j) % 2) ? (cout << '-') : (cout << 'x');
                }
            }
            cout << "\n";
        }
    }
    return 0;
}