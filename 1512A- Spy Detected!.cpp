#include <iostream>

int main()
{
	int t, n, a[100], nr;
	int rez[10] = {};
	int fals = 0;
	std::cin >> t;

	for (int i = 0; i < t; i++)
	{
		std::cin >> n;
		for (int j = 0; j < n; j++)
		{
			std::cin >> a[j];
			nr = a[0];
			if (nr != a[j] && nr == a[j - 1])
			{
				fals = j + 1;
			}
			if(nr!=a[j]&&nr != a[j-1])
			{
				fals = 1;
			}
		}
		std::cout<< fals << std::endl;
	}
}