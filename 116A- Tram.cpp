#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[1000];
	int b[1000];

	int max = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i] >> b[i];
	}
	int p = b[0];
	max = b[0];
	for (int i = 1; i < n; i++)
	{
		p = p - a[i];
		if (max < p)
		{
			max = p;
		}
		p = p + b[i];
		if (max < p)
		{
			max = p;
		}
	}

	cout << max;

}