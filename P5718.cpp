#include <iostream>
#include<algorithm>
using namespace std;
int P5718()
{
	int a;
	int b[100];
	cin >> a;
	for (int i = 0; i < a; i++)
		cin >> b[i];
	sort(b, b + a);
	cout << b[0];
	return 0;
}