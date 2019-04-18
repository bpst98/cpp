#include<iostream>
#include<cmath>
using namespace std;

int factors(int n)
{
  int pro=1;
  for (int i=1; i<=sqrt(n)+1; i++)
   {
       if (n%i==0)
       {
           if (n/i == i)
              pro*=i;

           else
               pro=pro*i*(n/i);
       }
   }
return pro;
}
int main()
{
  int n;
  cin>>n;
  cout<<factors(n);
}
