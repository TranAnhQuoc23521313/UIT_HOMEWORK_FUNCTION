#include<iostream>
#include<cmath>
using namespace std;
float khoang_cach(float,float,float,float);

int main()
{
	float x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	cout << khoang_cach(x1, y1, x2, y2);
	return 0;
}

float khoang_cach(float x1, float y1, float x2, float y2)
{
	float d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	return d;
}
