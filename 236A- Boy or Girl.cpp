#include <iostream>
#include <string>
#define ll long long
int main()
{
	char username[100];
	std::cin >> username;
	int nr = 0;
	for (int i = 0; i < strlen(username) - 1; i++)
	{
		for (int j = i+1; j < strlen(username); j++)
		{
			if (username[i] == username[j])
			{
				nr++;
			}
		}
	}
	nr = strlen(username) - nr;
	std::cout << nr<<std::endl;
	if (nr % 2 !=0)
	{
		std::cout << "IGNORE HIM!";
	}
	else
	{
		std::cout << "CHAT WITH HER!";
	}
}
