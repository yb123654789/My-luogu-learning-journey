#include <iostream>
using namespace std;
int P5720()
{
	int a, b = 1;
	cin >> a;
	while (a != 1)
	{
		a = a / 2;
		b++;
	}
	cout << b;
	return 0;
}