#include<iostream>
#include<cmath>
using namespace std;

float tich(float x, int n);

int main()
{
	float x;
	cin >> x;
	int n;
	cin >> n;
	cout << tich(x, n);
	return 0;
}

float tich(float x, int n)
{
	float t = 1;
	int i = 1;
	while (i <= n)
	{
		t *= x;
		i++;
	}
	return t;
}
