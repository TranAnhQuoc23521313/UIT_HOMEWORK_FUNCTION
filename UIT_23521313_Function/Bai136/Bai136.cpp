#include <iostream>

using namespace std;

int KiemTraNamNhuan(int);
void LietKeNamNhuan(int, int);

int main()
{
	int x, y;
	cout << "Nhap vao hai nam X va Y: ";
	cin >> x >> y;

	LietKeNamNhuan(x, y);
	
	system("pause");
	return 0;
}

void LietKeNamNhuan(int xx, int yy)
{
	int n = xx;
	cout << "Cac nam nhuan: " << endl;
	while (n <= yy)
	{
		if (KiemTraNamNhuan(n) == 1)
			cout << n << endl;
		n++;
	}
}

int KiemTraNamNhuan(int nn)
{
	int flag1 = 0;
	int flag2 = 0;
	if ((nn % 4 == 0) && (nn % 100 != 0))
		flag1 = 1;
	if (nn % 400 == 0)
		flag2 = 1;
	if ((flag1 == 1) || (flag2 == 1))
		return 1;
	return 0;
}