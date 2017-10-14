#include<iostream>
using namespace std;
void insert_sort(int a[],int n)
{
  int i,j;
  for(i=1;i<n;++i)
  {
    int no=i;
    for(j=i-1;a[j]>=0&&a[j]>n;--j)
    {
      a[j-1]=a[j];
    }
    a[j+1]=no;
  }
}
int main() {
  int a[6];
  for(int i=0;i<6;++i)
  cin>>a[i];

  insert_sort(a,6);

  for(int i=0;i<6;++i)
  cout<<a[i];

    return 0;
}
