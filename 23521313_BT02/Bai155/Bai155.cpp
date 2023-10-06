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
	float t = 1;
	int i = 0;
	while (i <= nn)
	{
		t = t * 2;
		cout << "So Hang Thu " << i << ": " << t << endl;
		i = i + 1;
	}
}