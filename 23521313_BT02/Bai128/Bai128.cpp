#include <iostream>

using namespace std;

void SapXepTangDan(float&, float&);

int main()
{
	float a, b;
	cout << "Nhap vao hai gia tri A va B: ";
	cin >> a >> b;

	SapXepTangDan(a, b);
	cout << "Gia tri cua A va B sau khi sap xep: " << a << " " << b << endl;

	system("pause");
	return 0;
}

void SapXepTangDan(float& aa, float& bb)
{
	if (aa > bb)
	{
		float temp = aa;
		aa = bb;
		bb = temp;
	}
}