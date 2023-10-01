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
	float f = 0;
	if (xx >= 5)
		f = 2 * xx * xx + 5 * xx + 9;
	else
		f = -2 * xx * xx + 4 * xx - 9;
	cout << "Gia tri cua f: " << f << endl;
}