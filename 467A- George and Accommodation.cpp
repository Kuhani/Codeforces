#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[100] = {}, b[100] = {};
	int rooms = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i] >> b[i];
		if (a[i] + 1 < b[i])
		{
			rooms++;
		}
	}
	cout << rooms;

}