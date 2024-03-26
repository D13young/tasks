#include <iostream>
using namespace std;
int main()
{
	cout << "Home task #11.4\n\n";
	int a;
	cout << "Enter number: ";
	cin >> a;
	for (int b = 1; b <= a; b++) {
		if ((a % (b * b) == 0) && (a % (b * b * b) != 0)) cout << b << "\n";
	}
	return 0;
}