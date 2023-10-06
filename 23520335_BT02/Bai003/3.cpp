#include<iostream>
#include<cmath>
using namespace std;
#define PI 3.14
float chu_vi(float );

int main()
{
	float r;
	cin >> r;
	cout << chu_vi(r);
}

float chu_vi(float r)
{
	float p = 2 * PI * r;
	return p;
}
