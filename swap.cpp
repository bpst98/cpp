#include<iostream>
using namespace std;

void swap(int &a,int &b)

{
  a=a^b;
  b=a^b;
  a=a^b;

}
 int main()
 {
   int a=10,b=12;

   cout<<a<<endl<<b<<endl;

   swap(a,b);


   cout<<a<<endl<<b<<endl;

   return 0;

 }
