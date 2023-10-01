#include<iostream>
#include<cmath>
using namespace std;

int tong(int n);

int main()
{
	int n;
	cin >> n;
	cout << tong(n);
	return 0;
}

int tong(int n)
{
	int s = 0;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		s += dv;
		t /= 10;
	}
	return s;
}
