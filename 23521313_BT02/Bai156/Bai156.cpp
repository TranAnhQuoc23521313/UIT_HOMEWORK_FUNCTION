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
	int i = 1;
	while (i <= nn)
	{
		t = t * i;
		cout << "So hang thu " << i << ": " << t << endl;
		i = i + 1;
	}
}