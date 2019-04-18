//PATTERN MAGIC
/*https://hack.codingblocks.com/contests/c/95/49*/


#include<iostream>
using namespace std;

int main(void){
    int r,c;
    cin>>r;
    c=r;

    for(int i=0;i<r/2+1;i++){           //rows
        for(int j=0;j<c;j++){       //cols

            int div=i+1;
            if(j>=r/div && j<(r-r/div)){
            cout<<" ";
            }else{
            cout<<"*";
            }
        }
        cout<<endl;
    }

    for(int i=0;i<r/2;i++){           //rows
        for(int j=0;j<c;j++){       //cols

            int div=r/2-i;
            if(j>=r/div && j<(r-r/div)){
            cout<<" ";
            }else{
            cout<<"*";
            }
        }
        cout<<endl;
    }

}

