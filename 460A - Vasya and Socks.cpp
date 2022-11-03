#include <iostream>
int main()
{
   int n,m;
   std::cin>>n>>m;
   int rez=n;
   while(n>=m)
   {
        rez+=(n/m);
        n=((n/m)+(n%m));
   }
   std::cout<<rez;
}
