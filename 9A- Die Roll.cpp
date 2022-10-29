#include <iostream>
using namespace std;
int gcd(int x, int y) {
	if (x % y == 0)
	{
		return y;
	}
	else
	{
		return gcd(y, x % y);
	}
}
int main()
{
	int y, w;
	cin >> y >> w;
	int max;
	if (y - w > 0)
	{
		max = y;
	}
	else
	{
		max = w;
	}
	int p = 7 - max;
	int a = gcd(p, 6);
	p = p / a;
	cout << p << "/" << 6 / a << endl;
	return 0;

}