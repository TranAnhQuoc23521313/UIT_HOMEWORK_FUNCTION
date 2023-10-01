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
	int i = 1;
	while (i <= n)
	{
		t *= x;
		s += t;
		i++;
	}
	return s;
}
