#include <iostream>
using namespace std;
int main()
{

    int x; //integer 1
    cin >> x;
    int a = x / 1000;
    int b = x / 100 - a * 10;
    int c = x / 10 - a * 100 - b * 10;
    int d = x - a * 1000 - b * 100 - c * 10;
    int e, f, g, h;
    for (int i = x + 1; i <= 10000; i++)
    {
        e = i / 1000;
        f = i / 100 - e * 10;
        g = i / 10 - e * 100 - f * 10;
        h = i - e * 1000 - f * 100 - g * 10;
        if (e != f && e != g && e != h && f != g && f != h && g != h) {

            cout << i;
            break;

        }
    }



}