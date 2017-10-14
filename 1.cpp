#include<iostream>
using namespace std;
 bool ans(int *a,int n, int key)
 {
     if(n<0)
        return false;
     if(a[n]==key){
       return true;
     }
     return ans(a,n-1,key);
 }
int main() {
    int n,key,a[10];
    cin>>n;
    for(int i=0;i<n;++i)
    cin>>a[i];
    cin>>key;
    if(ans(a,n,key))
    cout<<"true";
    else
    cout<<"false";
	return 0;
}
