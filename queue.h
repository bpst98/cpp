#include<iostream>
using namespace std;

class Queue()
{
    int cs;
    int ts;
    int f;
    int r;
    int *arr;

public :
//................constructor
Queue(int ds=4)
{
  f=0;cs=0;ts=ds;r=ts-1;
  arr=new int [ds];
}
//...............func for checkin if the queue is full
bool full()
{
  return cs==ds;
}
//..............push
void push (int data)
{
  if(!full())
  {
      r=(r+1)%ts;
      arr[r]=data;
      cs++;
  }
}
//..............pop
void pop()
{ if(!empty())
    f=(f+1)%ts;
    cs--;
}
};
