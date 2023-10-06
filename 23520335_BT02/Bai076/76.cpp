#include<iostream>
#include<cmath>
using namespace std;

float tong(float, int);

int main()
{
	float x;
	int n;
	cin >> x >> n;
	cout << tong(x, n);
	return 0;
}

float tong(float x, int n)
{
	float s = 1 + x;
	int t = x;
	int m = 1;
	int i = 3;
	while (i <= 2 * n + 1)
	{
		t *= x * x;
		m *= i * (i - 1);
		s += (float)t / m;
		i += 2;
	}
	return s;
}
