#include <iostream>
using namespace std;
int main()
{
	cout << "Home task #6.1\n\n";
	const int day = 86400;
	int sec, hour, min, time, time2, ost;
	cout << "Enter the time in seconds: ";
	cin >> time;
	hour = time / 3600;
	time2 = time % 3600;
	min = time2 / 60;
	time2 %= 60;
	cout << "Current time: " << hour << " : " << min << " : " << time2 << "\n";
    ost = day - time;
	hour = ost / 3600;
	min = ost / 60 - hour * 60;
	sec = ost - min * 60 - hour * 3600;
	cout << "Time left until midnight: " << hour << " : " << min << " : " << sec << "\n";
	return 0;
}