#include <iostream>
using namespace std;
int main()
{
    cout << "Home task #16.4\n\n";
    const int n = 12;
    int month;
    double rate[n], proc[n], deposit;
    cout << "Enter the dollar to euro exchange rate for each month:" << endl;
    for (int i = 0; i < n; i++) {cout << "Month " << i + 1 << ": "; cin >> rate[i];}
    cout << "Enter the accrued interest on the deposit account in euros for each month:" << endl;
    for (int i = 0; i < n; i++) {cout << "Month " << i + 1 << ": "; cin >> proc[i];}
    cout << "Enter the deposit amount in euros: ";
    cin >> deposit;
    cout << "Enter month number: ";
    cin >> month;
    double usd = deposit / rate[month - 1];
    double limit = (proc[month - 1] >= 500) ? proc[month - 1] / 2 : 0;
    limit = (limit > usd) ? usd : limit;
    cout << "You can cash out no more than " << limit << " dollars" << endl;
    return 0;
}