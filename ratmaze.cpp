#include<iostream>
using namespace std;

void path(int *maze[][20],int *sol[][20],int i,int j,int m.int n)
{
  if(i==m&&j==n)
  {
    sol[i][j]=1;

  }

  for(i=0;i<=m;++i)
  {
    for(j=0;j<=n;++j)
    cout<<sol[i][j]<<" ";

    cout<<endl; 
}

int main()
{
  int a[20][20]={
    "0000",
    "0XX0",
    "0XXX",
    "0000",
    "X000"
                };
  return 0;


}
