#include<iostream>
using namespace std;

void func(&(*p))        //by reference
{
  cout<<p<<endl<<*p<<endl;
  p=p+1;

}

void fun(int *p)         //by value
{
  cout<<p<<endl<<*p<<endl;
  *p=*p+1;
}
int main()
{
int x=10;
int *p=&x;
fun(p);
cout<<x<<endl;


}
