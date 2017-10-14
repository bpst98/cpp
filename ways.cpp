#include<iostream>

using namespace std;


int ways(int i,int j)
{
  int k;
  if(i==0&&j==0)
  return 1;

  if(i<0||j<0)
  return 0;

  int ans=0;
  for(k=1;k<j;++k)
  ans+=ways(i-k,j);

  for(k=1;k<j;++k)
  ans+=ways(i,j-k);

  return ans;

}

int main()
{

  cout<<ways(3,3)<<endl;

}
