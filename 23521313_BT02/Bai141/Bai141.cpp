#include <iostream>

using namespace std;

int ChuSoDauTien(int);

int main()
{
	int n;
	cout << "Nhap N: ";
	cin >> n;

	cout << "Chu so dau tien cua N: " << ChuSoDauTien(n) << endl;

	system("pause");
	return 0;
}

int ChuSoDauTien(int nn)
{
	int dt = abs(nn);
	while (dt >= 10)
	{
		dt = dt / 10;
	}
	return dt;
}