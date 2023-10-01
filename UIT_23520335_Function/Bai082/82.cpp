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
	int i = 0;
	while (i <= n)
	{
		t *= sin(x);
		s += t;
		i++;
	}
	return s;
}
