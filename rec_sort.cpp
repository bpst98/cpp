#include<iostream>
using namespace std;

bool sort(int *a,int n)    //optimized
{
  if (n==1)
  return true;


  if(a[0]<a[1]&&sort(a+1,n-1))
  return true;

  return false;
}

int main()
{
  int a[]={2,3,4,5};
  int n=4;

  if(sort(a,n))
  cout<<"sorted array";
  else
  cout<<"not sorted";

  return 0;
}
