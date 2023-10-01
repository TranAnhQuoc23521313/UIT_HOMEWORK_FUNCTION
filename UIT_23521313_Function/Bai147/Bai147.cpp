#include <iostream>

using namespace std;

int KiemTraToanLe(int);

int main()
{
	int n;
	cout << "Nhap N: ";
	cin >> n;

	if (KiemTraToanLe(n) == 1)
		cout << "Toan chu so le \n";
	else
		cout << "Khong toan chu so le \n";
	system("pause");
	return 0;
}

int KiemTraToanLe(int nn)
{
	int flag = 1;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			flag = 0;
		t = t / 10;
	}
	return flag;
}