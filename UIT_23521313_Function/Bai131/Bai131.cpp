#include <iostream>
#include <cmath>

using namespace std;

void Nhap(float&, float&);
float TinhCanh(float, float, float, float);
void KiemTraTamGiac(float, float, float);

int main()
{
	float xA, yA;
	cout << "Nhap vao diem A: " << endl;
	Nhap(xA, yA);

	float xB, yB;
	cout << "Nhap vao diem B: " << endl;
	Nhap(xB, yB);

	float xC, yC;
	cout << "Nhap vao diem C: " << endl;
	Nhap(xC, yC);

	float a = TinhCanh(xA, yA, xB, yB);
	float b = TinhCanh(xA, yA, xC, yC);
	float c = TinhCanh(xB, yB, xC, yC);

	KiemTraTamGiac(a, b, c);

	system("pause");
	return 0;
}

float TinhCanh(float x1, float y1, float x2, float y2)
{
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

void KiemTraTamGiac(float aa, float bb, float cc)
{
	if ((aa + bb > cc) && (aa + cc > bb) && (bb + cc > aa))
		cout << "La Tam Giac" << endl;
	else
		cout << "Khong La Tam Giac" << endl;
}

void Nhap(float& xx, float& yy)
{
	cout << "Nhap vao hoanh do: ";
	cin >> xx;
	cout << "Nhap vao tung do: ";
	cin >> yy;
}