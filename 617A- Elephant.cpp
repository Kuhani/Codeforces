#include <iostream>
using namespace std;
int main()
{

    int x;
    int poz = 0;
    int rest = 0;
    cin >> x;
    rest = x % 5;
    if (rest == 0)
    {
        poz = x / 5;
        cout << poz;
    }
    else {
        poz = x / 5 + 1;
        cout << poz;
    }


}