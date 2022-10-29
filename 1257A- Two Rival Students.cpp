#include <iostream>

int main()
{
    int t, n, x, a, b;
    std::cin >> t;
    for (int i = 0; i < t; i++)
    {
        std::cin >> n >> x >> a >> b;
        int l, r;
        l = x + abs(a - b);
        r = std::min(l, n - 1);
        std::cout << r << std::endl;
    }
}
