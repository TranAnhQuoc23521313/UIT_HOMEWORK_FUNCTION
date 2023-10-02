#include<iostream>
#include<cmath>
using namespace std;

float tong(float x, int n);

int main()
{
	float x;
	cin >> x;
	int n;
	cin >> n;
	cout << tong(x, n);
	return 0;
}

float tong(float x, int n)
{
	float s = 0;
	float t = 1;
	int i = 2;
	while (i <= 2*n)
	{
		t *= x*x;
		s += t;
		i += 2;
	}
	return s;
}
