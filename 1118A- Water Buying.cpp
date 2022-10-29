#include <iostream>
#define ll long long
int main()
{
	int q;
	std::cin >> q;
	for (int i = 0; i < q; i++)
	{
		ll n, a, b, res=0;
		std::cin >> n >> a >> b;
		if (b>2*a)
			{
				res = a * n;
			}
		else {
			if (n % 2 == 0)
			{
				res = b * n/2;
			}
			else {
				res = (n - 1) / 2 * b + a;
			}
		}
		std::cout << res << std::endl;
	}
}