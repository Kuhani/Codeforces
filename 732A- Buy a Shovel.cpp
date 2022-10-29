#include <iostream>

int main()
{
	int k, r, suma = 0;;
	std::cin >> k >> r;
	for (int i = 1;; i++)
	{
		suma = i * k;
		if (suma % 10 == 0 || suma % 10 == r)
		{
			std::cout << i;
			break;
		}
	}	
}