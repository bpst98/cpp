#include<iostream>
using namespace std;

int power( int a,int b)       //basic method
{
  if(b==0)
  {
    return 1;
  }
  int ans=a*power(a,b-1);
  return ans;
}
int exppower(int a, int b)    //fast pwer exponentiation
{
  if(b==0)
  return 1;

  int smallans= exppower(a,b/2);
  smallans*=smallans;

  if(b&1)
  return a*smallans;

  return smallans;
}

int main()
{
  cout<<power(3,5)<<endl;
  return 0;
}
