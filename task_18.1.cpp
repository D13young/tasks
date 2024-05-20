#include <iostream>
using namespace std;
int main()
{
	cout << "Home task #18.1\n\n";
	int num, row, col;
	cout << "Input number: ";
	cin >> num;
	cout << "Input row: ";
	cin >> row;
	cout << "Input column: ";
	cin >> col;
	int** arr = new int* [row];
	for (int i = 0; i < row; i++) {
		arr[i] = new int[col];
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr[i][j] = num;
			num *= 2;
		}
	}
	for (int i = 0; i < row; i++) {
		cout << " |\t";
		for (int j = 0; j < col; j++) {
			cout << arr[i][j] << "\t |\t";
		}
		cout << endl;
	}
	cout << endl;
	return 0;
}