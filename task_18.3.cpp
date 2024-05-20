#include <iostream>
using namespace std;
int main()
{
	cout << "Home task #18.3\n\n";
	int row, col, side, temp, shift;
	bool flag = true;
	bool& aFlag = flag;
	do
	{
		cout << "Enter lines ( up to 10): ";
		cin >> row;
		cout << endl;
		cout << "Enter columns (up to 10): ";
		cin >> col;
		cout << endl;
		int** arr = new int * [row];
		for (int i = 0; i < row; i++) {arr[i] = new int[col];}
		if (col > 10 || col < 0 || row > 10 || row < 0) {
			cout << "Invalid row and column input. Repeat the input!" << endl;
			aFlag = true;
		}
		else {
			srand(time(0));
			for (int i = 0; i < row; i++) {
				for (int j = 0; j < col; j++) {arr[i][j] = rand() % 100;}
			}
			for (int i = 0; i < row; i++) {
				cout << " | ";
				for (int j = 0; j < col; j++){cout << arr[i][j] << " | ";}
				cout << endl;
			}
			cout << "\nThe shift in the array can be performed:\n" << "1 - Left\n" << "2 - Right\n" << "3 - Up\n" << "4 - Down\n";
			cout << "Enter the shift side: "; 
			cin >> side; 
			cout << endl;
			cout << "Enter the number of shifts: ";
			cin >> shift;
			cout << endl;
			if (side == 1) {
				for (int i = 0; i < shift; i++) {
					for (int j = 0; j < row; j++) {
						temp = arr[j][0];
						for (int g = 0; g < col - 1; g++) {arr[j][g] = arr[j][g + 1];}
						arr[j][col - 1] = temp;
					}
				}
			}
			else if (side == 2) {
				for (int i = 0; i < shift; i++) {
					for (int j = 0; j < row; j++) {
						temp = arr[j][col - 1];
						for (int g = col - 1; g > 0; g--) {arr[j][g] = arr[j][g - 1];}
						arr[j][0] = temp;
					}
				}
			}
			else if (side == 3) {
				for (int i = 0; i < shift; i++) {
					for (int j = 0; j < col; j++) {
						temp = arr[0][j];
						for (int g = 0; g < row - 1; g++){arr[g][j] = arr[g + 1][j];}
						arr[row - 1][j] = temp;
					}
				}
			}
			else if (side == 4) {
				for (int i = 0; i < shift; i++) {
					for (int j = 0; j < col; j++) {
						temp = arr[row - 1][j];
						for (int g = row - 1; g > 0; g--) {arr[g][j] = arr[g - 1][j];}
						arr[0][j] = temp;
					}
				}
			}
			cout << "The result of the shift";
			cout << endl;
			for (int i = 0; i < row; i++) {
				cout << " | ";
				for (int j = 0; j < col; j++) {cout << arr[i][j] << " | ";}
				cout << endl;
			}
			aFlag = false;
		}
	} while (aFlag);
	cout << endl;
	return 0;
}
