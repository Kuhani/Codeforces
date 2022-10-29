#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int rest = 0;
    int rez = 0;
    if (a > b)
    {
        rez = b;
        rest = (a - b) / 2;

    }
    else {
        rez = a;
        rest = (b - a) / 2;
    }

    cout << rez << " " << rest;
}