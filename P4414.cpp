#include<iostream>
#include<algorithm>
using namespace std;
int P4414()
{
    int n[3]{},i,m;
    char a[3]{};
    cin >> n[0] >> n[1] >> n[2];
    cin >> a[0] >> a[1] >> a[2];
    sort(n, n + 3);
    for (i = 0; i <3; i++)
    {
        m = a[i] - 'A';
        cout << n[m] << "";
    }
    return 0;
}