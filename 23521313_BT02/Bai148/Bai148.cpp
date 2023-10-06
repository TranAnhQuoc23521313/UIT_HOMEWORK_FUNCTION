#include <iostream>

using namespace std;

int KiemTraToanChan(int);

int main()
{
	int n;
	cout << "Nhap N: ";
	cin >> n;

	if (KiemTraToanChan(n) == 1)
		cout << "Toan chu so chan \n";
	else
		cout << "Khong toan chu so chan \n";
	system("pause");
	return 0;
}

int KiemTraToanChan(int nn)
{
	int flag = 1;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			flag = 0;
		t = t / 10;
	}
	return flag;
}