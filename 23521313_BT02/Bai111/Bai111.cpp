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
	float s = 3;
	int dau = 1;
	float e = 3;
	int i = 2;
	while (e >= pow(10, -6))
	{
		e = (float)4 / (i * (i + 1) * (i + 2));
		s = s + dau * e;
		dau = -1 * dau;
		i = i + 2;
	}
	return s;
}