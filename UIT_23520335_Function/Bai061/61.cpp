#include<iostream>
#include<cmath>
using namespace std;

int dem_cac_chu_so(int n);

int main()
{
	int n;
	cin >> n;
	cout << dem_cac_chu_so(n);
	return 0;
}

int dem_cac_chu_so(int n)
{
	int dem = 0;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
		{
			dem++;
		}
		t /= 10;
	}
	return dem;
}
