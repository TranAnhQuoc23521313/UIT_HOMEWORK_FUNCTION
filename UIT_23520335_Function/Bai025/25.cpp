#include<iostream>
#include<cmath>
using namespace std;

void hoan_vi(int& a, int& b);

int main()
{
	int a, b;
	cin >> a >> b;
	hoan_vi(a,b);
	cout <<"\na="<< a << "\nb=" << b;
	return 0;
}

void hoan_vi(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
