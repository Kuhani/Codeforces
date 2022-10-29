#include <iostream>

int main()
{
	long long n, m, a;
	std::cin >> n >> m >> a;
	long long x = n / a;
	long long y = m / a;
	if (n % a != 0)
	{
		x++;
	}
	if (m % a != 0)
	{
		y++;
	}
	long long rez = x * y;
	std::cout << rez;
}