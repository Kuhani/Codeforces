#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[1000];
	int min, max;
	int nr = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	min = a[0];
	max = a[0];
	for (int i = 0; i < n; i++) {
		if (min > a[i])
		{
			min = a[i];
			nr++;
		}
		if (max < a[i])
		{
			max = a[i];
			nr++;
		}
	}
	cout << nr;
}