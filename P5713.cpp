#include <iostream>
using namespace std;
int P5713()
{
	unsigned int a, b, c;
	cin >> a;
	b = a * 5;
	c = a * 3 + 11;
	if (b < c)
		cout << "Local";
	else
		cout << "Luogu";
	return 0;
}