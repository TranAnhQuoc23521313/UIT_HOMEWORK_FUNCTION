#include <iostream>

using namespace std;

void SapXepTangDan(float&, float&, float&);

int main()
{
	float a, b, c;
	cout << "Nhap vao ba gia tri A,B,C: ";
	cin >> a >> b >> c;
	SapXepTangDan(a, b, c);
	cout << "Gia tri sau khi sap xep: " << a << " " << b << " " << c << endl;
	system("pause");
	return 0;
}

void SapXepTangDan(float& aa, float& bb, float& cc)
{
	if (aa > bb)
	{
		float temp = aa;
		aa = bb;
		bb = temp;
	}
	if (aa > cc)
	{
		float temp = aa;
		aa = cc;
		cc = temp;
	}
	if (bb > cc)
	{
		float temp = bb;
		bb = cc;
		cc = temp;
	}
}