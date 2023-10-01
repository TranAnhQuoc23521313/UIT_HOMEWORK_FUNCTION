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
	int m = 0;
	int i = 1;
	while (i <= n)
	{
		m += i;
		s += 1.0/m;
		i ++;
	}
	return s;
}
