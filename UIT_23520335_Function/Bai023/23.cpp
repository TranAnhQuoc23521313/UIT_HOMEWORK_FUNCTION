#include<iostream>
#include<cmath>
using namespace std;

int hang_chuc(int n);

int main()
{
	int n;
	cin >> n;
	cout << hang_chuc(n);
	return 0;
}

int hang_chuc(int n)
{
	return (n/10) % 10;
}
