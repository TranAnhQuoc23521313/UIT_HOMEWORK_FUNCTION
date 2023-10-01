#include <iostream>

using namespace std;

void BatDangThuc(float, float, float);

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

	BatDangThuc(x, y, z);

	system("pause");
	return 0;
}

void BatDangThuc(float xx, float yy, float zz)
{
	if ((xx <= yy) && (yy <= zz))
		cout << "Bat dang thuc dung" << endl;
	else
		cout << "Bat dang thuc khong dung" << endl;
}