#include <iostream>

using namespace std;

void SoHangN(int);

int main()
{
	int n;
	cout << "Nhap vao N: ";
	cin >> n;

	cout << "So Hang Thu N: ";
	SoHangN(n);

	system("pause");
	return 0;
}

void SoHangN(int nn)
{
	float at = 1;
	float bt = 1;
	int i = 2;
	float ahh = 0;
	float bhh = 0;
	while (i <= nn)
	{
		ahh = 3 * bt + 2 * at;
		bhh = at + 3 * bt;
		i = i + 1;
		at = ahh;
		bt = bhh;
	}
	cout << ahh << " " << bhh << endl;
}