#include<iostream>

using namespace std;

void print(char *a,int s,int e)
{
  char output[]="";
  if(a[s]=='\0')
  {
    cout<<output;
  }

  print(a,s+1,e);
    output[e]=a[s];
  print(a,s+1,e+1);

}

int main()
{
  print("ABC",0,2);
}
