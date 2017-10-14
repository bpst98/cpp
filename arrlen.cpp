//to find the length of array
#include<iostream>
#include<cstring>
using namespace std;

int len(char a[])
{
  int i=0;
  for(;a[i]!='\0';++i)
  {

  }
    return i;
}

bool palin(char *a)
{
  int i=0;
  int j=len(a)-1;

  while(i<j)
  {
    if(a[i]!=a[j])
    {
      return false;
    }
    ++i;
    --j;
  }
  return true;
}

int main()
{

char a[50];
cin.getline(a,50);

cout<<a<<endl;

cout<<len(a)<<endl;

if(palin(a))
cout<<"palindrome"<<endl;
else
cout<<"not a palindrome"<<endl;

return 0;
}
