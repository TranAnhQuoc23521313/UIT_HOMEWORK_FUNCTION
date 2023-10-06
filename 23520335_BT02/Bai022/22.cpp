#include<iostream>
#include<cmath>
using namespace std;

int don_vi(int n);

int main()
{
	int n;
	cin >> n;
	cout << don_vi(n);
	return 0;
}

int don_vi(int n)
{
	return n % 10;
}
