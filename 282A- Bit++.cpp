#include <iostream>
#include <string>
#define ll long long
int main()
{
	int n;
	std::cin >> n;
	int rez = 0;
	for (int i = 0; i < n; i++)
	{
		std::string a;
		std::cin >> a;
		if (a == "--X" || a == "X--")
		{
			rez--;
		}
		else
		{
			if (a == "++X" || a == "X++")
			{
				rez++;
			}
		}
	}
	std::cout << rez;
}