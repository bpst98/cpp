#include<iostream>
using namespace std;

void merge(int *x,int *y,int *a,int s,int e)
{
  int i=s;
  int mid=(s+e)/2;
  int j=mid+1;
  int k=s;



}

int mergesort(int *a,int s,int e)
{
  if(s>=e)    //base case
  return ;
}
//recursive
//divide
int mid=(s+e)/2;
int x[100],y[100];

for(int i=s;i<=mid;++i)
x[i]=a[i];

for(int i=mid+1;i<=e;++i)
y[i]=a[i];

//sort

mergesort(x,s,mid);
mergesort(y,mid+1,e);

//merge
merge(x,y,a,s,e);
