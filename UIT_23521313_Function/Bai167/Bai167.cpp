#include <iostream>
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
	int s = 0;
	int k = 0;
	while (s + k + 1 < nn)
	{
		k = k + 1;
		s = s + k;
	}
	return k;
}