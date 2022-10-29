#include <iostream>
using namespace std;
int main()
{

    int w; //nr banane dorite
    int k; //dolari prima banana
    int n; //dolari
    int imprumut = 0; //dolari imprumutati
    int cost = 0; //cost total banane
    cin >> k >> n >> w;
    for (int i = 0; i <= w; i++)
    {
        cost = i * k + cost;
    }
    if (n < cost)
    {
        imprumut = cost - n;
        cout << imprumut;

    }
    else {
        cout << 0;
    }



}