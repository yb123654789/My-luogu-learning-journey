#include <iostream>
using namespace std;
int P5707()
{
	double a, b, c, d, f;
	int e;
	cin >> a >> b >> c;
	d = (a + b + c) / 2;
	e = sqrt(d * (d - a) * (d - b) * (d - c)) * 10;
	f = static_cast<double>(e / 10);
	cout << f;
	return 0;
}