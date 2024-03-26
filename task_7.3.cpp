#include <iostream>
using namespace std;
int main()
{
	cout << "Home task 7.3\n\n";
	int n1, n2, n3, n4, n5, n6, n7, max;
	cout << "Enter integers: \n";
	cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7;
	if (n1 > n2) {
		max = n1;
	}
	else {
		max = n2;
	}
	if (n3 > max) {
		max = n3;
	}
	if (n4 > max) {
		max = n4;
	}
	if (n5 > max) {
		max = n5;
	}
	if (n6 > max) {
		max = n6;
	}
	if (n7 > max) {
		max = n7;
	}
	cout << "Maximum number: " << max << "\n";
	return 0;
}