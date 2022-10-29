#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int nr = 0;
    if (m < n) cout << n - m;
    else
    {
        while (m > n)
        {

            if (m % 2 == 0)
            {
                m = m / 2;
                nr++;
            }
            else
            {
                m = (m + 1) / 2;
                nr += 2;
            }
        }
        while (m < n)
        {
            m++;
            nr++;
            if (m == n)
                break;
        }
        cout << nr;
    }
}