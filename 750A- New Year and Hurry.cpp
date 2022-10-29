#include <iostream>
using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;
	int timp = 0;
	int t = 240;
	int probleme = 0;
	for (int i = 1; i <= n; i++)
	{
		k = k + 5 * i;
		probleme++;
		if (k > t)
		{
			probleme--;
			break;
		}

	}
	cout << probleme;
}