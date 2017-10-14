#include<iostream>
#include<cstring>
using namespace std;


  char keys[]={" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz" };

void pad(char *in,char *out,int i,int j)
{
  if(in[i]=='\0')
  {
  out[j]='\0';
  cout<<out<<endl;
  return;
}

//recursion
int digit=in[i]-'\0';     //.......



  for(int k=0;keys[digit][k]!='\0';++k)
  {
    out[j]=keys[digit][k];

    pad(in,out,i+1,j+1)   ;
  }


}



int main()
{
char a[]="456",out[10];
pad(a,out,0,0);

}
