#include <iostream>
#define ll long long
int main()
{
	int n, m;
	std::cin >> n >> m;
	int c = 0;
	for (int i = 0; i < n; i++)
	{
		
		for (int j = 0; j < m; j++)
		{
			if (i % 2 == 0)
			{
				std::cout << "#";
			}
		}
		if (i % 2 != 0)
		{
			if(c%2==0)
			{
				if (i % 2 != 0)
				{
					for (int k = 0; k < m - 1; k++)
					{
						std::cout << ".";
					}
					std::cout << "#";
				}
			}
			if (c %2!= 0)
			{

				std::cout << "#";
				for (int k = 0; k < m - 1; k++)
				{
					std::cout << ".";
				}
				c == 0;
			}
			c++;
		}
		std::cout << std::endl;
	}
}