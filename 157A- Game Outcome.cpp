#include <iostream>


int main()
{
	int n;
	int a[30][30];
	std::cin >> n;
	int nr = 0;
	int b[30] = { 0 };
	int c[30] = { 0 };
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cin >> a[i][j];
			b[i] += a[i][j];
		
		}
	}
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < n; i++)
		{
			c[j] += a[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (b[i] < c[j])
			{
				nr++;
			}

		}
	}
	std::cout << nr;
}