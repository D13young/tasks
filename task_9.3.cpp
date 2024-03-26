#include <iostream>
using namespace std;

int main()
{
	cout << "Home task #9.3\n\n";
	int lines, choice, delays, income;
	float linetot, fine, linecost = 0.5;
	cout << "#1 - Income and number of delays\n";
	cout << "#2 - Number of lines of code and income\n";
	cout << "#3 - Number of lines of code and number of delays\n";
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		cout << "Desired income: ";
		cin >> income;
		cout << "Number of delays: ";
		cin >> delays;
		lines = income / linecost;
		if (delays >= 3)
		{
			fine = (delays / 3) * 20;
			lines += fine / linecost;
		}
		cout << "Need lines of code: " << lines << "\n";
		break;
	}
	case 2:
	{
		cout << "Desired income: ";
		cin >> income;
		cout << "Number of lines: ";
		cin >> lines;
		linetot = lines * linecost;
		if (income >= linetot)
		{
			cout << "Сan't be late\n";
		}
		else
		{
			delays = (linetot - income) / 20 * 3;
			cout << "You may be late: " << delays << "\n";
		}
		break;
	}
	case 3:
	{
		cout << "Number of lines: ";
		cin >> lines;
		cout << "Number of delays: ";
		cin >> delays;
		linetot = lines * linecost;
		if (delays >= 3)
		{
			fine = delays / 3 * 20;
			if (fine >= linetot)
			{
				cout << "You won't get anything\n";
			}
			else
			{
				income = linetot - fine;
				cout << "You'll get " << income << "$\n";
			}
		}
		else
		{
			income = linetot;
			cout << "Income: " << income << "$\n";
		}
		break;
	}
	default:
		cout << "Error!\n";
	}
	return 0;
}