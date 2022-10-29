#include <iostream>
#define ll long long
int main()
{
	int t;
	std::cin >> t;
	ll n;
	for (int i = 0; i < t; i++)
	{
		std::cin >> n;
		if (n & (n - 1))
		{
			std::cout << "YES" << std::endl;
		}
		else
		{
			std::cout << "NO" << std::endl;
		}
	}
}