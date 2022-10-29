#include <iostream>
using namespace std;
int main()
{
    int a;
    int v[1000][1000];
    int rezolvat = 0;
    cin >> a;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> v[i][j];

        }
    }
    for (int i = 0; i < a; i++)
    {
        if (v[i][0] + v[i][1] + v[i][2] >= 2)
        {
            rezolvat++;
        }

    }
    cout << rezolvat;
}