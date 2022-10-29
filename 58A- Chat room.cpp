#include <iostream>
#include <string.h>

int main()
{
	std::string s;
	std::cin >> s;
	int a = 0;

	for (int i = 0; i < s.length(); i++)
	{
		if (a == 0 && s[i] == 'h')
		{
			a++;
		}
		else if (a == 1 && s[i] == 'e')
		{
			a++;
		}
		else if (a == 2 && s[i] == 'l')
		{
			a++;
		}
		else if (a == 3 && s[i] == 'l')
		{
			a++;
		}
		else if (a == 4 && s[i] == 'o')
		{
			a++;
		}
		if (a == 5)
		{
			break;
		}
	}
	if (a == 5)
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}
}