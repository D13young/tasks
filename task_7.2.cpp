#include <iostream>
using namespace std;
int main()
{
	cout << "Home task 7.2\n\n";
	int num, n1, n2, n3, n4;
	cout << "Enter four - digit number: ";
	cin >> num;
	if (num < 999 || num > 9999) {
		cout << "You entered a non-four-digit number\n";
		return 0;
	}
	n1 = num / 1000 % 10;
	n2 = num / 100 % 10;
	n3 = num / 10 % 10;
	n4 = num % 10;
	cout << "Your number " << n2 << n1 << n4 << n3 << "\n";
	return 0;
}