#include <iostream>
#include <cmath>

using namespace std;

float EX(float);

int main()
{
	float x;
	cout << "Nhap vao X: ";
	cin >> x;

	cout << "e^X: " << EX(x) << endl;

	system("pause");
	return 0;
}

float EX(float xx)
{
	float s = 1;
	float t = 1;
	float m = 1;
	float e = 1;
	int i = 1;
	while (e >= pow(10, -6))
	{
		t = t * xx;
		m = m * i;
		e = t / m;
		s = s + e;
		i = i + 1;
	}
	return s;
}