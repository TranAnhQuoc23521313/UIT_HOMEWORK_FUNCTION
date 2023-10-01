#include<iostream>
#include<cmath>
using namespace std;

int tich_cac_chu_so(int n);

int main()
{
	int n;
	cin >> n;
	cout << tich_cac_chu_so(n);
	return 0;
}

int tich_cac_chu_so(int n)
{
	int tich = 1;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
		{
			tich *= dv;
		}
		t /= 10;
	}
	return tich;
}
