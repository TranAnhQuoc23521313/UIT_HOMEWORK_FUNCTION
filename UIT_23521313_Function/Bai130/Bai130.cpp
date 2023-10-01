#include <iostream>

using namespace std;

void KiemTraTamGiac(float, float, float);

int main()
{
	float x, y, z;
	cout << "Nhap vao ba canh X,Y,Z: ";
	cin >> x >> y >> z;
	
	KiemTraTamGiac(x, y, z);
	
	system("pause");
	return 0;
}

void KiemTraTamGiac(float xx, float yy, float zz)
{
	if ((xx + yy > zz) && (xx + zz > yy) && (yy + zz > xx))
		cout << "La tam giac" << endl;
	else
		cout << "Khong la tam giac" << endl;
}