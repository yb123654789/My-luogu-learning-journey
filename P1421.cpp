#include <iostream>
using namespace std;
int P1421()
{
	int a, b, c, d, e;
	cin >> a >> b;
	c = 1 * 10 + 9;
	d = a * 10 + b;
	e = static_cast<double>(d / c);
	cout << e;
	return 0;
}