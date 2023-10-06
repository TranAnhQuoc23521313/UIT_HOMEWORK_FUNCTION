#include <iostream>
#include <cmath>

using namespace std;

float e();

int main()
{
	cout << "Hang so e co gia tri: " << e() << endl;
	system("pause");
	return 0;
}

float e()
{
	float s = 1;
	float m = 1;
	float e = 1;
	int i = 1;
	while (e >= pow(10, -6))
	{
		m = m * i;
		e = (float)1 / m;
		s = s + e;
		i = i + 1;
	}
	return s;
}