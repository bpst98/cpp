#include<iostream>

using namespace std;


int ladder(int i,int n)
{

  int ans;
  if(i==n)
  return 1;
  if(i>n)
  return 0;

  for(;i<=n;++i)
  ans+=ladder(i,n);

  return ans;



}

int main()
{


  cout<<ladder(0,5)<<endl;

}
