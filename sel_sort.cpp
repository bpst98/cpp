#include<iostream>

using namespace std;

void selsort(int a[],int n)
{
int min;
    for(int i=0;i<n-1;++i)
      {
        min=i;
           for(int j=i+1;j<n;++j)
              {
                   if(a[min]>a[j])
                   min=j;
                   swap(a[i],a[min]);

              }
      }
      for(int i=0;i<n;++i)
      cout<<a[i];

}


int main()
{
  int a[10],n;
  cin>>n;

    for(int i=0;i<n;++i)
    cin>>a[i];

    selsort(a,n);

    return 0;

}
