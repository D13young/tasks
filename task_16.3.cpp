#include <iostream>
using namespace std;
void Week(int i)
{
            switch (i) {
            case 0:
                cout << " Monday ";
                break;
            case 1:
                cout << " Tuesday ";
                break;
            case 2:
                cout << " Wensday ";
                break;
            case 3:
                cout << " Thursday ";
                break;
            case 4:
                cout << " Friday ";
                break;
            case 5:
                cout << " Saturday ";
                break;
            case 6:
                cout << " Sunday ";
                break;
            }
}
int main()
{
    cout << "Home task #16.3\n\n";
    int arr[7];
    int j = 0;
    cout << "=======================================\n";
    for (int i = 0; i < 7; i++) {
        cout << "Input your expenses for"; Week(i); cin >> j;
        //Week(i);
        //cin >> j;
        arr[i] = j;
    }
    int sum = 0;
    for (int i = 0; i < 7; i++) {
        sum += arr[i];
    }
    cout << "=======================================\nAverage: $" << float(sum) / 7 << "\nTotal: $" << sum ;
    for (int i = 0; i < 7; i++) {
        if (arr[i] > 100) {
            cout << "\nExpense above $100: ";
            Week(i);
            }
    }
    cout << endl;
    return 0;
}