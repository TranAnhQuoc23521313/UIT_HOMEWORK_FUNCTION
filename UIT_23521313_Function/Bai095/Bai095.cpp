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
	float s = 0;
	int i = nn;
	while (i > 0)
	{
		s = sqrt(i + s);
		i = i - 1;
	}
	return s;
}