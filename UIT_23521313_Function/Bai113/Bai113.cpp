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
	float at = 2;
	int i = 2;
	float ahh = 0;
	while (i <= nn)
	{
		ahh = at + 2 * i + 1;
		i = i + 1;
		at = ahh;
	}
	return ahh;
}