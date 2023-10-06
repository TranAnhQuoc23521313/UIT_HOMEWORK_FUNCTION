#include <iostream>

using namespace std;

float GiaTriNhoNhat(float, float);

int main()
{
	float a, b;
	cout << "Nhap vao hai gia tri A va B: ";
	cin >> a >> b;

	cout << "Gia tri nho nhat giua A va B: " << GiaTriNhoNhat(a, b) << endl;

	system("pause");
	return 0;
}

float GiaTriNhoNhat(float aa, float bb)
{
	float lc = aa;
	if (lc > bb)
		lc = bb;
	return lc;
}