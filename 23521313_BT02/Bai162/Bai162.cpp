#include <iostream>

using namespace std;

int KiemTraChuSoGiamDan(int);

int main()
{
	int n;
	cout << "Nhap vao N: ";
	cin >> n;
	
	if (KiemTraChuSoGiamDan(n) == 1)
		cout << "Giam Dan \n";
	else
		cout << "Khong Giam \n";

	system("pause");
	return 0;
}

int KiemTraChuSoGiamDan(int nn)
{
	int flag = 1;
	int t = nn;
	while (t >= 10)
	{
		int dv = t % 10;
		int hc = (t / 10) % 10;
		if (hc < dv)
			flag = 0;
		t = t / 10;
	}
	return flag;
}