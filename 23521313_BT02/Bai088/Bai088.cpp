#include <iostream>

using namespace std;

float TongS(int);

int main()
{

	int n;
	cout << "Nhap vao N: ";
	cin >> n;

	cout << "Tong S(n): " << TongS(n) << endl;

	system("pause");
	return 0;
}

float TongS(int nn)
{
	float s = 0;
	float m = 0;
	int i = 1;
	int dau = 1;
	while (i <= nn)
	{
		m = m + i;
		s = s + (float)dau / m;
		i = i + 1;
		dau = -1 * dau;
	}
	return s;
}