#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int d = a + (b * c);
	int e = (a + b) * c;
	int f = a * b * c;
	int g = a * (b + c);
	int h = a + b + c;

	int cmp = max(d, e);
	int cmp2 = max(f, g);
	int cmp3 = max(cmp, cmp2);
	int cmp4 = max(cmp3, h);
	cout << cmp4;
}