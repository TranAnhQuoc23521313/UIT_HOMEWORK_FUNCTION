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
	float t = n;
	while (t != 0)
	{
		int dv = t % 10;
		s += dv;
		t /= 10;
	}
	return s;
}
