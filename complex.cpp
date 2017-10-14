#include<iostream>

using namespace std;

class Complex
{
  int a,b;

  public :


   Complex ()            //default
   {
     a=0;
     b=0;
   }

   Complex(int x, int y)       //parameterised
   {
     a=x;
     b=y;
   }
   Complex(Complex &c)      //copy
   {
     a=c.a;
     b=c.b;
   }

   void scan()              //scan
   {
     cin>>a;
     cin>>b;

   }

   void print()       //print
   {
     if(b!=0)
     cout<<a<<" + i"<<b<<endl;
     else
     cout<<a<<endl;

   }


    void operator=(Complex &c)           // operator =
    {
        a=c.a;
        b=c.b;
    }


    Complex & operator+(Complex &c)               //operator +
    {
      Complex *d=new Complex;
      (*d).a=a+c.a;
      (*d).b=b+c.b;
      return (*d);
    }
    Complex & operator*(Complex &c)         //operator *
    {
      Complex *d=new Complex;
      (*d).a=a*c.a;
      (*d).b=b*c.b;
      return (*d);

    }


};

    istream & operator >>(istream &x, Complex &c)     //operator >>
{
  c.scan();
  return x;
}

    ostream & operator <<(ostream &x, Complex &c)     //operator <<
{
  c.print();
  return x;
}

int main()
{
  Complex c1(2,1);
  Complex c2(5,4);
  Complex c3=c1*c2;
  c1.print();
  c2.print();
  c3.print();


}
