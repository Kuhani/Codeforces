#include <iostream>
#include <string>
#define ll long long
int main()
{
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::string word;
		std::cin >> word;
		if (word.size() > 10)
		{
			std::cout << word[0] << word.size() - 2<<word.back()<<std::endl;
		}
		else
		{
			std::cout << word << std::endl;
		}
	}
}