#include <iostream>
int main()
{
   std::string s;
   int n, rez(0);
   std::cin>>n;
   for(int i=0;i<n;i++)
   {
    std::cin>>s;
        if(s[0]=='y' ||s[0]=='Y')
        {
            if(s[1]=='e'||s[1]=='E')
            {
                if(s[2]=='s'||s[2]=='S')
                {
                    rez++;
                }
            }
        }
    if(rez!=0)
   {
    std::cout<<"YES"<<std::endl;
   }
   else{
    std::cout<<"NO"<<std::endl;
   }
   rez=0;
   }
}
