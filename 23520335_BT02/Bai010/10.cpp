#include<iostream>
#include<cmath>
using namespace std;

float do_dai_canh(float , float , float , float );
float chu_vi(float , float , float );

int main()
{
	float x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	float a = do_dai_canh(x1, y1, x2, y2);
	float b = do_dai_canh(x2, y2, x3, y3);
	float c = do_dai_canh(x1, y1, x3, y3);
	cout << chu_vi(a, b, c);
	return 0;
}

float do_dai_canh(float x1, float y1, float x2, float y2)
{
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

float chu_vi(float a, float b, float c)
{
	return a + b + c;
}
