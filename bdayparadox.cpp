#include<iostream>
using namespace std;



int main()
{
  float p=1;     //prob
  float den=365,num=365;
  int people=0;
  while(p>.5)
  {
    p*=(num/den);
    people++;
    --num;
    cout<<"prob is "<<p<<"and people "<<people<<endl;
  }
return 0;
}
