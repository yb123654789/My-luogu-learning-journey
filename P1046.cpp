#include <iostream>
#include<algorithm>
using namespace std;
int P1046()
{
	int a[11];
	int b, i, c, d;
	d = 0;
	for (i=0; i < 10; i++)
	{
		cin >> a[i];
	}
	cin >> b;
	c = b + 30;
	sort(a, a + 10);
	a[10] = a[9] + 1;
	for (i=0; i < 11; i++)
	{
		if (a[i] <= c && a[i + 1] > c && i < 10)
			d = i + 1;
	}
	cout << d;
	return 0;
}