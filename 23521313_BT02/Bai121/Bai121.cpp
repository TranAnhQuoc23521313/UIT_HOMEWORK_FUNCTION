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
	float att = 1;
	float at = 1;
	int i = 2;
	float ahh = 0;
	while (i <= nn)
	{
		ahh = at + att;
		i = i + 1;
		att = at;
		at = ahh;
	}
	return ahh;
}