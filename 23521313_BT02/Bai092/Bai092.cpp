#include <iostream>

using namespace std;

float TongS(float, int);

int main()
{
	float x;
	cout << "Nhap vao X: ";
	cin >> x;

	int n;
	cout << "Nhap vao N: ";
	cin >> n;

	cout << "Tong S(x,n): " << TongS(x, n) << endl;

	system("pause");
	return 0;
}

float TongS(float xx, int nn)
{
	float s = 1 - xx;
	float t = xx;
	float m = 1;
	int i = 3;
	int dau = 1;
	while (i <= (2 * nn + 1))
	{
		t = t * xx * xx;
		m = m * i * (i - 1);
		s = s + ((float)dau * t) / m;
		i = i + 2;
		dau = -1 * dau;
	}
	return s;
}