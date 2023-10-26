#include <iostream>
#include<iomanip>
using namespace std;
int P5719()
{
	int n, k;
	cin >> n >> k;
	int i, p, q, s, t;
	p = q = s = t = 0;
	for (i = 1; i <=n; i++)
	{
		if (i % k == 0)
		{
			p = p + i;
			q++;
		}
		else
		{
			s = s + i;
			t++;
		}
	}
	cout << fixed << setprecision(1) << (p * 1.0 / q) << " " << (s * 1.0 / t);
	return 0;
}