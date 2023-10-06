#include <iostream>
#include <cmath>
using namespace std;

float TimK(int);

int main()
{
	int n;
	cout << "Nhap vao N: ";
	cin >> n;
	cout << "K = " << TimK(n) << endl;
	system("pause");
	return 0;
}

float TimK(int nn)
{
	int t = 1;
	int k = 1;
	while (2 * t <= nn)
	{
		t = t * 2;
		k = k + 1;
	}
	return k;
}