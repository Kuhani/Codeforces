#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[100] = {};
	int h = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] == 1)
		{
			h++;
		}
	}
	if (h > 0)
	{
		cout << "HARD";
	}
	else {
		cout << "EASY";
	}
}