#include <iostream>
#define ll long long
int main()
{
	std::string a;
	std::cin >> a;
	int j = 0;
	for (int i = 0; i < a.length(); i++)
	{
		if (a[i] >= 65 && a[i] <= 90)
		{
			a[i] += 32;
		}
		if (a[i] != 'a' && a[i] != 'e' && a[i] != 'i' && a[i] != 'o' && a[i] != 'u' && a[i] != 'y')
		{
			std::cout << '.' << a[i];
		}
	}
} 