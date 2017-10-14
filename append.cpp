#include<cstring>
#include<iostream>
using namespace std;
void append( char *a,char *b)
{
  int len=strlen(a),i;

  for(i=0;b[i]!='\0';++i)
  {
      a[len+i]=b[i];
  }

  cout<<a<<endl;
}
int main()
{
  char a[100],b[100];
  cin.getline(a,100,' ');
  cin.getline(b,100,' ');
  append(a,b);



}
