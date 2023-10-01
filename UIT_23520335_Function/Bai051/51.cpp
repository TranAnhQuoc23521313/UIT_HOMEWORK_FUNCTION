#include<iostream>
#include<cmath>
using namespace std;

int liet_ke_uoc_so(int n);

int main()
{
	int n;
	cin >> n;
	cout << liet_ke_uoc_so(n);
	return 0;
}

int liet_ke_uoc_so(int n)
{
	int t = 1;
	int i = 1;
	while (i <= n)
	{
		if (n % i == 0)
		{
			t *= i;
		}
		i++;
	}
	return t;
}
