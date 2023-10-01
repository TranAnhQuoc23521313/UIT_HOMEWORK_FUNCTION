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
	float s = xx;
	float t = xx;
	int i = 3;
	int dau = -1;
	while (i <= (2 * nn + 1))
	{
		t = t * xx * xx;
		s = s + dau * t;
		i = i + 2;
		dau = -1 * dau;
	}
	return s;
}