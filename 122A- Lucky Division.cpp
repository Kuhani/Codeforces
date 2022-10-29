#include <iostream>

int main()
{
	int a[14] = { 4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 777, 774, 747, 744};
	int nr, contor=0;
	std::cin >> nr;
	for (int i = 0; i < 14; i++)
	{
		if (nr % a[i] == 0)
		{
			contor++;
		}
	}
	if (contor > 0)
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}
}