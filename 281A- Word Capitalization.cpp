#include <iostream>
#include <string>
#define ll long long
int main()
{
	std::string a;
	std::cin >> a;
	if (a[0] > 96 && a[0] < 123) 
	{
		a[0] -= 32;
	}
	std::cout << a;
}