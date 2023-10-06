#include<iostream>
#include<cmath>
using namespace std;

void liet_ke_uoc_so(int n);

int main()
{
	int n;
	cin >> n;
	liet_ke_uoc_so(n);
	return 0;
}

void liet_ke_uoc_so(int n)
{
	float s = 0;
	int i = 1;
	while (i <= n)
	{
		if (n % i == 0)
		{
			s += i;
		}
		i++;
	}
	cout << s;
}
