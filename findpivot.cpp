#include<iostream>
using namespace std;
int find(int a[],int n)
{
  int e=n-1;
  int s=0;

  while(s<=e)
  {
    int mid=(s+e)/2;

    if(mid<e&&a[mid]>a[mid-1])
{    return mid;
}
    else if(mid>s&&a[mid]<a[mid-1])
    {
      return mid-1;
    }

    if(a[s]<a[mid]){
      s=mid+1;
    }
    else{
      e=mid-1;
    }

  }    //end of while

}



int main() {
  int a[]={5,6,7,1,2,3,6,8};
cout<<find(a,sizeof(a)/sizeof(int));

    return 0;
}
