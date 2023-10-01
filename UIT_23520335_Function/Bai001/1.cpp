#include<iostream>
#include<cmath>
using namespace std;
float khoang_cach(int x1,int y1,int x2,int y2);

int main()
{
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	cout << khoang_cach(x1, y1, x2, y2);
}

float khoang_cach(int x1, int y1, int x2, int y2)
{
	float d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	return d;
}