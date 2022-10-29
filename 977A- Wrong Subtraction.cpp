#include <iostream>
using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;
	int last = 0;
	for (int i = 0; i < k; i++)
	{
		last = n % 10;
		if (last != 0)
		{
			n--;

		}
		else
		{
			n = n / 10;

		}
	}
	cout << n;

}