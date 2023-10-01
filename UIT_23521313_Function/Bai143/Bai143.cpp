#include <iostream>

using namespace std;

int KtHoanThien(int);

int main()
{
	int n;
	cout << "Nhap N: ";
	cin >> n;

	if (KtHoanThien(n) == 1)
		cout << "La so Hoan Thien \n";
	else
		cout << "Khong phai so hoan thien \n";

	system("pause");
	return 0;
}

int KtHoanThien(int nn)
{
	int s = 0;
	int i = 1;
	while (i < nn)
	{
		if (nn % i == 0)
			s = s + i;
		i++;
	}
	if (s == nn)
		return 1;
	return 0;
}