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
	int i = 2;
	int dau = -1;
	while (i <= 2 * nn)
	{
		t = t * xx * xx;
		s = s + dau * t;
		i = i + 2;
		dau = -1 * dau;
	}
	return s;
}