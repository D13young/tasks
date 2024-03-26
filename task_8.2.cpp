#include <iostream>
using namespace std;
int main()
{
	cout << "Home task #8.2\n\n";
	int bestmanager, salesS, salesV, salesJ, salary = 200;
	double salaryJ, salaryV, salaryS;
	cout << "Manager #1: John's sales: ";
	cin >> salesJ;
	cout << "Manager #2: Victor's sales: ";
	cin >> salesV;
	cout << "Manager #3: Serg's sales: ";
	cin >> salesS;

	if (salesJ < 500) {
		salaryJ = salary + salesJ * 0.03;
	}
	else if (salesJ >= 500 && salesJ < 1000) {
		salaryJ = salary + salesJ * 0.05;
	}
	else {
		salaryJ = salary + salesJ * 0.08;
	}

	if (salesV < 500) {
		salaryV = salary + salesV * 0.03;
	}
	else if (salesV >= 500 && salesV < 1000) {
		salaryV = salary + salesV * 0.05;
	}
	else {
		salaryV = salary + salesV * 0.08;
	}

	if (salesS < 500) {
		salaryS = salary + salesS * 0.03;
	}
	else if (salesS >= 500 && salesS < 1000) {
		salaryS = salary + salesS * 0.05;
	}
	else {
		salaryS = salary + salesS * 0.08;
	}

	if (salesJ > salesV && salesJ > salesS) {
		bestmanager = 1;
	}
	else if (salesV > salesJ && salesV > salesS) {
		bestmanager = 2;
	}
	else {
		bestmanager = 3;
	}
	switch (bestmanager) {
	case 1:
		cout << "The best manager: John\n";
		salaryJ += 200;
		break;
	case 2:
		cout << "The best manager: Victor\n";
		salaryV += 200;
		break;
	case 3:
		cout << "The best manager: Serg\n";
		salaryS += 200;
		break;
	}
	
	cout << " John's salary: " << salaryJ << "$\n";
	cout << " Viktor's salary: " << salaryV << "$\n";
	cout << " Serg's salary: " << salaryS << "$\n";
	
	return 0;
}