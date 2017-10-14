#include<iostream>
using namespace std;
int main()
{
int x=10;
int *y;
y=&x;


cout<<x<<endl;
cout<<&x<<endl;
cout<<y<<endl;

cout<<y+1<<endl;
cout<<*(&x)<<endl;
cout<<x+1<<endl;
cout<<"&x+1  "<<(&x+1)<<endl;
cout<<*y+1<<endl;
}
