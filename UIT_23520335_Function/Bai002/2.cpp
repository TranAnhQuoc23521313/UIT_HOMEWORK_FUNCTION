#include<iostream>
#include<cmath>
using namespace std;
#define PI 3.14
float dien_tich(int r);

int main()
{
	int r;
	cin >> r;
	cout << dien_tich(r);
}

float dien_tich(int r)
{
	float s = PI * pow(r, 2);
	return s;
}