#include <iostream>

using namespace std;

int KiemTraSoChinhPhuong(int);

int main()
{
	int n;
	cout << "Nhap N: ";
	cin >> n;

	if(KiemTraSoChinhPhuong(n)==1)
		cout << "La so chinh phuong \n";
	else
		cout << "Khong phai la so chinh phuong \n";
	system("pause");
	return 0;
}

int KiemTraSoChinhPhuong(int nn)
{
	int flag = 0;
	int i = 0;
	while (i <= nn)
	{
		if (i * i == nn)
			flag = 1;
		i++;
	}
	return flag;
}