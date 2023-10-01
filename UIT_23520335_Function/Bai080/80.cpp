#include<iostream>
#include<cmath>
using namespace std;

int tong(float x, int n);

int main()
{
	float x;
	int n;
	cin >> x >> n;
	cout << tong(x, n);
	return 0;
}

int tong(float x, int n)
{
	int s = 1;
	int t = 1;
	int i = 1;
	while (i <= n)
	{
		t *= x;
		s += (i + 1) * t;
		i++;
	}
	return s;
}
