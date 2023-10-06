#include <iostream>

using namespace std;

int DemSoLuongChuSoLonNhat(int);

int main()
{
	int n;
	cout << "Nhap vao N: ";
	cin >> n;

	cout << "So Luong Chu So Lon Nhat cua N: " << DemSoLuongChuSoLonNhat(n) << endl;

	system("pause");
	return 0;
}

int DemSoLuongChuSoLonNhat(int nn)
{
	int lc = nn % 10;
	int dem = 0;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv > lc)
			lc = dv;
		t = t / 10;
	}
	t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv == lc)
			dem++;
		t = t / 10;
	}
	return dem;
}