#include <iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int P2433()
{
	int T;
	double Pi = 3.141593;
	cin >> T;
	if (T == 1)
	{
		cout << "I love Luogu!";
	}
	else if (T == 2)
	{
		int a, b;
		a = 6;
		b = 4;
		cout << a << " " << b;
	}
	else if (T == 3)
	{
		int a, b, c;
		c = 14 % 4;
		b = 14 - c;
		a = b / 4;
		cout << a << endl << b << endl << c;
	}
	else if (T == 4)
	{
		double a = 1.0 * 500 / 3;
		cout << setprecision(6) << a;

	}
	else if (T == 5)
	{
		int a = (260 + 220) / (12 + 20);
		cout << a;
	}
	else if (T == 6)
	{
		cout << sqrt(6 * 6 + 9 * 9);
	}
	else if (T == 7)
	{
		int a = 100;
		int b, c, d;
		b = a + 10;
		c = b - 20;
		d = 0;
		cout << b << endl << c << endl << d;
	}
	else if (T == 8)
	{
		int r = 5;
		double b, c, d;
		b = 2 * Pi * r;
		c = Pi * r * r;
		d = static_cast<double>(4) / 3 * Pi * r * r * r;
		cout << b << endl << c << endl << d;
	}
	else if (T == 9)
	{
		int i, a;
		i = a = 1;
		for (i = 1; i < 4; i++)
		{
			a = (a + 1) * 2;
		}
		cout << a;
	}
	else if (T == 10)
	{
		cout << "9";//8<x<10,ÏÔÈ»
	}
	else if (T == 11)
	{
		double a;
		a = static_cast<double>(100) / (8 - 5);
		cout << a;
	}
	else if (T == 12)
	{
		int a;
		char M = 'M';
		char A = 'A';
		char b = 'A' + 18-1;
		a = M - A + 1;
		cout << a << endl << b;
	}
	else if (T == 13)
	{
		double a;
		int b;
		a = static_cast<double>(4) / 3 * Pi * (4 * 4 * 4 + 10 * 10 * 10);
		b = pow(a, 1.0 / 3);
		cout << b;
	}
	else if (T == 14)
	{
		cout << 50;
	}
	return 0;
}