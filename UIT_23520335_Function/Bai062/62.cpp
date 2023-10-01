#include<iostream>
#include<cmath>
using namespace std;

int tong_cac_chu_so(int n);

int main()
{
	int n;
	cin >> n;
	cout << tong_cac_chu_so(n);
	return 0;
}

int tong_cac_chu_so(int n)
{
	int s = 0;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
		{
			s += dv;
		}
		t /= 10;
	}
	return s;
}
