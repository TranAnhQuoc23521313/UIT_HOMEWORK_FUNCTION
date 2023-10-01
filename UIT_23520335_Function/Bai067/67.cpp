#include<iostream>
#include<cmath>
using namespace std;

void ktra_so_le(int n);

int main()
{
	int n;
	cin >> n;
	ktra_so_le(n);
	return 0;
}

void ktra_so_le(int n)
{
	int flag = 0;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
		{
			flag = 1;
		}
		t /= 10;
	}
	if (flag == 1)
	{
		cout << "TT\n";
	}
	else
		cout << "ko TT\n";
}
