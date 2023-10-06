#include <iostream>
#include <cmath>

using namespace std;

float Pi();

int main()
{
	cout << "Hang so Pi co gia tri: " << Pi() << endl;
	system("pause");
	return 0;
}

float Pi()
{
	float s = 0;
	float e = 4;
	int i = 1;
	int dau = 1;
	while (e >= pow(10, -6))
	{
		e = (float)4 / i;
		s = s + dau * e;
		i = i + 2;
		dau = -1 * dau;
	}
	return s;
}