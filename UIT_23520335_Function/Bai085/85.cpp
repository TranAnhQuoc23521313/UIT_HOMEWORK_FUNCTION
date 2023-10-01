#include<iostream>
#include<cmath>
using namespace std;

float tong(int x, int n);

int main()
{
	int x, n;
	cin >> x >> n;
	cout << tong(x, n);
	return 0;
}

float tong(int x, int n)
{
	float s = 0;
	float t = 1;
	int i = 1;
	int dau = 1;
	while (i <= n)
	{
		t *= x;
		s += dau*t;
		i++;
		dau = -dau;
	}
	return s;
}
