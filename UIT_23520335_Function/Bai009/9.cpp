#include<iostream>
#include<cmath>
using namespace std;
#define PI 3.14
float dien_tich(float r, int n);

int main()
{
	float r;
	cin >> r;
	int n;
	cin >> n;
	cout << dien_tich(r, n);
}

float dien_tich(float r, int n)
{
	return 1.0/2 * n * pow(r, 2) * sin(2*PI/n);
}