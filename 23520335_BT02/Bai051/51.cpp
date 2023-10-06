#include<iostream>
#include<cmath>
using namespace std;

float liet_ke_uoc_so(int n);

int main()
{
	int n;
	cin >> n;
	cout << liet_ke_uoc_so(n);
	return 0;
}

float liet_ke_uoc_so(int n)
{
	float t = 1;
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
