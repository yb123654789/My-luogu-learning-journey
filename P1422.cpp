#include <iostream>
#include<iomanip>
using namespace std;
int P1422()
{
	int a;
	double n;
	cin >> a;
	if (a > 400)
	{
		n = (a - 400) * 0.5663 + 250 * 0.4663 + 150 * 0.4463;
	}
	else if (a > 150 && a <= 400)
	{
		n = (a - 150) * 0.4663 + 150 * 0.4463;
	}
	else
		n = a * 0.4463;
	cout << setprecision(1) << fixed << n;
	return 0;
}