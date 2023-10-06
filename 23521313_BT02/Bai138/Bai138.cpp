#include <iostream>

using namespace std;

void TinhHamSo(float);

int main()
{
	float x;
	cout << "Nhap X: ";
	cin >> x;

	TinhHamSo(x);

	system("pause");
	return 0;
}

void TinhHamSo(float xx)
{
	float f;
	if (xx >= 0)
	{
		if (xx <= 1)
			f = 5 * xx - 7;
		else
			f = 2 * pow(xx, 3) + 5 * pow(xx, 2) - 8 * xx + 3;
	}
	else
		f = -2 * pow(xx, 3) + 6 * xx + 9;
	cout << "Gia tri cua f: " << f << endl;
}