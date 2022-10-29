#include <iostream>
#define ll long long
int main()
{
	int n, a, nr(0), even(0), odd(0);;
	std::cin >> n;
	for (int i = 1; i <= n; i++)
	{
		std::cin >> a;
		if (a % 2 == 0)
		{
			even = i;
			nr++;
		}
		else
		{
			odd = i;
			nr--;
		}
	}
	if (nr > 0)
	{
		std::cout << odd;
	}
	else
	{
		std::cout << even;
	}
}