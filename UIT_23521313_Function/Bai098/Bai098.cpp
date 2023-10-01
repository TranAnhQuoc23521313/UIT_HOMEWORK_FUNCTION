#include <iostream>
#include <cmath>

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
	int i = 2;
	float s = 0;
	while (i <= nn)
	{
		s = pow(s + i, (float)1 / i);
		i = i + 1;
	}
	return s;
}