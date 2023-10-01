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
	float t = x;
	int i = 1;
	while (i <= n)
	{
		t = sin(t);
		s += t;
		i++;
	}
	return s;
}
