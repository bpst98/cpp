#include<iostream>
using namespace std;

int fun(char *a,int n)
{

  if(n==0)
  return 0;

  int last= a[n-1]-'0';    //end digit

  return fun(a,n-1)*10+last;



}

int main()
{
  char a[]="1234";
  int n=4;
  cout<<fun(a,n)<<endl;

}
