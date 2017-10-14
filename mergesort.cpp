#include<iostream>
using namespace std;

void mergesort(int a[],int b[],int na,int nb)
{
  int i=na-1;
  int j=nb-1;

  int k= na+nb-1;          //size of net array

  while(i>=0&&j>=0)
  {
    if(a[i]>b[j])
    {
      a[k]=a[i];
      --i;
      --k;
    }
    else
    {
      a[k]=b[j];
      --j;
      --k;
    }

  }
  while(j>=0)
  {
    a[k]=b[j];
    --k;
    --j;
  }

}


int main() {

  int a[7]={1,7,8,10};
  int b[3]={0,3,5};
mergesort(a,b,4,3);
for(int i=0;i<7;++i)
cout<<a[i]<<" ";
    return 0;
}
