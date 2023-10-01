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
	int i = 1;
	while (i <= n)
	{
		s += i;
		i++;
	}
	return s;
}
