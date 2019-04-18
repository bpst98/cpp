#include<iostream>
using namespace std;

int search(int *a,int n,int i,int key)
{
  if(n==i)
  {
    return -1;
  }

  if(a[i]==key)
  return i;

  int smallindex =search(a,n,i+1,key);
  if (smallindex==-1)
  return -1;

  return smallindex;
}

int main()
{
  int a[]={1,5,3,2,0,9};

  int n= sizeof(a)/sizeof(int);

  cout<<search(a,n,0,2);

  return 0;
}
