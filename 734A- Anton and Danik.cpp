#include <iostream>
#include <string>
#define ll long long
int main()
{
	int n;
	std::cin >> n;
	std::string s;
	std::cin >> s;
	int a = 0, d = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'A')
		{
			a++;
		}
		else {
			if (s[i] == 'D')
			{
				d++;
			}
		}
	}
	if (a > d)
	{
		std::cout << "Anton";
	}
	else
	{
		if (d > a)
		{
			std::cout << "Danik";
		}
	}
	if (a == d)
	{
		std::cout << "Friendship";
	}
}