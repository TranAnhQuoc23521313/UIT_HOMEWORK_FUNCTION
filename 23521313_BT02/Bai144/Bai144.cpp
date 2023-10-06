#include <iostream>

using namespace std;

int KiemTraSoNguyenTo(int);

int main()
{
	int n;
	cout << "Nhap N: ";
	cin >> n;

	if(KiemTraSoNguyenTo(n)==1)
		cout << "La so nguyen to \n";
	else
		cout << "Khong phai la so nguyen to \n";
	system("pause");
	return 0;
}

int KiemTraSoNguyenTo(int nn)
{
	int dem = 0;
	int i = 1;
	while (i <= nn)
	{
		if (nn % i == 0)
			dem++;
		i++;
	}
	if (dem == 2)
		return 1;
	return 0;
}