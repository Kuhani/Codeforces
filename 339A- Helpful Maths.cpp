#include <iostream>
#include <string>
int main()
{
	std::string s;
	std::cin >> s;
	int rest;
	for (int i = 0; i < s.length(); i += 2)
	{
		for (int j = 0; j < s.length() - 1; j += 2)
		{
			if (s[j] > s[j + 2])
			{
				rest = s[j];
				s[j] = s[j + 2];
				s[j + 2] = rest;
			}
		}
	}
	std::cout << s;
}