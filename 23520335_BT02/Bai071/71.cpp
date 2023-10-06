#include<iostream>
#include<cmath>
using namespace std;

float tong(float x, int n);

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
	float s = x;
	float t = x;
	int i = 3;
	while (i <= 2 * n + 1)
	{
		t *= x * x;
		s += t;
		i += 2;
	}
	return s;
}
