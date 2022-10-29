#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int p;
	cin >> p;
	int x[100] = {};
	int y[100] = {};
	int z[100] = {};
	int nr = 0;
	int max = p;
	int rez = 0;
	for (int i = 0; i < p; i++)
	{
		cin >> x[i];
	}
	int q;
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		cin >> y[i];
	}
	if (q > p)
	{
		max = q;
	}
	for (int i = 0; i < max; i++)
	{
		nr = x[i];
		z[nr]++;
		nr = y[i];
		z[nr]++;
	}

	for (int i = 1; i <= n; i++)
	{
		if (z[i] == 0)
		{
			cout << "Oh, my keyboard!";
			rez = 10;
			break;
		}
	}
	if (rez == 0)
	{
		cout << "I become the guy.";
	}

}