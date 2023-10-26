#include <iostream>
#include<iomanip>
using namespace std;
int P5712()
{
	int n, m = 1, i, j;
	cin >> n;
	for (i = n; i > 0; i--,n--)
	{
		for (j = n ; j > 0; j--, m++)
		{
			cout << setw(2) << setfill('0') << m;
		}
		cout << endl;
	}
	return 0;
}