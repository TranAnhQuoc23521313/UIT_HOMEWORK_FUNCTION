#include<iostream>
#include<cmath>
using namespace std;

int phep_nhan(int x);

int main()
{
	int x;
	cin >> x;
	cout << phep_nhan(x);
	return 0;
}

int phep_nhan(int x)
{
	int x2 = x * x;
	int x4 = x2 * x2;
	int x6 = x4 * x2;
	return x6;
}
