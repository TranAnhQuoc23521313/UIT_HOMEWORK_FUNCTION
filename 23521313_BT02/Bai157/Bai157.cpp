#include <iostream>

using namespace std;

void SoHangThuI(int);

int main()
{
	int n;
	cout << "Nhap vao N: ";
	cin >> n;
	SoHangThuI(n);
	system("pause");
	return 0;
}

void SoHangThuI(int nn)
{
	float s = 0;
	int i = 1;
	while (i <= nn)
	{
		s = s + (float)1 / i;
		cout << s << endl;
		i = i + 1;
	}
}