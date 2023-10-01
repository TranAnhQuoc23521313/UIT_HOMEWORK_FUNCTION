#include<iostream>
#include<cmath>
using namespace std;

int tich(int n);

int main()
{
	int n;
	cin >> n;
	cout << tich(n);
	return 0;
}

int tich(int n)
{
	int t = 1;
	int i = 1;
	while (i <= n)
	{
		t *= i;
		i ++;
	}
	return t;
}
