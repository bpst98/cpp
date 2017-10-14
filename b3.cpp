#include<iostream>
using namespace std;

bool isprime(int no)
{
  int n=2,flag=1;
  while(n*n<=no)
  {
    if(no%n==0)
    {
      return 0;
    }
    ++n;
  }
  return flag;
}

void generateprime(int range) {

  cout<<2<<"\n ";

  for(int i=3;i<=range;++i)

  {

    if(isprime(i))

    cout<<i<<"\n ";

  }

  }

int main()
{
  int n;
  cin>>n;
  generateprime(n);
  return 0;

}
