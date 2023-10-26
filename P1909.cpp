#include <iostream>
#include<algorithm>
using namespace std;
int P1909()
{
	int n, b;
	int a[3][2], c[3];
	cin >> n;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> a[i][j];
		}
		b = 1;
		while (b * a[i][0] < n)
			b++;
		c[i] = b * a[i][1];
	}
	sort(c, c + 3);
	cout << c[0];
	return 0;
}