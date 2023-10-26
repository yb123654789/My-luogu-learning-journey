#include <iostream>
using namespace std;
int P5710()
{
	int a, b, c, d, M;
	a = b = c = d = 0;
	cin >> M;
	if (M == 6 || M == 8 || M == 10 || M == 12)
		a = b = 1;
	else if (M == 5 || M == 7 || M == 9 || M == 11)
		b = c = 1;
	else 
		d = 1;
	cout << a << " " << b << " " << c << " " << d;
	return 0;
}