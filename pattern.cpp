#include<iostream>
using namespace std;

int main()
{
  int i,j,n,k ;

  cin>>n;

  for(i=1;i<=n;++i)
  {
    for(k=n-i;k>=1;--k)
    cout<<"\t";

    for(j=i;j<=2*i-1;++j)
    {
      cout<<j<<"\t";
    }
    for(j=2*i-2;j>=i;--j)
    {
      cout<<j<<"\t";
    }
    cout<<endl;
  }
    //
    for(i=n-1;i>=1;--i)
    {
      for(k=n-i;k>=1;--k)
      cout<<"\t";





      cout<<endl;
    }
}
