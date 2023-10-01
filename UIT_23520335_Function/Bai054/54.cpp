#include<iostream>
#include<cmath>
using namespace std;

int tong_uoc_so(int n);

int main()
{
	int n;
	cin >> n;
	cout << tong_uoc_so(n);
	return 0;
}

int tong_uoc_so(int n)
{
	int s = 0;
	int i = 2;
	while (i <= n)
	{
		if (n % i == 0)
		{
			s += i;
		}
		i += 2;
	}
	return s;
}
