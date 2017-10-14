#include<iostream>



void bubble(int *a,int a)
{
  for(int i=0;i<n-1;++i)
  {
    for(int j=0;j<n-i-2;++j)
    {
      if(a[j]>a[j+1])
      swap(a[j],a[j+1]);
    }
  }
}

int main()
{
  int a[]={1,5,2,7};
  int n=4;

  bubble(a,n);

  for(int i=0;i<n;++i)
  {
    cout<<a[i]<<",";
  }



}
