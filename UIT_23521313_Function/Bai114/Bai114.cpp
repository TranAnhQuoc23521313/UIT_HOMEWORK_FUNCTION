#include <iostream>

using namespace std;

float SoHangN(int);

int main()
{
	int n;
	cout << "Nhap vao N: ";
	cin >> n;

	cout << "So Hang Thu N: " << SoHangN(n) << endl;

	system("pause");
	return 0;
}

float SoHangN(int nn)
{
	float at = -2;
	float tt = 3;
	float pp = 7;
	int i = 2;
	float ahh = 0;
	while (i <= nn)
	{
		tt = tt * 3;
		pp = pp * 7;
		ahh = 5 * at + 2 * tt - 6 * pp + 12;
		i = i + 1;
		at = ahh;
	}
	return ahh;
}