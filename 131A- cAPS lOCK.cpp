#include <iostream>

int main()
{
	std::string string;
	std::cin >> string;
	int contor = 0;
	bool a = true;
		for (int i = 1; i < string.size(); i++)
		{
			if (string[i] >=97  && string[i] <= 122)
			{
				a=false;
				break;
			}
		}
		if (a)
		{
			for (int i = 0; i < string.size(); i++)
			{
				if (string[i] >= 97 && string[i] <= 122)
				{
					string[i] -= 32;
				}
				else
				{
					string[i] += 32;
				}
			}
		}
		std::cout << string;
}
