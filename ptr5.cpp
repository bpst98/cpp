#include<iostream>
using namespace std;

int *arra()
{
  int a[]={1,2,3};
  cout<<a<<endl;
  for(int i=0;i<3;++i)
  {
    cout<<a[i];
  }
  return a;
}

int main()
{
  int *b=arra();
  cout<<"in main() "<<b;

for(int i=0;i<3;++i)
{
  cout<<b[i];
}
cout<<endl;
}
