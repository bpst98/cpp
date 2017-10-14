#include<iostream>
using namespace std;

bool isprime(int no)
{
  int n=2,flag=1;
  while(n*n<=no)
  {
    if(no%n==0)
    {
      flag=0;
      break;
    }
    ++n;
  }
  return flag;
}

int main()
{
  int n;
  cin>>n
  if(isprime(n))
  cout<<"prime no.";
  else
  cout<<" not prime";
  return 0;

}
