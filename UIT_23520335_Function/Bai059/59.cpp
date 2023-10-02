#include<iostream>
#include<cmath>
using namespace std;

int dem_so(int n);

int main()
{
	int n;
	cin >> n;
	cout << dem_so(n);
	return 0;
}

int dem_so(int n)
{
	int dem = 0;
	float t = n;
	while (t != 0)
	{
		dem++;
		t /= 10;
	}
	return dem;
}
