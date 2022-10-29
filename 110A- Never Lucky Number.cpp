#include <iostream>
using namespace std;
int main()
{
	long long int n;
	cin >> n;
	long long int nr = 0;
	long long int last = n % 10;

	for (int i = 0; i < 20; i++) {

		if (last == 4 || last == 7)
		{
			nr++;

		}
		n = n / 10;
		last = n % 10;
		if (n == 0)
		{
			break;
		}
	}
	if (nr == 4 || nr == 7)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}