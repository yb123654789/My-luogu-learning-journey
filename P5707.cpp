#include <iostream>
using namespace std;
int P507()
{
	int A = 8 * 60;
	int s, v, t, x, p, q;
	double r;
	cin >> s >> v;
	r = static_cast<double>(s) / v + 10;
	t = s / v + 10;
	if (r != t)
		t = t + 1;
	if (A >= t)
		x = 8 * 60 - t;
	else
		x = 32 * 60 - t;
	q = x % 60;
	p = (x - q) / 60;
	if (p < 10)
		cout << "0" << p << ":";
	else
		cout << p << ":";
	if (q < 10)
		cout << "0" << q;
	else
		cout << q;
	return 0;
}