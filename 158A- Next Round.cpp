#include <iostream>
using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;
	int a[1000];
	int rez = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] >= a[k - 1] && a[i] != 0)
		{
			rez++;
		}


	}
	cout << rez;
}