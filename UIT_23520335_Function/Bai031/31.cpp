#include<iostream>
#include<cmath>
using namespace std;

float tong(int n);

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
	int i = 1;
	while (i <= 2 * n + 1)
	{
		s += 1.0 / i;
		i += 2;
	}
	return s;
}
