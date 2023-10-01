#include <iostream>

using namespace std;

void GiaiBacNhat(float, float);

int main()
{
	float a;
	cout << "Nhap A: ";
	cin >> a;

	float b;
	cout << "Nhap B: ";
	cin >> b;

	GiaiBacNhat(a, b);

	system("pause");
	return 0;
}

void GiaiBacNhat(float aa, float bb)
{
	if (aa == 0)
	{
		if (bb == 0)
			cout << "Vo so nghiem";
		else
			cout << "Vo nghiem";
	}
	else
	{
		float x = (-1 * bb) / aa;
		cout << x << endl;
	}
}