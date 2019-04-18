#include<iostream>
#include<vector>

using namespace std;

int main()
{


vector<int> arr;

for(int i=0;i<5;++i)
arr.push_back(i+2);

cout<<arr.size()<<endl   ;       //=====gives size
arr.pop_back();           //=====pop arrack

  //sort
  sort(arr.begin(),arr.end());
cout<<" capacity "<<arr.capacity()<<endl;
  for(int i=0;i<5;++i)
cout<<arr[i]<<"  "<<endl;



}
