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
	float x16 = x8 * x8;
	float x32 = x16 * x16;
	return x32;
}
