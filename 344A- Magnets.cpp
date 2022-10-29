#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[100000] = {};
	int g = 1;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n - 1; i++)
	{
		if (a[i] != a[i + 1])
		{
			g++;
		}
	}
	cout << g;

}