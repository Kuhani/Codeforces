#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a = 0, rez = 0;
	if (n >= 100)
	{
		a = n / 100;
		rez = rez + a;
		n = n - (a * 100);
	}
	if (n >= 20)
	{
		a = n / 20;
		rez = rez + a;
		n = n - (a * 20);
	}
	if (n >= 10)
	{
		a = n / 10;
		rez = rez + a;
		n = n - (a * 10);
	}
	if (n >= 5)
	{
		a = n / 5;
		rez = rez + a;
		n = n - (a * 5);
	}
	if (n >= 1)
	{
		a = n / 1;
		rez = rez + a;
		n = n - (a * 1);
	}
	cout << rez;
}