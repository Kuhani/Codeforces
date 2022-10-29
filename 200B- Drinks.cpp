#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int v[100] = {};
	float rez = 0;
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
		sum = sum + v[i];
	}
	rez = sum / n;
	cout << rez;
}