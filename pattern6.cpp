#include <iostream>
using namespace std;

 int main()
{
    int i,t, j, n;
    cin>>t;

    n=t/2+1;
    //Loop for printing upper half part of the pattern
    for(i=1; i<=n; i++)
    {
        for(j=i; j<=n; j++)
        {
            cout<<"*\t";
        }
        for(j=1; j<i; j++)
        {
            cout<<"\t";
        }
        for(j=1; j<i; j++)
        {
            cout<<"\t";
        }
        for(j=i; j<=n; j++)
        {
            cout<<"*\t";
        }
        cout<<"\n";
    }
    //Loop for printing lower half part of the pattern
    for(i=2; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout<<"*\t";
        }
        for(j=i; j<n; j++)
        {
            cout<<"\t";
        }
        for(j=i; j<n; j++)
        {
            cout<<"\t";
        }
        for(j=1; j<=i; j++)
        {
            cout<<"*\t";
        }
        cout<<"\n";
    }
    return 0;
}
