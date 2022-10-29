#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int v[100] = {};
	int max = 0;
	int poz = 0;
	int min = 101;
	int pozmin = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (v[i] > max)
		{
			max = v[i];
			poz = i;
		}
		if (v[i] <= min)
		{
			min = v[i];
			pozmin = i;
		}
	}
	if (pozmin < poz) {
		cout << poz + n - pozmin - 2;
	}
	else {
		cout << poz + n - pozmin - 1;
	}
}