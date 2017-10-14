#include<iostream>
using namespace std;

bool isSafe(int board[][20],int i,int j,int n)
{
  for(int row=0;row<i;++row)
  {
    if(board[row][j]==1)
    return false;
  }
  int x=i;
  int y=j;
  while(x>=0&&y>=0)
  {
    if(board[x][y]==1)
    return false;
    --x;
    --y;
  }
    x=i;
   y=j;
  while(x>=0&&y<=n)
    {
    if(board[x][y]==1)
    return false;
    ++y;
    --x;
  }
  return true;
}


bool solve(int board[][20],int i,int n)  //i - current row
{//base case
  if(i==n)
  for(int a=0;a<n;++a){
    for(int b=0;b<n;++b)
    {
      if(board[a][b]==1)
      cout<<"Q ";

      else cout<<"0 ";

    }
    cout<<endl;
    }

//recursive case
for(int j=0;j<n;++j)
{
  if(isSafe(board,i,j,n))
  board[i][j]=1;
  bool nextqueen=solve(board,i+1,n);
  if(nextqueen)
  return true;

  board[i][j]=0;
}


return false;
}

int main()
{
int n;
int board[20][20]={0};
cin>>n;
solve(board,0,n);
return 0;

}
