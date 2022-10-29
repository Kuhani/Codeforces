#include <iostream>
#include <string>
#define ll long long
int main()
{
	std::string s;
	std::string t;
	std::cin >> s >> t;
	int j = s.size()-1;
	int a = 0;
	int nr = 0;
	if (s.size() == 1)
	{
		if (s != t)
		{
			nr++;
		}
		if (nr != 0)
		{
			std::cout << "NO";
		}
		else
		{
			std::cout << "YES";
		}
	}
	if (s.size() > 1) {
		for (int i = j; i > 0; i--)
		{
			if (s[i] != t[a])
			{
				nr++;
			}
			a++;
		}
		if (nr != 0)
		{
			std::cout << "NO";
		}
		else
		{
			std::cout << "YES";
		}
	}
}