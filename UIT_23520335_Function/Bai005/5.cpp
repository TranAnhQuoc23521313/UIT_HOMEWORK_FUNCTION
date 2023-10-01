#include<iostream>
#include<cmath>
using namespace std;
#define PI 3.14
float the_tich(float r);

int main()
{
	float r;
	cin >> r;
	cout << the_tich(r);
}

float the_tich(float r)
{
	float v = 4/3 * PI * pow(r, 3);
	return v;
}