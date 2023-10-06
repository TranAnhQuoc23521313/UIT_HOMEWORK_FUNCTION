#include <iostream>

using namespace std;

void TriTuyetDoi(float&);

int main()
{
	float a;
	cout << "Nhap vao A: ";
	cin >> a;

	float b;
	cout << "Nhap vao B: ";
	cin >> b;

	TriTuyetDoi(a);
	TriTuyetDoi(b);

	cout << "Gia Tri Tuyet Doi Cua A: " << a << endl;
	cout << "Gia Tri Tuyet Doi cua B: " << b << endl;

	system("pause");
	return 0;
}

void TriTuyetDoi(float& aa)
{
	if (aa < 0)
		aa = -1 * aa;
}