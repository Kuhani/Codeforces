#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int* a = new int[n];
	int nr = 0;
	int high = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] >= a[i - 1])
		{
			nr++;
		}
		else { nr = 1; }
		if (high < nr)
		{
			high = nr;
		}
	}
	cout << high;
	delete a;
}
