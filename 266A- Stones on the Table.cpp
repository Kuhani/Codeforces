#include <iostream>
#define ll long long
int main()
{
	int n;
	std::cin >> n;
	char a[50] = {};
	int nr = 0;
	for(int i=0;i<n;i++)
	{
		std::cin >> a[i];
		if (a[i] == a[i - 1])
		{
			nr++;
		}
	}
	std::cout << nr;
}
