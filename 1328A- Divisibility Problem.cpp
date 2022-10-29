#include <iostream>
#define ll long long int
using namespace std;
int main()
{
	int n;
	cin >> n;
	ll a, b;

	while (n--)
	{

		cin >> a >> b;
		if (a % b == 0)
		{
			cout << 0 << endl;
		}
		else {
			ll c = a / b;
			c++;
			c = c * b;
			cout << c - a << endl;
		}
	}
}