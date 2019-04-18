#include <iostream>
#include<cstring>

using namespace std;

void func(int a[][20],int m,int n)
{
  int i,j,d=m,r=n;
  for(i=0;i<m;++i)
  {
    cout<<a[i][];
  }

}
int main()
{
  int m,n;
  cin>>m>>n;
  int a[m][n];
  for(int i=0;i<m;++i)
  {

      for(int j=0;j<m;++j)
      {
        cin>>a[i][j];
      }
  }

  func(a,m,n);


}
