#include <iostream>

using namespace std;

int KiemTraChuSoTangDan(int);

int main()
{
	int n;
	cout << "Nhap vao N: ";
	cin >> n;

	if (KiemTraChuSoTangDan(n) == 1)
		cout << "Tang Dan \n";
	else
		cout << "Khong Tang \n";

	system("pause");
	return 0;
}

int KiemTraChuSoTangDan(int nn)
{
	int flag = 1;
	int t = nn;
	while (t >= 10)
	{
		int dv = t % 10;
		int hc = (t / 10) % 10;
		if (hc > dv)
			flag = 0;
		t = t / 10;
	}
	return flag;
}