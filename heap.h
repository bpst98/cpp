#include<iostream>
#include<vector>
using namespace std;

class minheap
{
public:

    vector<int> v;
    void heapify( int index)
    {
      int left=2*index;
      int right=left+1;
       int minindex=index;

      if(left<v.size()&&(v[minindex]<v[left]))
      {
          minindex=left;
      }
      if(right<v.size()&&(v[minindex]<v[right]))
      {
        minindex=right;
      }
      if(index!=minindex)
      swap(v[minindex],v[index]);
      heapify(minindex);
    }
    //................constructor
    minheap()
    {
      v.push_back(-1);
    }
    //................push()
    void push(int data)
    {
      v.push_back(data);
      int index = v.size()-1;
      int parent=index/2;

      while(index>1 && v[index]<v[parent])
      {
        swap(v[index], v[parent]);
        index=parent;
        parent=parent/2;

      }
    }
    //............pop()
    void pop()
    {
      int last=v.size()-1;
      swap(v[1],v[last]);
      v.pop_back();

    }

};
