#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int h[100][2];
	int a[100]; //home
	int b[100]; //guest

	int games = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> h[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (h[i][0] == h[j][1])
			{
				games++;
			}
		}
	}
	cout << games;
}