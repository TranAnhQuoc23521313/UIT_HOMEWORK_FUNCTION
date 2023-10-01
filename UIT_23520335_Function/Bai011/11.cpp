#include<iostream>
#include<cmath>
using namespace std;

float do_dai_canh(int x1, int y1, int x2, int y2);
float dien_tich(float a, float b, float c);

int main()
{
	int x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	float a = do_dai_canh(x1, y1, x2, y2);
	float b = do_dai_canh(x2, y2, x3, y3);
	float c = do_dai_canh(x1, y1, x3, y3);
	cout << dien_tich(a, b, c);
	return 0;
}

float do_dai_canh(int x1, int y1, int x2, int y2)
{
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

float dien_tich(float a, float b, float c)
{
	float p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}