#include<iostream>
using namespace std;

void per(char *input,int i)
{
  if(input[i]=='\0')
  {
    cout<<input<<endl;
    return;
  }

  for(int j=i;input[j]!='\0';++j)
  {
    swap(input[i],input[j]);
    per(input,i+1);
    swap(input[i],input[j]);//backtrack


  }
}


int main() {
  char a[]="ABCD";
  per(a,0);
  return 0;
}
