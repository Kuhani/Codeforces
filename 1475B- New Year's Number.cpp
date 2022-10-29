#include <iostream>
#define ll long long
int main()
{
	int n;
	std::cin >> n;
	int nr;
	ll a(0), b(0);

	for (int i = 0; i < n; i++)
	{
		std::cin >> nr;
		a = nr % 2020;
		b = nr / 2020;
		if (a <= b)
		{
			std::cout << "YES" << std::endl;
		}
		else
		{
			std::cout << "NO" << std::endl;
		}
	}
}