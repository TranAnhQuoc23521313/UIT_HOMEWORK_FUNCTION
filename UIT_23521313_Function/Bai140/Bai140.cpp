#include <iostream>
#include <cmath>

using namespace std;

void GiaiPhuongTrinhBacHai(float,float,float);

int main()
{
	float a;
	cout << "Nhap A: ";
	cin >> a;

	float b;
	cout << "Nhap B: ";
	cin >> b;

	float c;
	cout << "Nhap C: ";
	cin >> c;

	GiaiPhuongTrinhBacHai(a, b, c);

	system("pause");
	return 0;
}

void GiaiPhuongTrinhBacHai(float aa, float bb, float cc)
{
	float delta = pow(bb, 2) - 4 * aa * cc;
	if (delta <= 0)
	{
		if (delta == 0)
		{
			float x = (-1 * bb) / (2 * aa);
			cout << "Nghiem Kep X:" << x << endl;
		}
		else
			cout << "Vo nghiem" << endl;
	}
	else
	{
		float x1 = (-1 * bb + sqrt(delta)) / (2 * aa);
		float x2 = (-1 * bb - sqrt(delta)) / (2 * aa);
		cout << "Nghiem x1: " << x1 << endl;
		cout << "Nghiem x2: " << x2 << endl;
	}
}
