#include <iostream>
using namespace std;
int P7514()
{
	int m;
	double k, h;
	cin >> m >> h;
	k = m * 1.0 / h / h;
	if (k < 18.5)
		cout << "Underweight";
	else if (k >= 18.5 && k < 24)
		cout << "Normal";
	else if (k >= 24)
	{
		cout << k << endl;
		cout << "Overweight";
	}
	return 0;
}