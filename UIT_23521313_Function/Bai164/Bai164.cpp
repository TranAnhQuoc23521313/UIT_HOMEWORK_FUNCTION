#include <iostream>
using namespace std;

float TongS(int);

int main()
{
	int n;
	cout << "Nhap vao N: ";
	cin >> n;

	cout << "Ket Qua S = " << TongS(n) << endl;

	system("pause");
	return 0;
}

float TongS(int nn)
{
	float s = 1;
	int i = 1;
	while (i <= nn)
	{
		s = (float)1 / (1 + s);
		i++;
	}
	return s;
}