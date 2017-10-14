#include<iostream>
#include<cstring>
using namespace std;

void largest()
{

}

int main()
{
  char a[100],largest[100];
  int len=0,max=0 ;
  int n,i;
  cin>>n;

  cin.ignore();

  for(i=0;i<n;++i)
  {
    cin.getline(a,100);
    len=strlen(a);
    if(len>max)
    {
    strcpy(largest,a);
    max=len;
    }
  }


  cout<<largest<<endl;





}
