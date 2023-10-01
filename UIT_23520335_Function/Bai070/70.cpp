#include<iostream>
#include<cmath>
using namespace std;

int tong(int x, int n);

int main()
{
	int x, n;
	cin >> x >> n;
	cout << tong(x, n);
	return 0;
}

int tong(int x, int n)
{
	int s = 0;
	int t = 1;
	int i = 2;
	while (i <= 2*n)
	{
		t *= x*x;
		s += t;
		i += 2;
	}
	return s;
}
