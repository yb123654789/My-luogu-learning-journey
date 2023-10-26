#include <iostream>
#include<algorithm>
using namespace std;
int P5715()
{
	int a[3]{};
	int i;
	cin >> a[0]>> a[1]>> a[2];
	sort(a, a + 3);
	for (i = 0; i < 3; i++)
		cout << a[i] << " ";
	return 0;
} 