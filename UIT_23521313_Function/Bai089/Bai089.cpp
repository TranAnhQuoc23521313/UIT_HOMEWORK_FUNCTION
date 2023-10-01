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
	float s = 0;
	float t = 1;
	float m = 0;
	int i = 1;
	int dau = -1;
	while (i <= nn)
	{
		t = t * xx;
		m = m + i;
		s = s + ((float)dau * t) / m;
		i = i + 1;
		dau = -1 * dau;
	}
	return s;
}