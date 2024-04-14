#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	cout << "Home task #15.4\n\n";
	int const size = 10;
	int array[size]{ -3, 7, -5, 1, 6, 4, -4, 9, 8, 7 };
	cout << "Array[10] = ";
	for (int i = 0; i < size; i++) {
		cout << array[i] << ", ";
	}
	cout << "\n==============================================\n";
	int sum = 0, min = 0, max = 0, product = 1, producteven = 1;
	int sumneg = 0, neg = 0, negnum;
	for (int i = 0; i < size; i++) {
		if (min > array[i]) min = array[i];
		else if (max < array[i]) max = array[i];
		if (array[i] < 0) {
			if (neg > 0) {
				sum += array[i];
			}
			sumneg += array[i];
			neg++;
			negnum = array[i];
		}
		if (array[i] % 2 == 0) producteven *= array[i];
	}
	for (int j = 0; j < size; j++) {
		if (array[j] > min && array[j] < max) product *= array[j];
	}
	cout << "The sum of the negative elements: " << sumneg << "\n";
	cout << "The product of the elements between the min and max elements: " << product << "\n";
	cout << "The product of elements with even numbers: " << producteven << "\n";
	cout << "The sum of the elements between the first and last negative elements: " << sum - negnum << "\n";
	return 0;
}