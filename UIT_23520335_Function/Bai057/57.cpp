#include<iostream>
#include<cmath>
using namespace std;

float tong_uoc_so(int n);

int main()
{
	int n;
	cin >> n;
	cout << tong_uoc_so(n);
	return 0;
}

float tong_uoc_so(int n)
{
	float s = 0;
	int i = 1;
	while (i < n)
	{
		if (n % i == 0)
		{
			s += i;
		}
		i ++;
	}
	return s;
}
