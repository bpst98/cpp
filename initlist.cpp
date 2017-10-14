#include<cstring>
#include<iostream>
using namespace std;

class car{
  int model;
  string color;
  string name;
  const int tyre;

  //static data member

  //static int count;

public:

  car(const int m, string c, string n,int t=4):   model(m),color(c),name(n)

  {
    ++count;
  }
  //initialise static member
  int car :: count=0;


    car(int m, string c, string n)
  {
    model=m;
    color=c;
    name=n;
  }

  static int getcount()
  {
    return count;
  }
};

int main()
{
  car a,b,c;
  cout<<car::getcount()<<endl;
}
