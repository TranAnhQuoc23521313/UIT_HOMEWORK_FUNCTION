#include<iostream>
#include<cmath>
using namespace std;

float tich_cac_chu_so(int n);

int main()
{
	int n;
	cin >> n;
	cout << tich_cac_chu_so(n);
	return 0;
}

float tich_cac_chu_so(int n)
{
	float tich = 1;
	float t = n;
	while (t != 0)
	{
		int dv = t % 10;
		tich *= dv;
		t /= 10;
	}
	return tich;
}
