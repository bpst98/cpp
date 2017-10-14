#include<iostream>
#include<cstring>
using namespace std;

//char *strtok(char *array, char *delim) function

int main()
{
  char a[100]="some array s";
  cout<<a<<endl;

  char *ans;
  ans= strtok(a," ");

  while(ans!=NULL)
  {
    cout<<ans<<endl;
    ans=strtok(NULL," ");
  }





}
