#include<iostream>
#include<cmath>
using namespace std;

void ktra_so_chan(int n);

int main()
{
	int n;
	cin >> n;
	ktra_so_chan(n);
	return 0;
}

void ktra_so_chan(int n)
{
	int flag = 0;
	float t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
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
