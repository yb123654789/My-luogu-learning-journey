#include <iostream>
using namespace std;
int P1424()
{
	int x, n, t, a, b;
	int s;
	cin >> x >> n;
	t = x + n - 1;
	if (t % 7 == 6)
	{
		if (x == 7)
			a = b = (t + 1) / 7 - 1;
		a = (t + 1) / 7;
		b = a - 1;
	}
	else if (t % 7 == 0)
	{
		if (x == 7)
		{
			b = t / 7;
			a = b - 1;
		}
		a = b = t / 7;
	}
	else
	{
		int i;
		i = t % 7;
		a = b = (t - i) / 7;
	}
	s = (n - a - b) * 250;
	cout << s;
	return 0;
}