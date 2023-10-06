#include <iostream>

using namespace std;

int KiemTraNamNhuan(int);

int main()
{
	int n;
	cout << "Nhap vao nam N: ";
	cin >> n;

	if (KiemTraNamNhuan(n)==1)
		cout << "La nam nhuan \n";
	else
		cout << "Khong phai la nam nhuan \n";
	system("pause");
	return 0;
}

int KiemTraNamNhuan(int nn)
{
	int flag1 = 0;
	int flag2 = 0;
	if ((nn % 4 == 0) && (nn % 100 != 0))
		flag1 = 1;
	if (nn % 400 == 0)
		flag2 = 1;
	if ((flag1 == 1) || (flag2 == 1))
		return 1;
	return 0;
}