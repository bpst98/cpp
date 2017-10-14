#include<iostream>
#include<algorithm>
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


void generate(int *a,int n)
{
  for(int  i=0;i<n;++i)
  {

    a[i]=n-i;
  }
}

 int main()
 {
   int test=10,test2=10, a,n;
   while(test--)
   {
     cin>>n;
     generate(a,n);
     clock_t start,end;
     start=clock();
     sort(a,a+n);
     end=clock();
     cout<<"merge sort time "<<end-start;
   }


while(test2--)
{
  cin>>n;
  generate(a,n);
  clock_t start,end;
     start=clock();
     bsort(a,a+n);
     end=clock();
     cout<<"merge sort time "<<end-start;


}





   }
 }
