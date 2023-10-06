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
	float s = 0;
	float t = 1;
	int i = 1;
	while (i <= n)
	{
		t *= x;
		s += sin(t);
		i++;
	}
	return s;
}
