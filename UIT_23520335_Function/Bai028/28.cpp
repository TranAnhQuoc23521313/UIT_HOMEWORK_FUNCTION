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
	while (i <= n)
	{
		s += pow(i,2);
		i++;
	}
	return s;
}
