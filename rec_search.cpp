#include<iostream>
using namespace std;

int search(int *a,int n,int key)
{
  if(n==0)
  {
    return -1;
  }

  if(a[0]==key)
  return 0;

  int smallindex =search(a+1,n-1,key);
  if (smallindex==-1)
  return -1;

  return smallindex;
}

int main()
{
  int a[]={1,5,3,2,0,9};

  int n= sizeof(a)/sizeof(int);

  cout<<search(a,n,2);
}
