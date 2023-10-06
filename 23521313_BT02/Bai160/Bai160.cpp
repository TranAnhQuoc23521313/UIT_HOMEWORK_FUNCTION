#include <iostream>

using namespace std;

int DemSoLuongChuSoDauTien(int);

int main()
{
	int n;
	cout << "Nhap vao N: ";
	cin >> n;
	
	cout << "So Luong Chu So Dau tien cua N: " << DemSoLuongChuSoDauTien(n) << endl;

	system("pause");
	return 0;
}

int DemSoLuongChuSoDauTien(int nn)
{
	int dt = nn;
	while (dt >= 10)
		dt = dt / 10;
	int dem = 0;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv == dt)
			dem++;
		t = t / 10;
	}
	return dem;
}