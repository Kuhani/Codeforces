#include <iostream>
#define ll long long
int main()
{
	std::string a, b;
	std::cin >> a >> b;
	int suma(0), sumb(0);
	for (int i = 0; i < a.length(); i++)
	{
		if (a[i] >=65 && a[i] <=90 )
		{
			a[i] += 32;
		}
		if (b[i] >=65 && b[i] <=90 )
		{
			b[i] += 32;
		}
	}
	if (a == b)
	{
		std::cout << 0;
	}
	if (a > b)
	{
		std::cout << 1;
	}
	if(a<b)
	{
		std::cout << -1;
	}
}