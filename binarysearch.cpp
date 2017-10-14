#include <iostream>
using namespace std;
int binary(int a[],int n,int key)
{
  int s=0;
  int e=n-1;
  while(s<=e){
    int mid=(s+e)/2;
    if(a[mid]==key)
    return mid;
    else if (a[mid]>key) {
      s=mid-1;
    }
    else if (a[mid]<key) {
      e=mid-1;
    }
  }
  return -1;

}

int main() {

int a[]={1,2,3,5,7,9,11};
int n=sizeof(a)/sizeof(int);
cout<<"index"<<binary(a,n,8);
  return 0;
}
