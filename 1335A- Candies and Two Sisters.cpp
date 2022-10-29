#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		int b = a / 2;
		if (a < 3)
		{
			cout << 0 << endl;
		}
		else {
			if (a % 2 == 0)
			{
				cout << b - 1 << endl;
			}
			else {
				cout << b << endl;
			}
		}
	}
}