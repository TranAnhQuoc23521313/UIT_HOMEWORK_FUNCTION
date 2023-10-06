#include<iostream>
#include<cmath>
using namespace std;

int hang_tram(int n);

int main()
{
	int n;
	cin >> n;
	cout << hang_tram(n);
	return 0;
}

int hang_tram(int n)
{
	return (n / 100) % 10;
}
