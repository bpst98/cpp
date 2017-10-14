#include<iostream>

using namespace std;

int add(int *a,int n,int sum)
{
  if(n<0)
  return 0;

  sum =sum+add(a+1,n,sum);

  return a[0];
}


int main()
{
  int n;
  cin>>n;

  for(int i=;i<n;++i)
  cin>>a[i];

  add(a,n,0);

}
