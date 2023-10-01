#include <iostream>

using namespace std;

int BCNN(int, int);

int main()
{
	int a;
	cout << "Nhap A: ";
	cin >> a;

	int b;
	cout << "Nhap B: ";
	cin >> b;

	cout << "Boi Chung Nho Nhat cua A va B: " << BCNN(a, b) << endl;
	system("pause");
	return 0;
}

int BCNN(int aa, int bb)
{
	int m = abs(aa);
	int n = abs(bb);
	while (m * n != 0)
	{
		if (m > n)
			m = m - n;
		else
			n = n - m;
	}
	return abs(aa * bb) / (m + n);
}