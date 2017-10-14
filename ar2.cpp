#include<iostream>
using namespace std;
int main()
{

int a;
char b[100];
cin>>a;
cin.get();
cin.getline(b,100,' ');   //cin.getline(array,size,delim)

cout<<a<<endl;
cout<<b<<endl;

}
