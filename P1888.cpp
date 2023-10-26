#include <iostream>
#include<algorithm>
using namespace std;
int P1888()
{
	int a[3];
	int i;
	int b[9] = { 2,3,5,7,11,13,17,19,23 };
	for (i = 0; i < 3; i++)
	{
		cin >> a[i];
	}
	sort(a, a + 3);
	for (i = 0; i < 9; i++)
	{
		if (a[0] % b[i] == 0 && a[2] % b[i] == 0)
		{
			a[0] = a[0] / b[i];
			a[2] = a[2] / b[i];
		}
	}
	cout << a[0] << "/" << a[2];
	return 0;
}