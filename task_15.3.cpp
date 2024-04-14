#include <iostream>
using namespace std;
int main()
{
    cout << "Home task #15.3\n\n";
    int m1, m2, max, min;
    const int n = 12;
    double m[n];
    cout << "Profit\n=============================\n";
    for (int i = 0; i < n; i++) {
        cout << "Month " << i + 1 << ": ";
        cin >> m[i];
    }
    cout << "=============================\nEnter month to start the search: ";
    cin >> m1;
    cout << "Enter month for the end of the search: ";
    cin >> m2;
    max = min = m1 - 1;
    for (int i = m1; i < m2; i++) {
        if (m[i] > m[max]) max = i;
        if (m[i] < m[min]) min = i;
    }
    cout << "=============================\nMax profit: month " << max + 1 << "\n";
    cout << "Min profit: month " << min + 1 << "\n";
    return 0;
}