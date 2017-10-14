#include<iostream>

using namespace std;


int path (int i,int j)
{
  if(i==0&&j==0)
  return 1;

  if(i<0||j<0)
  return 0;

  return path(i-1,j )+path(i,j-1);

}

int main()
{

  cout<<path(3,3)<<endl;

}
