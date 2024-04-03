#include <iostream>  
using namespace std;
int main()
{
	cout << "Home task #13.4\n\n";
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++) cout << char('A' + j) << i << " ";
			if (i < 9) cout << "\n";
		}
		cout << "\n";
	return 0;
}