#include<bits/stdc++.h>
using namespace std;

bool isvalid(int books[],int n,int s,int current_ans)
{
  int student=1;
  int alloted=0;
  for(int i=0;i<n;++i)
  {
    if(alloted+books[i]<=current_ans)
    alloted+=books[i];
    else
    {
      student++;
      alloted=books[i];
      if(student>s)
      return 0;
    }
  }
  return 1;
}
int minpages(int books[],int n,int std)
{
  int s=40;
  int e=100;
  int ans=0;

  while (s<=e) {
    int mid=(s+e)/2;

    if(isvalid(books,n,std,mid))
    {
      ans=mid;
      e=mid-1;
    }
    else
    s=mid+1;
  }
  return ans;
}

int main() {
  clrscr();
int books[]={10,20,30,40};
int n=4;
int s=2;     //no of stds
cout<<minpages(books,n,s);



    return 0;
}
