//
//  main.cpp
//  ParanthesisBACKTRACKING
//
//  Created by Bhanu Pratap Singh Thapliyal on 19/04/19.
//  Copyright © 2019 Bhanu Pratap Singh Thapliyal. All rights reserved.
//

#include <iostream>

using namespace std;

void makeParentheses(int pos,int pairs,int opening,int closing,char OutPut[]){
 
    //end of brackets
    if(pos == 2*(pairs)){
        OutPut[pos] = '\0';
        cout<<OutPut<<endl;
        return;
    }
    //solving rest by recursion
    
    if(opening<pairs){
        OutPut[pos]='{';
        makeParentheses(pos+1, pairs, opening+1, closing, OutPut);
    }
    if(closing<opening){
        OutPut[pos]='}';
        makeParentheses(pos+1, pairs, opening, closing+1, OutPut);
        
    }
    
}


int main(){
    char array[100];
    int n;
    cout<<"Enter the number of brackets (To see different combinations:";
    cin>>n;
    makeParentheses(0, n, 0, 0, array);
}
