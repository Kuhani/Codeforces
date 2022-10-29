#include <iostream>
#define ll long long
int main()
{
	std::string n;
	std::cin >> n;
	int r = 1, max=0;
	for (int i = 1; i <= n.size(); i++)
	{
		if (n[i] == n[i - 1])
		{
			r++;
			
		}
		else 
		{
			r = 1;
		}
		if (r > max)
		{
			max = r;
		}
	}
	if (max > 6)
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}
}