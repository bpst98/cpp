#include<iostream>
using namespace std;

void bubsort(int *a,int j,int n)
{
  if(n==1||n==0)
  return;

/*  for(int j=0;j<n-1;++j)
  {
    if(a[j]>a[j+1])
    swap(a[j],a[j+1]);
  } */

  if(j==n-1)
  {
    bubsort(a,0,n-1);
    return;
  }

  if(a[j]>a[j+1])
  swap(a[j],a[j+1]);

  bubsort(a,j,n);

}

int main()
{

int a[]={0,1,9,5,3};
int n=sizeof(a)/sizeof(int);

bubsort(a,0,n);
for(int i=0;i<n;++i)
cout<<a[i];

}
