#include <iostream>

using namespace std;

int KiemTraDoiXung(int);

int main()
{
	int n;
	cout << "Nhap N: ";
	cin >> n;

	if(KiemTraDoiXung(n)==n)
		cout << "La so doi xung \n";
	else
		cout << "Khong phai la so doi xung \n";
	system("pause");
	return 0;
}

int KiemTraDoiXung(int nn)
{
	int dn = 0;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	return dn;
}