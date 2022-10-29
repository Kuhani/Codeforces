#include <iostream>
#define ll long long
int main()
{
	std::string n;
	std::cin >> n;
	int h = 72, q = 81, nine = 57;
	int rez = 0;
	for (int i = 0; i < n.size(); i++)
	{
		if (n[i] == h || n[i] == q || n[i] == nine)
		{
			rez++;
		}
	}
	if (rez > 0)
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}
}