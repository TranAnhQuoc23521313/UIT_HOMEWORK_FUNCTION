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
	int i = 1;
	float s = 0;
	float t = 1;
	while (i <= nn)
	{
		t = t * i;
		s = pow(s + t, (float)1 / (i + 1));
		i = i + 1;
	}
	return s;
}