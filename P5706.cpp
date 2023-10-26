#include <iostream>
#include <iomanip>
using namespace std;
int P5706()
{
	double t;
	int n, q;
	cin >> t >> n;
	q = n * 2;
	cout << setprecision(3)<<fixed<<t/n << endl;
	cout << q;
	return 0;
}