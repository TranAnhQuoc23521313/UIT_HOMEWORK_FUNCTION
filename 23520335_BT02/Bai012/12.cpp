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
	float x6 = x4 * x2;
	return x6;
}
