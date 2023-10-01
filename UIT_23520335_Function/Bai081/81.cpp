#include<iostream>
#include<cmath>
using namespace std;

float tong(float x, int n);

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
	float s = 0;
	int m = 1;
	int i = 0;
	while (i <= n)
	{
		m *= (x+i);
		s += 1.0/m;
		i++;
	}
	return s;
}
