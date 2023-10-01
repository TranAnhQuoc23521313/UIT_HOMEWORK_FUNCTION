#include<iostream>
#include<cmath>
using namespace std;
#define PI 3.14
float chu_vi(float r, int n);

int main()
{
	float r;
	cin >> r;
	int n;
	cin >> n;
	cout << chu_vi(r,n);
}

float chu_vi(float r, int n)
{
	return 2*n*r*sin(PI/n);
}