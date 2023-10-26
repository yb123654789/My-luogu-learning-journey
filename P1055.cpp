#include <iostream>
using namespace std;
int P1055()
{
	char a[13];
	int i, b = 1, c = 0;
	for (i=0; i < 13; i++)
		cin >> a[i];
	for (i=0; i < 11; i++)
	{
		if (i != 1 && i != 5)
		{
			c = (a[i]-48) * b + c;
			b++;
		}
	}
	c = (c % 11 < 10) ? (c % 11+48) : 'X';
	if (c == a[12])
		cout << "Right";
	else
	{
		for (i=0; i < 12; i++)
			cout << a[i];
		cout << c - 48;
	}
	return 0;
}