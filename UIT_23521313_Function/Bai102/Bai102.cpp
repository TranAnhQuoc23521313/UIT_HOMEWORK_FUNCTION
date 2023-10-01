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
	float e = 0.5;
	int i = 2;
	while (e >= pow(10, -6))
	{
		e = (float)1 / i;
		s = s + e;
		i = i + 2;
	}
	return s;
}