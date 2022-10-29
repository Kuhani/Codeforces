#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int rez = 0;
	for (int i = 0; i < n; i++)
	{
		string a;
		cin >> a;
		if (a == "Icosahedron")
		{
			rez = rez + 20;
		}
		if (a == "Dodecahedron")
		{
			rez = rez + 12;
		}
		if (a == "Octahedron")
		{
			rez = rez + 8;
		}
		if (a == "Cube")
		{
			rez = rez + 6;

		}
		if (a == "Tetrahedron")
		{
			rez = rez + 4;
		}
	}
	cout << rez;
}