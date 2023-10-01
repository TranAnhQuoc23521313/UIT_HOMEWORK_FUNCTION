#include <iostream>

using namespace std;

int KiemTraLuyThua(int);

int main()
{
	int n;
	cout << "Nhap vao N: ";
	cin >> n;

	if (KiemTraLuyThua(n) == 1)
		cout << "Co Dang 3^m" << endl;
	else
		cout << "Khong co dang 3^m" << endl;
	system("pause");
	return 0;
}

int KiemTraLuyThua(int nn)
{
	int flag = 1;
	int t = nn;
	while (t > 1)
	{
		int du = t % 3;
		if (du != 0)
			flag = 0;
		t = t / 3;
	}
	return flag;
}