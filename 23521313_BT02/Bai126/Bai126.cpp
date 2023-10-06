#include <iostream>

using namespace std;

float GiaTriLonNhat(float, float);

int main()
{
	float a, b;
	cout << "Nhap vao hai gia tri A va B: ";
	cin >> a >> b;

	cout << "Gia tri lon nhat giua A va B: " << GiaTriLonNhat(a, b) << endl;

	system("pause");
	return 0;
}

float GiaTriLonNhat(float aa, float bb)
{
	float lc = aa;
	if (lc < bb)
		lc = bb;
	return lc;
}