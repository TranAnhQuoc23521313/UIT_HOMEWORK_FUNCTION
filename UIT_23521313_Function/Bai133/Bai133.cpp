#include <iostream>

using namespace std;

void KiemTraTamGiac(float, float, float);

int main()
{
	float x;
	cout << "Nhap vao canh X: ";
	cin >> x;

	float y;
	cout << "Nhap vao canh Y: ";
	cin >> y;

	float z;
	cout << "Nhap vao canh Z: ";
	cin >> z;
	
	KiemTraTamGiac(x, y, z);

	system("pause");
	return 0;
}

void KiemTraTamGiac(float xx, float yy, float zz)
{
	if ((xx + yy > zz) && (xx + zz > yy) && (yy + zz > xx))
		if ((xx == yy) && (yy == zz))
			cout << "Tam giac Deu" << endl;
		else
		{
			if ((xx * xx == yy * yy + zz * zz) || (yy * yy == xx * xx + zz * zz) || (zz * zz == xx * xx + yy * yy))
			{
				if ((xx == yy) || (yy == zz) || (zz == xx))
					cout << "Tam giac Vuong Can" << endl;
				else
					cout << "Tam giac Vuong" << endl;
			}
			else
			{
				if ((xx == yy) || (yy == zz) || (zz == xx))
					cout << "Tam giac Can" << endl;
				else
					cout << "Tam giac Thuong" << endl;
			}
		}
	else
		cout << "Khong la tam giac" << endl;
}