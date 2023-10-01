#include<iostream>
#include<cmath>
using namespace std;

float tich(int x,int n);

int main()
{
	int x, n;
	cin >> x >> n;
	cout << tich(x,n);
	return 0;
}

float tich(int x, int n)
{
	float t = x;
	int i = 1;
	while (i <= n)
	{
		t *= (x+i);
		i++;
	}
	return t;
}
