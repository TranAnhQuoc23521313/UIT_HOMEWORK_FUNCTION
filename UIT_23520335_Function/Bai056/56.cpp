#include<iostream>
#include<cmath>
using namespace std;

int dem_uoc_so(int n);

int main()
{
	int n;
	cin >> n;
	cout << dem_uoc_so(n);
	return 0;
}

int dem_uoc_so(int n)
{
	int dem = 0;
	int i = 2;
	while (i <= n)
	{
		if (n % i == 0)
		{
			dem++;
		}
		i += 2;
	}
	return dem;
}
