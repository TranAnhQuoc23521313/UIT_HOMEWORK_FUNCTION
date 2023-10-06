#include<iostream>
#include<cmath>
using namespace std;

float phep_nhan(float x);

int main()
{
	float x;
	cin >> x;
	cout << phep_nhan(x);
	return 0;
}

float phep_nhan(float x)
{
	float x2 = x * x;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	float x10 = x8 * x2;
	float x11 = x10 * x;
	return x11;
}
