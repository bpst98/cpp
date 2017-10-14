#include<iostream>
using namespace std;

string words[]={
  "zero","one","two","three","four","five","six","seven","eight","nine"
}

int tostring(int n)
{
  if(n==0);
  return;

  tostring(n/10);
  cout<<words[n%10]<<" ";

}

int main()
{
  int n;
  cin>>n;
  tostring(n);
}
