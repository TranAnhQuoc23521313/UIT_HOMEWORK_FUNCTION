#include <iostream>
#include <cmath>

using namespace std;

void Nhap(float&, float&);
void KiemTraTamGiac(float, float);
float TinhDienTich(float, float, float, float, float, float);

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

	float xM, yM;
	cout << "Nhap vao diem M: " << endl;
	Nhap(xM, yM);

	float SABC = TinhDienTich(xA, yA, xB, yB, xC, yC);
	float SMAB = TinhDienTich(xM, yM, xA, yA, xB, yB);
	float SMBC = TinhDienTich(xM, yM, xB, yB, xC, yC);
	float SMAC = TinhDienTich(xM, yM, xA, yA, xC, yC);
	float S = SMAB + SMBC + SMAC;
	KiemTraTamGiac(SABC, S);
	system("pause");
	return 0;
}

void Nhap(float& xx, float& yy)
{
	cout << "Nhap vao hoanh do X:";
	cin >> xx;
	cout << "Nhap vao tung do Y: ";
	cin >> yy;
}

float TinhDienTich(float x1, float y1, float x2, float y2, float x3, float y3)
{
	return abs(x1 * y2 + x2 * y3 + x3 * y1 - x2 * y1 - x3 * y2 - x1 * y3) / 2;
}

void KiemTraTamGiac(float ABC, float S_M)
{
	if (S_M == ABC)
		cout << "M nam trong ABC" << endl;
	else
		cout << "M nam ngoai ABC" << endl;
}