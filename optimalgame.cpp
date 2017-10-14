#include<iostream>
using namespace std;
int max (int a, int b)
{
  if(a>b)
  return a;
  else
  return b;
}

  int win(int a[],int s,int e)
  {

      if(s>=e)
      return 0;




      int lsum,rsum,lamt,ramt,lsum2,rsum2;
//left element
      lsum = max(a,s+2,e);
      rsum = max(a,s+1,e-1);

      lamt = min(lsum,rsum)+a[s];
//right element
      lsum2 = max(a,s+1,e-1);
      rsum2 = max(a,s,e-2);
      ramt = min(lsum2,rsum2)+a[s];

      return max(lamt,ramt);

  }

int main()
{
int a[10];
int n;
cin>>n;

for(int i=0;i<n;++i)
{
  cin>>a[i];
}
cout<<win(a,0,n-1);


  return 0;


}
