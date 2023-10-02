#include<iostream>
#include<cmath>
using namespace std;

float tong(float, int);

int main()
{
	int n;
	float x;
	cin >> x >> n;
	cout << tong(x, n);
	return 0;
}

float tong(float x, int n)
{
	float s = 1;
	float t = 1;
	int m = 1;
	int i = 2;
	while (i <= 2*n)
	{
		t *= x*x;
		m *= i*(i-1);
		s += (float)t / m;
		i += 2;
	}
	return s;
}
