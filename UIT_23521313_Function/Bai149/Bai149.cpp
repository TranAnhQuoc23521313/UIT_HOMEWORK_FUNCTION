#include <iostream>

using namespace std;

int UCLN(int, int);

int main()
{
	int a;
	cout << "Nhap A: ";
	cin >> a;

	int b;
	cout << "Nhap B: ";
	cin >> b;
	
	cout << "Uoc Chung Lon Nhat cua A va B: " << UCLN(a, b) << endl;

	system("pause");
	return 0;
}

int UCLN(int aa, int bb)
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
	return m + n;
}