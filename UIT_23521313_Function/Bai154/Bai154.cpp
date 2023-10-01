#include <iostream>

using namespace std;

void DayMuaDa(int);

int main()
{
	int n;
	cout << "Nhap vao N: ";
	cin >> n;

	DayMuaDa(n);

	system("pause");
	return 0;
}

void DayMuaDa(int nn)
{
	int ahh = nn;
	cout << ahh << endl;
	while (ahh != 1)
	{
		if (ahh % 2 == 0)
			ahh = ahh / 2;
		else
			ahh = 3 * ahh + 1;
		cout << ahh << endl;
	}
}