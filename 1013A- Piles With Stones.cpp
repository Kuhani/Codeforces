#include <iostream>
int main()
{
	int n;
	std::cin >> n;
	int a[1000] = { 0 }, b[1000] = { 0 };
	int c=0, d = 0;
	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
		c += a[i];
	}
	for (int i = 0; i < n; i++)
	{
		std::cin >> b[i];
		d += b[i];
	}
	if(d>c)
	{
		std::cout << "No";
	}
	if (c >= d)
	{
		std::cout << "Yes";
	}
}