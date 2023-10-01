#include<iostream>
#include<cmath>
using namespace std;

int tich(int x, int n);

int main()
{
	int x, n;
	cin >> x >> n;
	cout << tich(x, n);
	return 0;
}

int tich(int x, int n)
{
	int t = 1;
	int i = 1;
	while (i <= n)
	{
		t *= x;
		i++;
	}
	return t;
}
