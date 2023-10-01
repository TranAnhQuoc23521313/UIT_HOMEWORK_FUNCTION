#include<iostream>
#include<cmath>
using namespace std;
#define PI 3.14
float dien_tich(float r);

int main()
{
	float r;
	cin >> r;
	cout << dien_tich(r);
}

float dien_tich(float r)
{
	float s = 4 * PI * pow(r,2);
	return s;
}