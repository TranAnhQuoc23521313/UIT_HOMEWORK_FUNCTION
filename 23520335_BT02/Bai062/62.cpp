#include<iostream>
#include<cmath>
using namespace std;

float tong_cac_chu_so(int n);

int main()
{
	int n;
	cin >> n;
	cout << tong_cac_chu_so(n);
	return 0;
}

float tong_cac_chu_so(int n)
{
	float s = 0;
	float t = n;
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
