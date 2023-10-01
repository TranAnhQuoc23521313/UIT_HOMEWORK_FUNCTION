#include<iostream>
#include<cmath>
using namespace std;

int tich_uoc_so(int n);

int main()
{
	int n;
	cin >> n;
	cout << tich_uoc_so(n);
	return 0;
}

int tich_uoc_so(int n)
{
	int t = 1;
	int i = 1;
	while (i <= n)
	{
		if (n % i == 0)
		{
			t *= i;
		}
		i += 2;
	}
	return t;
}
