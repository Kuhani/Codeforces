#include <iostream>
using namespace std;
int main()
{
	int n, h;
	cin >> n >> h;
	int a[1000];
	int rez = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] > h)
		{
			rez = rez + 2;
		}
		else {
			rez++;
		}

	}
	cout << rez;
}
