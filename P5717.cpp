#include <iostream>
#include<algorithm>
using namespace std;
int P5717()
{
	int a[3];
	for (int i = 0; i < 3; i++)
		cin >> a[i];
	sort(a, a + 3);
	if (a[0] + a[1] > a[2])
	{
		if (a[0] * a[0] + a[1] * a[1] < a[2] * a[2])
			cout << "Obtuse triangle" << endl;
		if (a[0] * a[0] + a[1] * a[1] == a[2] * a[2])
			cout << "Right triangle" << endl;
		if (a[0] * a[0] + a[1] * a[1] > a[2] * a[2])
			cout << "Acute triangle" << endl;
		if (a[0] == a[1] || a[1] == a[2])
			cout << "Isosceles triangle" << endl;
		if (a[0] == a[2])
			cout << "Equilateral triangle" << endl;
	}
	else
		cout << "Not triangle";
	return 0;
}