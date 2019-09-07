//
// Created by HP on 06-Mar-18.
//
#include<bits/stdc++.h>
using namespace std;

int main(void){
    int i,a,b;
    cin>>a>>b;
    while(a>0 && b>0){
        if(a-2*b>=0)
            a=a-2*b;
        if(b-2*a>=0)
            b=b-2*a;
    }
    cout<<a<<" "<<b;
    return 0;
}