#include <iostream>
using namespace std;
int P5712()
{
	int a;
	cin >> a;
	cout << "Today, I ate " << a;
	if (a==1||a==0)
		cout << " apple.";
	else
		cout << " apples.";
	return 0;
}