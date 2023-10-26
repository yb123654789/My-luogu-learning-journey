#include <iostream>
using namespace std;
int P1085()
{
	int a[7][2], b[7];
	int i, j, k, m;
	i = j = m = 0;
	for (k = 0; i < 7; i++)
	{
		for (; j < 2; j++)
		{
			cin >> a[i][j];
		}
		b[i] = a[i][0] + a[i][1];
		k = k + (b[i] > 8);
		m = (m >= b[i]) ? m : b[i];
	}
	if (k > 0){
		while (m != b[i])
		{
			i = i + 1;
		}
		cout << i;
	}
	else
		cout << 0;
	return 0;
}