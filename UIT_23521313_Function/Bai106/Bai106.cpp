#define _USE_MATH_DEFINES 
#include <iostream>
#include <cmath>

using namespace std;

float SinX(float);

int main()
{
	float x;
	cout << "Nhap vao X: ";
	cin >> x;
	cout << "Sin(x): " << SinX(x) << endl;
	system("pause");
	return 0;
}

float SinX(float x_x)
{
	float xx = (x_x * M_PI) / 180;
	float s = xx;
	float t = xx;
	float m = 1;
	int dau = -1;
	float e = xx;
	int i = 3;
	while (e >= pow(10, -6))
	{
		t = t * xx * xx;
		m = m * (i - 1) * i;
		e = t / m;
		s = s + dau * e;
		dau = -1 * dau;
		i = i + 2;
	}
	return s;
}