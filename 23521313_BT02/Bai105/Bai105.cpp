#include <iostream>
#include <cmath>

using namespace std;

float TongS();

int main()
{
	cout << "Tong S: " << TongS() << endl;
	system("pause");
	return 0;
}

float TongS()
{
	float s = 0;
	float e = 1;
	int i = 1;
	float m = 0;
	while (e >= pow(10, -6))
	{
		m = m + i;
		e = (float)1 / m;
		s = s + e;
		i = i + 1;
	}
	return s;
}