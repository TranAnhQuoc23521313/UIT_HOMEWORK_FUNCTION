#include<iostream>
#include<cmath>
using namespace std;
float doi_do(float );

int main()
{
	float f;
	cin >> f;
	cout << doi_do(f);
}

float doi_do(float f)
{
	return 5.0 / 9 * f - 32;
}
