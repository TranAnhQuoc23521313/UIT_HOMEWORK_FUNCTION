#include<iostream>
#include<cmath>
using namespace std;

float tong(int k, int n);

int main()
{
	int k, n;
	cin >> k >> n;
	cout << tong(k, n);
	return 0;
}

float tong(int k, int n)
{
	float s = 0;
	int i = 1;
	while (i <= n)
	{
		s += pow(i, k);
		i ++;
	}
	return s;
}
