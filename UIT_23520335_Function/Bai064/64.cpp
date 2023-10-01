#include<iostream>
#include<cmath>
using namespace std;

int chu_so_lon_nhat(int n);

int main()
{
	int n;
	cin >> n;
	cout << chu_so_lon_nhat(n);
	return 0;
}

int chu_so_lon_nhat(int n)
{
	int lc = n % 10;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv > lc)
		{
			lc = dv;
		}
		t /= 10;
	}
	return lc;
}
