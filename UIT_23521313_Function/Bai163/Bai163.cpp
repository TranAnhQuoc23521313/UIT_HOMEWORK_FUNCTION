#include <iostream>

using namespace std;

int UocSoLeLonNhat(int);

int main()
{
	int n;
	cout << "Nhap vao N: ";
	cin >> n;
	cout << "Uoc So Le Lon Nhat: " << UocSoLeLonNhat(n) << endl;
	system("pause");
	return 0;
}

int UocSoLeLonNhat(int nn)
{
	int t = nn;
	while (t % 2 == 0)
		t = t / 2;
	return t;
}