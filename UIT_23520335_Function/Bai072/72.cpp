#include<iostream>
#include<cmath>
using namespace std;

float tong(int);

int main()
{
	int n;
	cin >> n;
	cout << tong(n);
	return 0;
}

float tong(int n)
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
