#include<iostream>
#include<cmath>
using namespace std;
float doi_do(float );

int main()
{
	float c;
	cin >> c;
	cout << doi_do(c);
}

float doi_do(float c)
{
	return 9.0 / 5 * c + 32;;
}
