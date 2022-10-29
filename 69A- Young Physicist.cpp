#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int x[100] = {};
	int y[100] = {};
	int z[100] = {};
	int xtest = 0, ytest = 0, ztest = 0;
	int rez = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> x[i] >> y[i] >> z[i];
	}
	for (int i = 0; i < n; i++)
	{
		xtest += x[i];
		ytest += y[i];
		ztest += z[i];
	}
	rez = xtest + ytest + ztest;
	if (xtest || ytest || ztest || rez != 0)
	{
		cout << "NO";
	}
	else { cout << "YES"; }
}