//
// Created by HP on 10-Mar-18.
//

#include <bits/stdc++.h>
using namespace std;

int main(void){
    int a,b,s=0,j=0;
    cin>>a>>b;
    while(a>0){
        if(a%b==0){
            s+=a;
            a/=b;
        }
        else
        {
            if(a>=b)
            {
                s+=a;
                j+= (a-b*(a/b));
                a/=b;
                if(j>=b)
                { a+=j/b;
                     j = j-b*(j/b); }
            }
            else{
                s+=a;
                if(a+j >= b)
                    s+=1;
                a=0;
            }
        }
    }
    cout<<s;
    return 0;
}