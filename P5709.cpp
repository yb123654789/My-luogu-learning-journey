#include <iostream>
using namespace std;
int P5709()
{
	unsigned m, t, s, n, v;
	double p;
	cin >> m >> t >> s;
	if (t == 0)
		cout << 0;
	else
	{
		v = s / t;
		p = s * 1.0 / t;
		if (p < m)
		{
			if (p > v)
				v = v + 1;
			n = m - v;
			cout << n;
		}
		else
			cout << 0;
	}
	return 0;
}