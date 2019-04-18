#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void printHeap(  priority_queue< int,vector<int>,greater<int> >h )
{
  while(!h.empty())
  {
    cout<<h.top()<<"  ";
    h.pop();
  }
}
int main()
{
  priority_queue< int,vector<int>,greater<int> >h;
  int k=3  ;
  int cs=0 ;
  int c =1;

  while(c)
  {
    int no;
    cin>>no;
    if(no==-1){
      c=0;
    printHeap(h);
  }
}
  if(cs<k)
  {

    h.push(no);
    ++cs;
  }

}
