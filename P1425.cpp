#include <iostream>
using namespace std;
int P1425()
{
	int a, b, c, d, e, f, g;
	cin >> a >> b >> c >> d;
	e = (c * 60 + d) - (a * 60 + b);
	f = e % 60;
	g = (e - f) / 60;
	cout << g << " " << f;
	return 0;
}