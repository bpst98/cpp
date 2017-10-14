#include<iostream>
using namespace std;

void bsort(long int *a,int n)
{
  int i,j;
  for(i=0;i<n-1;++i)
  {
    for(j=0;j<n-i-1;++j)
    if(a[j]>a[j+1])
    swap(a[j],a[j+1]);
  }
}

int main()
{
  long int a[100];
  int n;
for(int i=0;i<n;++i)
cin>>a[i];

  bsort(a,n);
for(int i=0;i<n;++i)
cout<<a[i]<<endl;

}
