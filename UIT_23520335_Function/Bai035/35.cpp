#include<iostream>
#include<cmath>
using namespace std;

float tich(int n);

int main()
{
	int n;
	cin >> n;
	cout << tich(n);
	return 0;
}

float tich(int n)
{
	float t = 1;
	int i = 1;
	while (i <= n)
	{
		t *= i;
		i ++;
	}
	return t;
}
