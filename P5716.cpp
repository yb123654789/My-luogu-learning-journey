#include <iostream>
using namespace std;
int P5716()
{
	int p, q, s;
	cin >> p >> q;
	int t = (p % 4 == 0 && p % 100 != 0 || p % 400 == 0) ? 1 : 0;
	if (q == 2)
		s = (t == 1) ? 29 : 28;
	else
		s = (q == 1 || q == 3 || q == 5 || q == 7 || q == 8 || q == 10 || q == 12) ? 31 : 30;
	cout << s;
	return 0;
}