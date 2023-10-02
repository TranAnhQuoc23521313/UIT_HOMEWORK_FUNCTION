#include<iostream>
#include<cmath>
using namespace std;

void hoan_vi(float& a, float& b);

int main()
{
	float a, b;
	cin >> a >> b;
	hoan_vi(a, b);
	cout << "\na=" << a << "\nb=" << b;
	return 0;
}

void hoan_vi(float& a, float& b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}
